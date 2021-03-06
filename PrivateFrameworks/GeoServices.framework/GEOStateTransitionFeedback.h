/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStateTransitionFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int newValue : 1; 
        unsigned int oldValue : 1; 
        unsigned int stateType : 1; 
    } _has;
    int _newValue;
    int _oldValue;
    int _stateType;
}

@property (nonatomic) BOOL hasNewValue;
@property (nonatomic) BOOL hasOldValue;
@property (nonatomic) BOOL hasStateType;
@property (nonatomic) int newValue;
@property (nonatomic) int oldValue;
@property (nonatomic) int stateType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasNewValue;
- (BOOL)hasOldValue;
- (BOOL)hasStateType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)newValue;
- (int)oldValue;
- (BOOL)readFrom:(id)arg1;
- (void)setHasNewValue:(BOOL)arg1;
- (void)setHasOldValue:(BOOL)arg1;
- (void)setHasStateType:(BOOL)arg1;
- (void)setNewValue:(int)arg1;
- (void)setOldValue:(int)arg1;
- (void)setStateType:(int)arg1;
- (int)stateType;
- (void)writeTo:(id)arg1;

@end
