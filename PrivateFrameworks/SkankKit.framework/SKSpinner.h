/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@class NSTimer;

@interface SKSpinner : SKImageLayer  {
    struct CGImage {} **_images;
    int _count;
    BOOL _running;
    NSTimer *_runTimer;
    double _spin_rate;
}


- (BOOL)running;
- (void)dealloc;
- (id)init;
- (void)setSpinRate:(double)arg1;
- (void)setRunning:(BOOL)arg1;
- (void)incrementImage;
- (void)spin:(id)arg1;
- (void)stop;
- (void)start;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end