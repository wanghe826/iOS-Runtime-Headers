/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying> {
    NSMutableArray *_uploadTokens;
}

@property(retain) NSMutableArray * uploadTokens;

- (void).cxx_destruct;
- (void)addUploadTokens:(id)arg1;
- (void)clearUploadTokens;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setUploadTokens:(id)arg1;
- (id)uploadTokens;
- (id)uploadTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)uploadTokensCount;
- (void)writeTo:(id)arg1;

@end
