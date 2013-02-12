/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSLocalNotificationClient : NSObject {
}

+ (void)_scheduleLocalNotifications:(id)arg1 cancel:(BOOL)arg2 replace:(BOOL)arg3 optionalBundleIdentifier:(id)arg4;
+ (void)cancelAllLocalNotifications;
+ (void)cancelAllLocalNotificationsForBundleIdentifier:(id)arg1;
+ (void)cancelLocalNotification:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)cancelLocalNotification:(id)arg1;
+ (id)getPendingNotification;
+ (void)scheduleLocalNotification:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)scheduleLocalNotification:(id)arg1;
+ (id)scheduledLocalNotifications;
+ (id)scheduledLocalNotificationsForBundleIdentifier:(id)arg1;
+ (void)setScheduledLocalNotifications:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)setScheduledLocalNotifications:(id)arg1;

@end