/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString, SSURLConnectionRequest;

@interface RadioSyncRequest : RadioRequest {
    NSObject<OS_dispatch_queue> *_artworkQueue;
    unsigned long long _globalVersion;
    NSString *_referer;
    SSURLConnectionRequest *_request;
    NSDictionary *_responseDictionary;
    NSDictionary *_resultingOverrideBagDictionary;
    bool_disableArtworkLoading;
    bool_includeCleanTracksOnly;
    bool_isAutomaticUpdate;
}

@property bool disableArtworkLoading;
@property bool includeCleanTracksOnly;
@property bool isAutomaticUpdate;
@property(copy) NSString * referer;
@property(copy,readonly) NSDictionary * resultingOverrideBagDictionary;

- (void).cxx_destruct;
- (id)_sortedChangesByType:(id)arg1;
- (id)_stationSortOrderForChanges:(id)arg1;
- (id)_updateModel:(id)arg1 withChangeDictionary:(id)arg2 changeType:(long long*)arg3 loadArtworkSynchronously:(bool)arg4;
- (void)cancel;
- (id)changeList;
- (bool)disableArtworkLoading;
- (bool)includeCleanTracksOnly;
- (id)init;
- (id)initWithGlobalVersion:(unsigned long long)arg1;
- (bool)isAutomaticUpdate;
- (id)matchDictionary;
- (id)referer;
- (id)responseDictionary;
- (id)resultingOverrideBagDictionary;
- (void)setDisableArtworkLoading:(bool)arg1;
- (void)setIncludeCleanTracksOnly:(bool)arg1;
- (void)setIsAutomaticUpdate:(bool)arg1;
- (void)setReferer:(id)arg1;
- (void)startWithCompletionHandler:(id)arg1;

@end
