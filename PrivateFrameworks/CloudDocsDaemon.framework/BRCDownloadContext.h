/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCItemID, BRCLocalContainer, CKRecordID, NSNumber, NSObject<GSAdditionStoring>, NSProgress, NSString;

@interface BRCDownloadContext : NSObject {
    BRCLocalContainer *_container;
    double _contentSize;
    NSString *_debugName;
    NSNumber *_documentID;
    NSProgress *_downloadProgress;
    NSString *_etag;
    BRCItemID *_itemID;
    NSNumber *_liveFileID;
    struct NSObject { Class x1; } *_storage;
    long long _transferPriority;
    bool_contentIsPackage;
    bool_contentsHasThumbnail;
    bool_liveItemIsPackage;
    bool_wantsContent;
}

@property(readonly) BRCLocalContainer * container;
@property(readonly) bool contentIsPackage;
@property(readonly) double contentSize;
@property(readonly) bool contentsHasThumbnail;
@property(readonly) NSString * debugName;
@property(readonly) NSNumber * documentID;
@property(readonly) NSProgress * downloadProgress;
@property(readonly) NSString * etag;
@property(readonly) BRCItemID * itemID;
@property(readonly) NSNumber * liveFileID;
@property(readonly) bool liveItemIsPackage;
@property(readonly) CKRecordID * recordID;
@property(readonly) NSObject<GSAdditionStoring> * storage;
@property(readonly) CKRecordID * structuralRecordID;
@property(readonly) long long transferPriority;
@property(readonly) bool wantsContent;

- (void).cxx_destruct;
- (id)container;
- (bool)contentIsPackage;
- (double)contentSize;
- (bool)contentsHasThumbnail;
- (id)debugName;
- (id)description;
- (id)documentID;
- (id)downloadProgress;
- (id)etag;
- (id)initWithLocalItem:(id)arg1;
- (id)itemID;
- (id)liveFileID;
- (bool)liveItemIsPackage;
- (id)recordID;
- (struct NSObject { Class x1; }*)storage;
- (id)structuralRecordID;
- (long long)transferPriority;
- (bool)wantsContent;

@end
