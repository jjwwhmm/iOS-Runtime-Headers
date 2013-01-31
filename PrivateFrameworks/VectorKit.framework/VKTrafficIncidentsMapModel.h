/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKCalloutController, NSMutableSet, VKTrafficIncident, VKStylesheet, <VKTrafficIncidentsMapModelDelegate>, NSMutableArray;

@interface VKTrafficIncidentsMapModel : VKModelObject <VKMapLayer> {
    VKCalloutController *_calloutController;
    <VKTrafficIncidentsMapModelDelegate> *_delegate;
    NSMutableSet *_incidentsInScene;
    NSMutableArray *_sortedIncidentsInScene;
    VKTrafficIncident *_selectedTrafficIncident;
    VKStylesheet *_stylesheet;
}

@property(retain) VKCalloutController * calloutController;
@property <VKTrafficIncidentsMapModelDelegate> * delegate;
@property(readonly) VKTrafficIncident * selectedTrafficIncident;
@property(retain) VKStylesheet * stylesheet;


- (id)calloutController;
- (void)setCalloutController:(id)arg1;
- (void)removeFromSupermodel;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (id)trafficIncidentForSelectionAtPoint:(struct { double x1; double x2; double x3; })arg1 canvasSize:(struct CGSize { float x1; float x2; })arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (id)selectedTrafficIncident;
- (void)selectTrafficIncident:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)deselectTrafficIncidentAnimated:(BOOL)arg1;
- (unsigned int)mapLayerPosition;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)reset;
- (void)dealloc;
- (id)stylesheet;
- (void)setStylesheet:(id)arg1;

@end