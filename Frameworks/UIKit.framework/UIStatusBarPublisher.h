/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableSet;

@interface UIStatusBarPublisher : NSObject {
    struct __CFMachPort { } *_machPort;
    NSMutableSet *_statusBarItems;
    int _styleOverrides;
}

- (void)addStatusBarItem:(int)arg1;
- (int)addStyleOverrides:(int)arg1;
- (void)dealloc;
- (id)initWithCFMachPort:(struct __CFMachPort { }*)arg1;
- (unsigned int)publisherPort;
- (void)removeStatusBarItem:(int)arg1;
- (int)removeStyleOverrides:(int)arg1;
- (id)statusBarItems;
- (int)styleOverrides;

@end