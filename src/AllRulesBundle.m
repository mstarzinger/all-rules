//
//  AllRulesBundle.m
//  All-Rules Mail Bundle
//
//  Copyright 2011 Michael Starzinger.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import "AllRulesBundle.h"

#import <AppKit/AppKit.h>
#import <Foundation/Foundation.h>
#import <objc/runtime.h>

#import "MessageRouter.h"
#import "MessageViewer.h"

#ifdef DEBUG
#   define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#   define DLog(...)
#endif


// Private API of Mail application.
@interface AllRulesBundle (MVMailBundle)
+ (void)registerBundle;
@end

@implementation AllRulesBundle

+ (NSMenuItem *)newMenuItemWithTitle:(NSString *)title action:(SEL)action andKeyEquivalent:(NSString *)keyEquivalent inMenu:(NSMenu *)menu relativeToItemWithSelector:(SEL)selector offset:(int)offset {
	// Simple utility category which adds a new menu item with title, action
	// and keyEquivalent to menu (or one of its submenus) under that item with
	// selector as its action. Returns the new addition or nil if no such
	// item could be found.

	NSArray *items = [menu itemArray];
	for (int i = 0; i < [items count]; i++) {
		NSMenuItem *menuItem = [items objectAtIndex:i];
		if ([menuItem action] == selector) {
			return ([menu insertItemWithTitle:title action:action keyEquivalent:keyEquivalent atIndex:i + offset]);
		} else if ([[menuItem target] isKindOfClass:[NSMenu class]]) {
			menuItem = [self newMenuItemWithTitle:title action:action andKeyEquivalent:keyEquivalent inMenu:[menuItem target] relativeToItemWithSelector:selector offset:offset];
			if (menuItem)
				return menuItem;
		}
	}

	return nil;
}

+ (void)initialize {
	// Performs initialization of the bundle when this central bundle class is
	// loaded for the first time. Performs neccessary runtime modifications
	// and adds additional menu item.

	DLog(@"Bundle initializing ...");

	// Set the superclass so we can act as a mail bundle.
	class_setSuperclass([self class], NSClassFromString(@"MVMailBundle"));

	// Swizzle a method of the MessageRule class.
	Class cMessageRule = NSClassFromString(@"MessageRule");
	Method mSwizzled = class_getInstanceMethod([self class], @selector(shouldStopEvaluatingRulesSwizzled));
	class_addMethod(cMessageRule,
					method_getName(mSwizzled),
					method_getImplementation(mSwizzled),
					method_getTypeEncoding(mSwizzled));
	method_exchangeImplementations(class_getInstanceMethod(cMessageRule, @selector(shouldStopEvaluatingRules)),
								   class_getInstanceMethod(cMessageRule, @selector(shouldStopEvaluatingRulesSwizzled)));

	// Add a new menu item to the application menu.
	NSMenuItem *menuItem = [self newMenuItemWithTitle:@"Apply All Rules"
											   action:@selector(reapplyAllSortingRules:)
									 andKeyEquivalent:@"l"
											   inMenu:[[NSApplication sharedApplication] mainMenu]
						   relativeToItemWithSelector:@selector(reapplySortingRules:)
											   offset:1];
	[menuItem setKeyEquivalentModifierMask:(NSAlternateKeyMask|NSCommandKeyMask|NSControlKeyMask)];
	[menuItem setTarget:self];

	// Register this bundle with the Mail application.
	[self registerBundle];

	DLog(@"Bundle initialized successfully.");
}

+ (void)reapplyAllSortingRules:(id)sender {
	// Actually performs the mail routing operation for the selected messages
	// in a synchronous way.

	DLog(@"Bundle method activated.");

	// Actually perform the message routing.
	MessageViewer *viewer = [NSClassFromString(@"MessageViewer") frontmostMessageViewer];
	MessageRouter *router = [NSClassFromString(@"MessageRouter") new];
	[router routeMessages:[viewer selectedMessages] fromStores:[viewer _store]];

	DLog(@"Bundle method finished.");
}

- (BOOL)shouldStopEvaluatingRulesSwizzled {
	// Swizzled in as a replacement for the original shouldStopEvaluatingRules
	// implementation. Returns the original result unless the method has been
	// called through this bundle.

	// Fall-back to original implementation.
	BOOL originalResult = [self shouldStopEvaluatingRulesSwizzled];

	// Shortcut if rule would not stop evalutaion anyways.
	if (!originalResult)
		return false;

	// Check if we were called through this bundle.
	NSArray *callStackSymbols = [NSThread callStackSymbols];
	for (int i = 0; i < [callStackSymbols count]; i++) {
		NSString *symbol = [callStackSymbols objectAtIndex:i];
		if ([symbol rangeOfString:@"reapplyAllSortingRules:"].location != NSNotFound) {
			DLog(@"Bundle prevented evaluation stop by rule.");
			return false;
		}
	}

	return originalResult;
}

@end
