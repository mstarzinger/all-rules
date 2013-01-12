/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

/*
 * File: /Applications/Mail.app/Contents/MacOS/Mail
 * UUID: CA67357A-2C0F-352B-98FC-1752A4438371
 * Arch: Intel x86-64 (x86_64)
 *
 *       Objective-C Garbage Collection: Unsupported
 */

@interface MessageViewer_6 : NSResponder

+ (id)_messageViewersByUniqueID;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
+ (void)_mailApplicationDidFinishLaunching:(id)arg1;
+ (void)restoreAllViewersFromDefaults;
+ (unsigned long long)deleteOperationForEvent:(id)arg1 isKeyPressed:(BOOL)arg2;
+ (id)_mailboxUidsForPaths:(id)arg1;
+ (void)searchForString:(id)arg1;
+ (id)frontmostMessageViewerWithOptions:(unsigned long long)arg1;
+ (id)mailboxUidsBeingViewed;
+ (void)showAllViewers;
+ (void)deregisterViewer:(id)arg1;
+ (void)registerNewViewer:(id)arg1;
+ (id)existingViewerShowingMessage:(id)arg1;
+ (id)viewerForMailboxWithTag:(unsigned long long)arg1;
+ (id)mailboxUidForFavoritesBarPosition:(unsigned long long)arg1;
+ (id)existingViewerForMailboxUid:(id)arg1;
+ (id)allSingleMessageViewers;
+ (id)allMessageViewers;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
+ (id)messageViewerForUniqueID:(id)arg1;
+ (id)toolbarIdentifier;
- (void)unfreezeAndUndimMessageView;
- (void)freezeAndDimMessageView;
- (void)unfreezeMessageView;
- (void)unfreezeMessageList;
- (void)unfreezeMessageListAndView;
- (void)freezeMessageListAndView;
- (void)_alwaysShowDuplicatesDidChange:(id)arg1;
- (void)window:(id)arg1 startCustomAnimationToExitFullScreenWithDuration:(double)arg2;
- (id)customWindowsToExitFullScreenForWindow:(id)arg1;
- (BOOL)usesCustomFullScreenAnimation;
- (BOOL)isModal;
- (BOOL)hasModalWindow;
- (void)_windowDidExitFullScreen:(id)arg1;
- (void)_windowWillExitFullScreen:(id)arg1;
- (void)windowDidFailToEnterFullScreen:(id)arg1;
- (void)_windowWillEnterFullScreen:(id)arg1;
- (void)initFullScreenController;
- (void)attachModalWindowWithDelegate:(id)arg1;
- (void)willAttachModalWindowWithDelegate:(id)arg1;
- (void)closeModalWindowForcibly:(BOOL)arg1 animate:(BOOL)arg2 animationType:(long long)arg3;
- (void)closeModalWindowForcibly:(BOOL)arg1 animate:(BOOL)arg2;
- (void)presentModalWindowWithDelegate:(id)arg1;
- (BOOL)isFullScreen;
- (void)animationDidStop:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)_animationDidEndOrStop:(id)arg1;
- (BOOL)animationShouldStart:(id)arg1;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)toggleShowBarContainer:(id)arg1;
- (void)setWithoutAnimationBarContainerVisibility:(BOOL)arg1 forFullScreen:(BOOL)arg2;
- (void)_createUniqueID;
- (void)_updateSearchItemLabel;
- (id)undoManagerForMessageTransfer:(id)arg1;
- (void)messageTransferDidUndoTransferOfMessages:(id)arg1;
- (void)messageTransferDidTransferMessages:(id)arg1;
- (void)unhideMessagesForMessageTransfer:(id)arg1;
- (void)hideMessagesForMessageTransfer:(id)arg1;
- (void)transfer:(id)arg1 didCompleteWithError:(id)arg2;
- (void)_reportError:(id)arg1;
- (BOOL)transferMessages:(id)arg1 toMailbox:(id)arg2 deleteOriginals:(BOOL)arg3 allowUndo:(BOOL)arg4 isDeleteOperation:(BOOL)arg5 isArchiveOperation:(BOOL)arg6;
- (void)_synchronouslyMarkAsNotJunkMail:(id)arg1 inStores:(id)arg2;
- (void)_markMessagesAsNotJunkMail:(id)arg1 stores:(id)arg2;
- (void)markAsNotJunkMail:(id)arg1;
- (void)_undoMarkMessagesAsJunkMail:(id)arg1 stores:(id)arg2;
- (void)_synchronouslyMarkAsJunkMail:(id)arg1 inStores:(id)arg2 delete:(BOOL)arg3;
- (void)_deleteJunkedMessages:(id)arg1 inStores:(id)arg2 moveToTrash:(BOOL)arg3;
- (void)_markMessagesAsJunkMail:(id)arg1 stores:(id)arg2;
- (void)markAsJunkMail:(id)arg1;
- (id)searchFieldWidenScopeMenuSpinnerTitleString:(id)arg1;
- (id)searchFieldWidenScopeMenuItemTitleString:(id)arg1;
- (id)searchFieldWidenScopeMenuTitleString:(id)arg1;
- (void)searchFieldWidenQueryScope:(id)arg1;
- (BOOL)searchField:(id)arg1 hasResultsForQuery:(id)arg2;
- (BOOL)searchFieldUsesRestrictedQueryScope:(id)arg1;
- (void)addSenderToAddressBook:(id)arg1;
- (void)returnToSender:(id)arg1;
- (void)_bounceMessages:(id)arg1;
- (void)_deleteMessagesAfterBounce:(id)arg1;
- (void)_returnToSenderSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)reapplySortingRules:(id)arg1;
- (void)saveSearch:(id)arg1;
- (void)performSearch:(id)arg1;
- (void)_performCoalescedSearch;
- (void)_updateSearchUIForSender:(id)arg1;
- (id)selectedMailboxUids;
- (void)searchDidUpdate;
- (void)searchDidFinish;
- (void)searchWillStart;
- (void)clearUndoRedoStacksUnconditionally:(BOOL)arg1;
- (void)threadDidCollapse;
- (void)threadDidExpand;
- (void)_updateSearchStatusWithDelay;
- (void)_reallyAnimateProgressInidicator;
- (void)filterMessagesToMoveOrDelete:(id)arg1;
- (BOOL)archiveMessages:(id)arg1 allowUndo:(BOOL)arg2;
- (BOOL)deleteMessages:(id)arg1 allowMoveToTrash:(BOOL)arg2 allowUndo:(BOOL)arg3;
- (void)endTransferFromViewingPane;
- (void)beginTransferFromViewingPane;
- (BOOL)transferSelectedMessagesToMailbox:(id)arg1 deleteOriginals:(BOOL)arg2;
- (void)messageDragDidEnd;
- (void)messageDragMovedTo:(struct CGPoint)arg1;
- (void)messageDragWillStartWithEvent:(id)arg1;
- (void)messageWasDoubleClicked:(id)arg1;
- (id)actionMessageForConversationView;
- (void)actionMessageDidChangeInConversationView;
- (void)selectedMessagesDidChangeInMessageList;
- (void)messagesWereSelected:(id)arg1 fromTableViewManager:(id)arg2;
- (void)_setSplitViewPercentage:(double)arg1 animate:(BOOL)arg2;
- (void)_updateMallUids:(id)arg1;
- (id)_columnOrDetailMenuItemTitle;
- (void)_reallyUpdateWindowTitle;
- (void)_updateWindowTitle;
- (void)_mailboxDisplayCountChanged:(id)arg1;
- (void)_messageUpdated:(id)arg1;
- (id)_countStringForType:(BOOL)arg1 isDrafts:(BOOL)arg2 omitUnread:(BOOL)arg3 totalCount:(unsigned long long *)arg4;
- (void)saveDefaultWindowState;
- (void)saveDefaultViewerState;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)_restoreFromDefaultWindowStateDictionary:(id)arg1;
- (id)_defaultWindowStateDictionary;
- (void)_setupFromAttributes;
- (void)_findSomeDefaultsIfNecessary;
- (id)dictionaryRepresentation;
- (void)toggleSizeColumn:(id)arg1;
- (void)toggleAuthorColumn:(id)arg1;
- (void)toggleLocationColumn:(id)arg1;
- (void)toggleDateReceivedColumn:(id)arg1;
- (void)toggleDateSentColumn:(id)arg1;
- (void)toggleToColumn:(id)arg1;
- (void)togglePresenceColumn:(id)arg1;
- (void)toggleFromColumn:(id)arg1;
- (void)toggleMessageFlagsColumn:(id)arg1;
- (void)toggleMessageNumbersColumn:(id)arg1;
- (void)toggleContentsColumn:(id)arg1;
- (void)hideDeletions:(id)arg1;
- (void)showDeletions:(id)arg1;
- (void)selectNextInThread:(id)arg1;
- (void)selectPreviousInThread:(id)arg1;
- (void)selectThread:(id)arg1;
- (void)updateViewingPaneBackgroundColor;
- (BOOL)shouldShowThreadControlForMessage:(id)arg1 isSelectedRow:(BOOL)arg2;
- (void)toggleViewRelatedMessages:(id)arg1;
- (void)toggleThreadedMode:(id)arg1;
- (void)closeAllThreads:(id)arg1;
- (void)openAllThreads:(id)arg1;
- (void)unfocus:(id)arg1;
- (void)focus:(id)arg1;
- (void)toggleInboxOnly:(id)arg1;
- (void)toggleAscendingSort:(id)arg1;
- (void)sortByTagOfSender:(id)arg1;
- (void)removeAttachments:(id)arg1;
- (void)_removeAttachmentsFromMessages:(id)arg1 fromStores:(id)arg2;
- (void)_handleAttachmentsRemovedFromMessages:(id)arg1 newMessages:(id)arg2;
- (void)_setContentSearchEnabled:(BOOL)arg1 disabledExplanation:(id)arg2;
- (void)_updateContentSearchEnabledStateFromSpotlight;
- (void)_updateContentSearchEnabledState;
- (BOOL)_anySearchMailboxesAreCached;
- (int)searchTarget;
- (int)_searchField;
- (void)_setupSearchParametersForTag:(long long)arg1;
- (void)clearSearch:(id)arg1;
- (void)_clearSearchByAnimating:(BOOL)arg1;
- (void)_updateSearchStatus;
- (void)_searchForSuggestions:(id)arg1;
- (void)_searchForString:(id)arg1;
- (void)_hideSearchResultsInSearchView;
- (void)_showSearchResultsInSearchView;
- (BOOL)_canSearchSelectedMailboxes;
- (BOOL)_canSaveSearchWithTarget:(int)arg1;
- (unsigned long long)_searchResultCount;
- (BOOL)_isShowingSearchResults;
- (void)searchIndex:(id)arg1;
- (id)mailboxSearchCriterionForScope:(int)arg1 containsSentMailbox:(char *)arg2 containsTrashMailbox:(char *)arg3 shouldExcludeJunk:(char *)arg4;
- (id)_criterionForMailbox:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)jumpToSelection:(id)arg1;
- (void)takeFindStringFromSelection:(id)arg1;
- (void)changeTextEncoding:(id)arg1;
- (void)_asyncChangeTextEncoding:(unsigned int)arg1 messages:(id)arg2 hiddenDupes:(id)arg3;
- (void)showBestAlternative:(id)arg1;
- (void)showNextAlternative:(id)arg1;
- (void)showPreviousAlternative:(id)arg1;
- (void)showFirstAlternative:(id)arg1;
- (void)showFilteredHeaders:(id)arg1;
- (void)showAllHeaders:(id)arg1;
- (void)viewSource:(id)arg1;
- (void)makeFontSmaller:(id)arg1;
- (void)makeFontBigger:(id)arg1;
- (void)forwardAction:(SEL)arg1 ToContentControllerFromSender:(id)arg2;
- (id)_contentControllerForAction:(SEL)arg1;
- (void)quickLookSelectedAttachments:(id)arg1;
- (void)saveAllAttachments:(id)arg1;
- (void)saveAs:(id)arg1;
- (void)_batchSendSheetDidEnd:(id)arg1 returnCode:(long long)arg2 context:(void *)arg3;
- (BOOL)send:(id)arg1;
- (BOOL)sendMessages:(id)arg1 forDraft:(BOOL)arg2;
- (BOOL)send:(id)arg1 forDraft:(BOOL)arg2 actualMessage:(id)arg3;
- (void)showPrintPanel:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2;
- (void)stopSpeaking:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (void)paste:(id)arg1;
- (void)_pasteData:(id)arg1 pasteboardType:(id)arg2 alternateData:(id)arg3 alternateType:(id)arg4 destination:(id)arg5;
- (int)_pasteMessages:(id)arg1 unsuccessfulMessages:(id)arg2 flagsToSet:(id)arg3 destinationAccount:(id)arg4 destinationStore:(id)arg5;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)_doCopy:(id)arg1 deleteWhenCopied:(BOOL)arg2;
- (void)_showActivityProgressPanelForCopy:(id)arg1;
- (void)_progressAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_copyMessagesToPasteboard:(id)arg1 deleteWhenCopied:(BOOL)arg2 pasteboardType:(id)arg3 alternateType:(id)arg4;
- (void)_putMessageDataOntoPasteboard:(id)arg1 attributedString:(id)arg2 shouldDelete:(id)arg3 pasteboardType:(id)arg4;
- (void)rebuildTableOfContents:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)clearFlaggedStatus:(id)arg1;
- (void)toggleFlag:(id)arg1;
- (void)markAsUnreadFromToolbar:(id)arg1;
- (void)markAsReadFromToolbar:(id)arg1;
- (void)markAsUnread:(id)arg1;
- (void)markAsRead:(id)arg1;
- (void)performTextFinderAction:(id)arg1;
- (void)scrollToMessageBelow:(id)arg1;
- (void)scrollToMessageAbove:(id)arg1;
- (void)markMessagesAsViewed:(id)arg1;
- (void)markMessageAsViewed:(id)arg1;
- (void)modifyFlaggedStatus:(id)arg1;
- (void)clearFlaggedStatusForMessageListSelection:(BOOL)arg1;
- (void)clearFlaggedStatus;
- (id)_flaggedStatusForMessages:(id)arg1;
- (void)_setFlaggedStatus:(id)arg1 withUndoActionName:(id)arg2;
- (id)_messagesWithoutFlagColor:(BOOL)arg1 fromMessages:(id)arg2;
- (void)toggleFlaggedStatus:(BOOL)arg1 forMessageListSelection:(BOOL)arg2;
- (void)toggleFlaggedStatus:(BOOL)arg1;
- (void)toggleFlaggedStatusInFullScreen:(id)arg1;
- (id)appliedFlagColorsForSelectedMessages;
- (void)_changeFlag:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3 undoActionName:(id)arg4;
- (id)_selectedMessagesWhoseFlag:(unsigned int)arg1 isEqualToState:(BOOL)arg2 action:(SEL)arg3;
- (void)copyMessagesToMailbox:(id)arg1;
- (void)moveMessagesToMailbox:(id)arg1;
- (void)_moveOrCopyMessagesToMailbox:(id)arg1 deleteOriginals:(BOOL)arg2;
- (void)renameMailbox:(id)arg1;
- (id)_displaySelectedMessageInSeparateWindow:(id)arg1 withModifiers:(unsigned long long)arg2;
- (id)_documentsToDisplaySelectedMessagesInSeperateWindowWithModifiers:(unsigned long long)arg1;
- (id)displaySelectedMessageInSeparateWindow:(id)arg1;
- (void)forwardWithParentAsAttachment:(id)arg1;
- (void)forwardAsAttachment:(id)arg1;
- (void)forwardMessage:(id)arg1;
- (void)redirectMessage:(id)arg1;
- (id)editorWithType:(int)arg1 forSelectedMessages:(id)arg2;
- (id)mailboxesOutlineViewController;
- (id)tableManager;
- (void)showAccountInfo:(id)arg1;
- (void)replyViaIM:(id)arg1;
- (void)focusMessage;
- (void)focusMailboxes;
- (void)focusMessages;
- (void)selectAllMessages;
- (void)_openMessages:(id)arg1 withModifiers:(unsigned long long)arg2;
- (void)openMessages:(id)arg1;
- (void)archiveMessages:(id)arg1;
- (void)deleteMessages:(id)arg1 allowingMoveToTrash:(BOOL)arg2;
- (void)deleteMessages:(id)arg1;
- (void)undeleteMessages:(id)arg1;
- (void)showAddressPanel:(id)arg1;
- (void)showComposeWindow:(id)arg1;
- (void)replyToOriginalSender:(id)arg1;
- (void)replyAllMessage:(id)arg1;
- (void)replyMessage:(id)arg1;
- (void)checkNewMail:(id)arg1;
- (void)_messageThreadSummaryWasDisplayedInTextView:(id)arg1;
- (void)_messageNoLongerDisplayedInTextView:(id)arg1;
- (void)messageWasDisplayedInTextView:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)smartMailboxMemberMessagesForMessages:(id)arg1;
- (BOOL)shouldDeleteMessagesGivenCurrentState;
- (BOOL)_updatedAtLeastOneSelectedMessageIsInDrafts:(id)arg1;
- (BOOL)atLeastOneSelectedMessageIsInDrafts:(id)arg1;
- (BOOL)_updatedAtLeastOneSelectedMessageIsInOutbox:(id)arg1;
- (BOOL)atLeastOneSelectedMessageIsInOutbox:(id)arg1;
- (BOOL)_messagesContainMessagesWithAttachments:(id)arg1;
- (BOOL)_messages:(id)arg1 containMessagesWithJunkMailLevelEqualTo:(long long)arg2;
- (BOOL)_messages:(id)arg1 containMessagesWithFlaggedStatusEqualTo:(BOOL)arg2;
- (long long)_messages:(id)arg1 stateForFlagColor:(BOOL)arg2;
- (BOOL)_messages:(id)arg1 containMessagesWithReadStatusEqualTo:(BOOL)arg2;
- (void)_setMailboxUids:(id)arg1;
- (void)smartMailboxCriteriaChanged:(id)arg1;
- (BOOL)isOnlySelectingSmartMailboxesThatShowRelatedMessages;
- (void)_selectNextMessage:(id)arg1;
- (void)_mailboxesDidChange:(id)arg1;
- (void)_accountsDidChange:(id)arg1;
- (void)_mallStructureDidChange;
- (void)_mallDidOpen;
- (BOOL)messageViewerIsFinishedLoadingMessages;
- (void)mailboxSelectionChanged:(id)arg1;
- (void)_mailboxWasRenamed:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (double)previewSplitPercentage;
- (void)selectMailbox:(id)arg1;
- (void)_moveMessagesToFavoriteWithMailboxUid:(id)arg1 andPosition:(unsigned long long)arg2;
- (void)_animateMessageSelectionToFavoriteButtonAtPosition:(long long)arg1 withCount:(unsigned long long)arg2 image:(id)arg3 fromPosition:(struct CGPoint)arg4;
- (void)_animationCompletedForPosition:(unsigned long long)arg1 withWindow:(id)arg2;
- (void)outlineViewDoubleClick:(id)arg1;
- (id)messageThatUserIsProbablyReading;
- (id)currentDisplayedMessage;
- (id)messagesIncludingHiddenCopies:(id)arg1;
- (void)hideAllCopiesOfMessages:(id)arg1;
- (void)showAllCopiesOfMessage:(id)arg1;
- (id)messageIDsToShowAllCopiesOf;
- (id)messagesTargetedByAction:(SEL)arg1;
- (void)_firstResponderIsViewingPane:(char *)arg1 isMessageList:(char *)arg2;
- (BOOL)outgoingMailboxSelected;
- (void)setSelectedMessages:(id)arg1;
- (id)selectedMessages;
- (void)setSelectedMailboxes:(id)arg1 scrollToVisible:(BOOL)arg2;
- (void)setSelectedMailboxes:(id)arg1;
- (id)mailboxSelectionWindow;
- (void)revealMailbox:(id)arg1;
- (id)sortedSectionItemsForTimeMachine;
- (id)expandedItems;
- (BOOL)sectionIsExpanded:(id)arg1;
- (BOOL)mailboxIsExpanded:(id)arg1;
- (void)selectPathsToMailboxes:(id)arg1;
- (BOOL)isSelectedMailboxSpecial;
- (id)selectedMailbox;
- (id)selectedMailbox:(BOOL)arg1;
- (id)expandedSelectedMailboxUidsAllowingSearch;
- (id)expandedSelectedMailboxes;
- (id)selectedMailboxes;
- (void)_setAutorecalculatesContentBorderThickness:(BOOL)arg1;
- (void)_timeMachineRestoreFinished:(id)arg1;
- (void)_beginTimeMachineRestoreSheetIsForMailbox:(id)arg1;
- (void)_displayTimeMachineRestoreSheet:(id)arg1;
- (void)prepareForTimeMachineRestore;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)updateMailboxButtonVisibility;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)_idealMailboxesViewWidth;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (BOOL)_shouldUseLayoutContraintsForWindow:(id)arg1;
- (void)mailVerticalSplitView:(id)arg1 willSetPosition:(double)arg2 ofDividerAtIndex:(long long)arg3 byAnimating:(BOOL)arg4;
- (struct CGSize)_minimumPreviewPaneSize;
- (BOOL)_isPreviewPaneVisible;
- (struct CGSize)_minimumMessageListSize;
- (struct CGSize)_minimumMessageViewerContentsSize;
- (double)_maximumSidebarWidthForVerticalSplitViewWidth:(double)arg1;
- (double)_maximumSidebarWidth;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (void)toggleMailboxesPane:(id)arg1;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (void)splitViewWillResizeSubviews:(id)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)_disableSplitViewAutosaving;
- (void)_enableSplitViewAutosaving;
- (void)_updateDividerTypeForSplitView;
- (void)_splitViewDidFinishResizingSubviews;
- (void)_viewerLayoutPreferenceChanged:(id)arg1;
- (BOOL)_mailboxesPaneIsOpenWideEnoughToUse;
- (void)setMailboxesPaneIsOpen:(BOOL)arg1;
- (BOOL)mailboxesPaneIsOpen;
- (double)mailboxesPaneWidth;
- (void)_mailboxPaneAnimationDidFinish;
- (void)openMailboxesPaneToWidth:(double)arg1 byAnimating:(BOOL)arg2;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowWillMiniaturize:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)_updateMailboxPaneBottomViewColor;
- (void)resignAsSelectionOwner;
- (void)takeOverAsSelectionOwner;
- (void)_setUpMenus;
- (void)_setupNextKeyViewLoop;
- (void)setupNextKeyViewLoopWithView:(id)arg1;
- (void)_setupMailboxOutlineView;
- (void)_setUpWindowContents;
- (id)messageListSortMenu;
- (id)tableHeaderViewGetDefaultMenu:(id)arg1;
- (void)_setupUIAndOrderFront:(BOOL)arg1 andMakeKey:(BOOL)arg2;
- (void)_updateWindowMinimumSize;
- (struct CGImage *)newMessageViewerSnapshotForceNonFullScreen:(BOOL)arg1;
- (void)showAndMakeKey:(BOOL)arg1;
- (void)show;
- (BOOL)_isShowingMessage:(id)arg1;
- (BOOL)_isViewingMailboxUid:(id)arg1;
- (BOOL)_selectedMailboxesAreOutgoing:(char *)arg1;
- (void)_setStore:(id)arg1;
- (void)storeBeingInvalidated:(id)arg1;
- (void)_unregisterForStoreNotifications;
- (void)_registerForStoreNotifications;
- (void)_unregisterForApplicationNotifications;
- (void)_registerForApplicationNotifications;
- (oneway void)release;
- (void)dealloc;
- (id)initWithMailboxUids:(id)arg1;
- (id)initPlain;
- (id)init;
- (void)intializeLazyPopUpButtons;
- (id)initWithAttributes:(id)arg1;
- (void)awakeFromNib;
- (id)_mailboxUidsFromAttributes:(id)arg1;
- (void)showFollowupsToMessage:(id)arg1;
- (void)_cantFindFollowupToMessage:(id)arg1;
- (void)_displayFollowup:(id)arg1;
- (void)showCurrentMessageInMailbox;
- (void)revealMessage:(id)arg1 forceMailboxSelection:(BOOL)arg2;
- (long long)viewerNumber;
- (void)setScriptingProperties:(id)arg1;
- (id)junkMailbox;
- (id)trashMailbox;
- (id)sentMailbox;
- (id)draftsMailbox;
- (id)outbox;
- (id)inbox;
- (void)setVisibleColumns:(id)arg1;
- (id)visibleColumns;
- (void)setPreviewPaneVisible:(BOOL)arg1;
- (BOOL)previewPaneVisible;
- (void)setIsSortedAscending:(BOOL)arg1;
- (BOOL)isSortedAscending;
- (void)setAppleScriptSortColumn:(unsigned int)arg1;
- (unsigned int)appleScriptSortColumn;
- (void)setFocusedMessages:(id)arg1;
- (id)focusedMessages;
- (id)allMessages;
- (id)objectSpecifier;
- (id)uniqueID;
- (void)submenuAction:(id)arg1;
- (void)_synchronizeFullScreenFlagToolbarItem:(id)arg1;
- (void)finishedSettingFlaggedStatus;
- (void)searchFieldDidEndSearching:(id)arg1;
- (void)ensureSearchFieldVisibilityInToolbar;
- (void)_ensureItemVisibilityInToolbar:(long long)arg1 identifier:(id)arg2;
- (void)toolbarDidReorderItem:(id)arg1;
- (void)toolbarDidRemoveItem:(id)arg1;
- (void)toolbarWillAddItem:(id)arg1;
- (void)updateToolbar;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)setupSuggestionsSearchFieldForSentMailboxIfNecessary;
- (void)setupSuggestionsSearchField;
- (void)_updateSuggestionsMailboxesListAndFlagNames;
- (void)_asyncUpdateSuggestionsMailboxesListAndFlagNames:(id)arg1;
- (void)_updateSuggestionsFlagNames;
- (void)_asyncUpdateSuggestionsFlagNames:(id)arg1;
- (void)configureSegmentedItem:(id)arg1 withDictionary:(id)arg2 forSegment:(long long)arg3;
- (BOOL)validateFlaggedStatusToolbarItem:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (id)toolbarConfigurationDict;
- (void)clearToolbarItemsTarget;
- (void)setupToolbar;

