/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class RadioArtworkCollection, RadioSeedMetadata;

@interface RadioMutableLikeBanItem : RadioLikeBanItem {
    long long _itemID;
}

@property long long albumID;
@property(retain) RadioArtworkCollection * artworkCollection;
@property bool isSeed;
@property long long itemID;
@property(copy) RadioSeedMetadata * seedMetadata;
@property long long storeID;
@property long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)itemID;
- (void)setAlbumID:(long long)arg1;
- (void)setArtworkCollection:(id)arg1;
- (void)setIsSeed:(bool)arg1;
- (void)setItemID:(long long)arg1;
- (void)setSeedMetadata:(id)arg1;
- (void)setStoreID:(long long)arg1;
- (void)setType:(long long)arg1;

@end
