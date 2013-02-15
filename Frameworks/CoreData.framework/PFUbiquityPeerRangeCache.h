/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary, NSMutableDictionary, NSPersistentStore, NSString, PFUbiquityLocation;

@interface PFUbiquityPeerRangeCache : NSObject {
    NSMutableDictionary *_allEntityRanges;
    NSMutableDictionary *_cachedRanges;
    BOOL _cachedStorePeerRanges;
    NSString *_localPeerID;
    NSPersistentStore *_privateStore;
    NSString *_storeName;
    NSMutableDictionary *_translatedGlobalIDs;
    PFUbiquityLocation *_ubiquityRootLocation;
}

@property(readonly) NSString * localPeerID;
@property(readonly) NSPersistentStore * privateStore;
@property(readonly) NSString * storeName;
@property(readonly) NSDictionary * translatedGlobalIDs;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;

+ (void)initialize;
+ (int)integerFromPrimaryKeyString:(id)arg1;
+ (unsigned int)peerRangeStartForPrimaryKey:(unsigned int)arg1;

- (BOOL)cachePeerRanges:(id*)arg1;
- (BOOL)cacheSQLCorePeerRange:(id)arg1 error:(id*)arg2;
- (id)cachedRangeForLocalPrimaryKey:(unsigned int)arg1 ofEntityNamed:(id)arg2;
- (id)cachedRangeForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned int)arg3;
- (id)createGlobalObjectIDForManagedObjectID:(id)arg1;
- (id)createMapOfManagedObjectIDsForGlobalIDs:(id)arg1 error:(id*)arg2;
- (id)createMapOfManagedObjectIDsForStoreSaveSnapshot:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)initWithPrivateStore:(id)arg1 storeName:(id)arg2 ubiquityRootLocation:(id)arg3 andLocalPeerID:(id)arg4;
- (id)localPeerID;
- (unsigned int)localPrimaryKeyForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned int)arg3;
- (id)privateStore;
- (BOOL)refreshPeerRangeCache:(id*)arg1;
- (id)storeName;
- (id)translatedGlobalIDs;
- (id)ubiquityRootLocation;

@end