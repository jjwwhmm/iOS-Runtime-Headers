/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylineGroupOverlay : NSObject <VKOverlay> {
    GEOMapRegion *_boundingMapRegion;
    BOOL _containsTransit;
    struct __CFSet { } *_observers;
    NSMutableSet *_polylines;
    VKPolylineOverlay *_selectedPolyline;
}

@property (nonatomic, readonly) GEOMapRegion *boundingMapRegion;
@property (nonatomic, readonly) BOOL containsTransit;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSSet *polylines;
@property (nonatomic, retain) VKPolylineOverlay *selectedPolyline;
@property (readonly) Class superclass;

- (void)_updateBoundingMapRegion;
- (void)_updateContainsTransit;
- (void)addObserver:(id)arg1;
- (void)addPolyline:(id)arg1;
- (id)boundingMapRegion;
- (BOOL)containsTransit;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)polylines;
- (void)removeObserver:(id)arg1;
- (void)removePolyline:(id)arg1;
- (id)selectedPolyline;
- (void)setSelectedPolyline:(id)arg1;

@end