@end

@interface TableViewManager : NSObject

+ (id)specialImageForMessageCount:(unsigned long long)arg1 offset:(struct CGPoint *)arg2;
+ (void)initialize;
+ (id)_getThreadBackgroundColorForThread:(id)arg1;
+ (id)_getDarkerThreadBackgroundColorForThread:(id)arg1;
- (void)setIncludeDeleted:(BOOL)arg1;
- (BOOL)includeDeleted;
- (id)messageToSelectIfEntireSelectionRemoved:(id)arg1;
- (void)_didChooseRowForViewing:(long long)arg1;
- (void)_resetNextMessageTracking;
- (BOOL)_goUpInsteadOfDown;
- (long long)_indexOfFirstNonDeletedNonSelectedMessage:(long long)arg1 withinRowRange:(struct _NSRange)arg2 goUp:(BOOL)arg3;
- (id)messageMall;
- (id)mailTableView:(id)arg1 rangesForBackgroundShadingInRange:(struct _NSRange)arg2 shadingColors:(id *)arg3 leftColumnColors:(id *)arg4;
- (BOOL)shouldTrackMouse:(id)arg1;
- (void)mailTableView:(id)arg1 gotEvent:(id)arg2;
- (void)_setButtonCellNeedsDisplay;
- (void)_callWillDisplayCellForClickedCell;
- (struct CGPoint)_mouseLocationInWindow;
- (struct CGRect)frameOfClickedCell;
- (void)mailTableView:(id)arg1 willDrawRowsInRange:(struct _NSRange)arg2;
- (id)mailTableView:(id)arg1 dragImageForRowsWithIndexes:(id)arg2 event:(id)arg3 dragImageOffset:(struct CGPoint *)arg4;
- (id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3;
- (void)pasteboardChangedOwner:(id)arg1;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)mailTableView:(id)arg1 didMouseDown:(id)arg2;
- (void)mailTableView:(id)arg1 willMouseDown:(id)arg2;
- (void)mailTableViewDragWillEnd:(id)arg1 operation:(unsigned long long)arg2;
- (BOOL)transferSelectionToMailbox:(id)arg1 deleteOriginals:(BOOL)arg2;
- (void)transfer:(id)arg1 didCompleteWithError:(id)arg2;
- (id)messagesToTransferIsMove:(BOOL)arg1;
- (id)_filterAndExpandMessagesForTransfer:(id)arg1;
- (void)mailTableViewDraggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)archiveMessages:(id)arg1 allowUndo:(BOOL)arg2;
- (BOOL)shouldDeleteMessagesGivenCurrentState:(id)arg1;
- (void)undeleteMessagesAllowingUndo:(BOOL)arg1;
- (void)deleteMessages:(id)arg1 allowMoveToTrash:(BOOL)arg2 allowUndo:(BOOL)arg3;
- (void)_redeleteMessages:(id)arg1 messagesToSelect:(id)arg2;
- (void)undeleteMessages:(id)arg1 allowUndo:(BOOL)arg2;
- (void)_undeleteMessages:(id)arg1 allowUndo:(BOOL)arg2 unreadMessages:(id)arg3;
- (void)selectMessagesForMessageTransferUndo:(id)arg1;
- (void)selectMessagesForMessageTransfer:(id)arg1;
- (void)_adjustScrollPositionForTransferedMessages:(id)arg1 isUndo:(BOOL)arg2;
- (id)_undoActionNameForMessageCount:(unsigned long long)arg1;
- (BOOL)mailTableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (id)tableView;
- (id)messageStore;
- (id)currentDisplayedMessage;
- (void)viewRelatedMessagesDidToggleForMessage:(id)arg1;
- (BOOL)shouldViewRelatedMessagesForMessage:(id)arg1;
- (id)parentThreadForChildMessage:(id)arg1;
- (id)messageThatUserIsProbablyReading;
- (void)selectMessages:(id)arg1;
- (void)_selectMessages:(id)arg1 scrollIfNeeded:(BOOL)arg2;
- (id)selection;
- (id)selectionExpandingThreadsAndHiddenCopies:(BOOL)arg1;
- (void)deleteSelectionAllowingMoveToTrash:(BOOL)arg1;
- (void)deleteKeyPressed;
- (void)_snippetsUpdated:(id)arg1;
- (void)_updateRowsWithNewSnippets:(id)arg1;
- (void)_updateSnippetsForMessage:(id)arg1;
- (void)clearSnippetCacheForMessages:(id)arg1;
- (void)mallPrefetchedSnippets:(id)arg1;
- (void)_adjustFetchRangeForRow:(unsigned long long)arg1;
- (id)_snippetFetchQueue;
- (id)_snippetForMessage:(id)arg1 atRow:(long long)arg2;
- (void)_doubleClickedMessage:(id)arg1;
- (id)mailTableViewTopLineColor:(id)arg1;
- (int)mailTableView:(id)arg1 highlightStyleForRow:(long long)arg2 inRect:(struct CGRect *)arg3 color:(id *)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (id)_cachedMessageDataForRow:(long long)arg1 flags:(unsigned int *)arg2 appliedFlagColors:(id *)arg3;
- (void)invalidateRowDataCache;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)_setupRowViewForRow:(long long)arg1 tableView:(id)arg2 create:(BOOL)arg3;
- (void)tableViewColumnDidResize:(id)arg1;
- (void)tableViewColumnDidMove:(id)arg1;
- (void)mailTableViewDidEndLiveResize:(id)arg1;
- (void)mailTableViewWillStartLiveResize:(id)arg1;
- (void)tableViewFrameChangedDuringLiveResize:(id)arg1;
- (void)tableView:(id)arg1 didDragTableColumn:(id)arg2;
- (void)updateColorHighlightEdges;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3;
- (id)_truncatedAttributedStringForString:(id)arg1 message:(id)arg2 row:(long long)arg3 shouldIndent:(BOOL)arg4;
- (id)_colorForMessage:(id)arg1 inRow:(long long)arg2 withCell:(id)arg3;
- (id)_messageSelectionColor;
- (id)_attributesForTruncatedParagraphStyle;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_datesNeedRedisplay:(id)arg1;
- (void)mailTableViewDidResignFirstResponder:(id)arg1;
- (void)mailTableViewDidBecomeFirstResponder:(id)arg1;
- (void)_redisplayRowsAboveSelected;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)_selectOrDeselectMembersOfThread:(id)arg1 atIndex:(long long)arg2 select:(BOOL)arg3;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)updateForSelectedActionMessage:(id)arg1;
- (void)updateTextViewerToSelection;
- (void)_reallyUpdateTextViewerToSelection;
- (id)selectedThread;
- (void)_updateSelectedThreadList;
- (void)_setNeedsDisplayThreadColumnForMessagesInSet:(id)arg1;
- (void)_reloadDisplayOnlyForMessagesInSet:(id)arg1 highlightOnly:(BOOL)arg2;
- (BOOL)_isMessageInSelectedThread:(id)arg1;
- (long long)mailTableView:(id)arg1 shouldScrollRowToVisible:(long long)arg2;
- (void)scrollRowToVisible:(long long)arg1 position:(int)arg2;
- (BOOL)isSelectionVisible;
- (void)showSelectionAndCenter:(BOOL)arg1;
- (void)selectPreviousReplyToParent;
- (void)selectNextReplyToParent;
- (void)selectPeer:(BOOL)arg1;
- (void)selectFirstReplyToMessage;
- (void)selectParentOfMessage;
- (void)selectPreviousMessage:(int)arg1;
- (void)selectNextMessage:(int)arg1;
- (BOOL)nextMessageIsBelow;
- (BOOL)selectOldestUnreadOrNewestMessageInThread;
- (BOOL)openSelectedThread;
- (BOOL)stepOutOfSelectedThread;
- (BOOL)stepIntoSelectedThread;
- (void)selectNextMessageMovingUpward:(int)arg1;
- (void)selectNextMessageMovingDownward:(int)arg1;
- (long long)_modifierFlagsForKeyboardNavigation;
- (BOOL)selectionIsExactlyOneOpenThread;
- (BOOL)canSelectNextReplyToParent;
- (BOOL)canSelectFirstReplyToMessage;
- (BOOL)canSelectParentOfMessage;
- (BOOL)canSelectNextThreadedMessage;
- (BOOL)canSelectPreviousThreadedMessage;
- (long long)_indexOfMessageNearest:(long long)arg1 numberOfRows:(long long)arg2 threaded:(BOOL)arg3 downward:(BOOL)arg4;
- (void)toggleThread:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (void)toggleThread:(id)arg1;
- (void)_cleanUpAfterFocus;
- (void)closeAllThreads;
- (void)openAllThreads;
- (BOOL)closeThreadAtIndex:(long long)arg1 focusRow:(long long)arg2 animate:(BOOL)arg3;
- (BOOL)openThreadAtIndex:(long long)arg1 andSelectMessage:(id)arg2 animate:(BOOL)arg3;
- (void)invalidateSelectionCache;
- (void)_threadedModeDidChange:(id)arg1;
- (void)toggleThreadedMode;
- (BOOL)isInThreadedMode;
- (void)_updateTableViewRowHeight;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (double)tableViewRowHeightForRichMessageList:(BOOL)arg1;
- (void)makeMessageListFirstResponder;
- (void)selectAllMessagesAndMakeFirstResponder;
- (long long)tableViewNumberOfColumnsToPinToLefthandSide:(id)arg1;
- (BOOL)mailTableView:(id)arg1 shouldAddTableColumn:(id)arg2;
- (BOOL)mailTableView:(id)arg1 shouldRemoveTableColumn:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (void)_setColumn:(long long)arg1 toVisible:(BOOL)arg2;
- (void)setColumn:(long long)arg1 toVisible:(BOOL)arg2;
- (void)_updateAttributesForMailboxes;
- (BOOL)isColumnVisible:(long long)arg1;
- (BOOL)_isAutomaticInsertionWhileSearchingOkayForColumn:(long long)arg1;
- (BOOL)_isColumnVisibleInSettings:(long long)arg1;
- (id)_unreadColumn;
- (id)_columnWithIdentifierTag:(long long)arg1;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)_updateTableHeaderToMatchCurrentSort;
- (void)_presenceChanged:(id)arg1;
- (void)_presenceImageChanged:(id)arg1;
- (void)_threadColorPreferenceChanged:(id)arg1;
- (void)_presencePreferenceChanged:(id)arg1;
- (void)_snippetLinePreferenceChanged:(id)arg1;
- (void)_contactPhotoPreferenceChanged:(id)arg1;
- (void)_toCcPreferenceChanged:(id)arg1;
- (void)_viewerLayoutPreferenceChanged:(id)arg1;
- (void)_viewerPreferencesChanged:(id)arg1;
- (BOOL)canSelectPreviousMessage;
- (BOOL)canSelectNextMessage;
- (void)readStoreSpecificAttributesFromDictionary:(id)arg1;
- (void)readStoreSpecificAttributesFromMailboxUid:(id)arg1;
- (void)writeStoreSpecificAttributesToMailboxUid:(id)arg1;
- (void)writeAttributesToDictionary:(id)arg1;
- (void)readAttributesFromDictionary:(id)arg1;
- (void)setupColumnManagerFromDictionary:(id)arg1;
- (void)_mallConversationsUpdated:(id)arg1;
- (void)_messagesUpdated:(id)arg1;
- (void)_messageMarkedForOverwrite:(id)arg1;
- (void)setMessageMall:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)windowWillClose:(id)arg1;
- (void)dealloc;
- (oneway void)release;
- (void)_configureTableViewLayoutWithTableColumnResizingMasks:(id)arg1;
- (void)_setupColumnsForTableView;
- (void)showFollowupsToMessageAtRow:(long long)arg1;
- (void)showFollowupsToMessage:(id)arg1;
- (void)richUnreadButtonClicked:(id)arg1;
- (void)_createTintedImages;
- (void)_configureRichMessageListColumn;
- (void)_configureColumnForRolloverCell:(id)arg1 alignment:(unsigned long long)arg2 action:(SEL)arg3;
- (void)_configureColumnForImageCell:(id)arg1 alignment:(unsigned long long)arg2;
- (void)_configureColumnForEndTruncation:(id)arg1;
- (void)_setupTableColumnWidths;
- (void)_setupColumnHeaderIcon:(id)arg1 inColumnWithIdentifier:(id)arg2 accessibilityTitle:(id)arg3 alignment:(unsigned long long)arg4;
- (void)_tableViewScrolled:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)tableViewGetDefaultMenu:(id)arg1;
- (void)awakeFromNib;
- (void)setAppleScriptVisibleColumns:(id)arg1;
- (id)appleScriptVisibleColumns;
- (void)setAppleScriptSortColumn:(unsigned int)arg1;
- (unsigned int)appleScriptSortColumn;
- (long long)_columnForAppleScriptColumn:(unsigned int)arg1;
- (BOOL)selectMessageWithIDIfExists:(id)arg1;
- (void)mailTableViewDidMoveToWindow:(id)arg1;
- (void)mailTableView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)animateThreadOpenOrClose:(id)arg1 flag:(BOOL)arg2 clickedRow:(long long)arg3 rowToSelectInOpeningThread:(long long)arg4;
- (double)_scrollRectToVisibleAdjustment:(struct CGRect)arg1 visibleRect:(struct CGRect)arg2;
- (BOOL)_isRowVisible:(long long)arg1;
- (double)_getAnimationDuration:(long long)arg1;
- (long long)_indexOfMemberToSelectWhenOpeningThread:(id)arg1;
- (void)updateTrackingRects;
- (void)clearTrackingRects;
- (id)filteredMessages;
- (long long)state;
- (void)setIsSortedAscending:(BOOL)arg1;
- (BOOL)isSortedAscending;
- (void)setSortColumn:(long long)arg1 ascending:(BOOL)arg2;
- (id)sortByStringForColumn:(long long)arg1;
- (long long)sortColumn;
- (BOOL)isSortedChronologically;
- (BOOL)isSortedByDateReceived;
- (void)setFocusedMessages:(id)arg1;
- (BOOL)isFocused;
- (void)searchForString:(id)arg1 in:(int)arg2 withOptions:(int)arg3;
- (void)searchForSuggestions:(id)arg1 in:(int)arg2 withOptions:(int)arg3;
- (void)_searchForString:(id)arg1 orSuggestions:(id)arg2 in:(int)arg3 withOptions:(int)arg4;
- (BOOL)isShowingSearchResults;
- (void)clearSearch;
- (void)setSelectedMessageIDs:(id)arg1 openThreadIDs:(id)arg2 withOverride:(BOOL)arg3;
- (id)openThreadIDs;
- (id)selectedMessageIDs;
- (BOOL)restoreScrollAndSelectionWithForceSelection:(BOOL)arg1;
- (void)saveScrollAndSelection;
- (void)_saveScrollAndSelection:(BOOL)arg1;
- (id)persistentVisibleStateCreateIfNecessary:(BOOL)arg1;
- (long long)indexOfLastReadMessage;
- (long long)indexOfTopmostVisibleMessageMustBeSelected:(BOOL)arg1 okayIfDeleted:(BOOL)arg2;
- (void)dumpVisibleState;
- (BOOL)_restoreVisibleState:(id)arg1 forceSelToVisible:(BOOL)arg2;
- (void)_recordVisibleState:(id)arg1 deletedAreGoingAway:(BOOL)arg2 considerPinToEnd:(BOOL)arg3;
- (void)_scrollToHappyPlace;
- (void)messageFlagsChanged:(id)arg1;
- (void)messagesCompacted:(id)arg1;
- (void)_updateSearchDelegate;
- (void)mallFinishedLoading:(id)arg1;
- (void)mallStructureChanged:(id)arg1;
- (void)mallSortChanged:(id)arg1;
- (void)setMailboxUids:(id)arg1 isSettingUpUI:(BOOL)arg2;
- (void)mallStructureWillChange:(id)arg1;
- (BOOL)_debugThreadAnimation;

@end
