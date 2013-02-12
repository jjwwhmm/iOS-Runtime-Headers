/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKReminderAlertEditItem, EKReminderRecurrenceEditItem;

@interface EKReminderDueDateAggregateEditItem : EKReminderEditItem {
    EKReminderAlertEditItem *_alertEditItem;
    BOOL _allowsRecurrence;
    EKReminderRecurrenceEditItem *_recurrenceEditItem;
    BOOL _showsDueDate;
}

- (void)_handleCommitForDueDateEditViewController:(id)arg1;
- (BOOL)_shouldShowRecurrence;
- (id)cellForSubitemAtIndex:(int)arg1;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (void)dealloc;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(int)arg2;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (float)footerHeightForWidth:(float)arg1;
- (id)footerView;
- (id)init;
- (int)numberOfSubitems;
- (void)refreshFromCalendarItemAndStore;
- (void)reset;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setStyleProvider:(id)arg1;

@end