/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString;

@interface SSFamilyCircle : NSObject <SSXPCCoding> {
    NSArray *_familyMembers;
    NSArray *_iTunesAccountNames;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSArray * familyMembers;
@property(readonly) unsigned long long hash;
@property(retain) NSArray * iTunesAccountNames;
@property(readonly) Class superclass;

- (id)allITunesAccountNames;
- (id)allITunesIdentifiers;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)familyMembers;
- (id)iTunesAccountNames;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)newCacheRepresentation;
- (void)setFamilyMembers:(id)arg1;
- (void)setITunesAccountNames:(id)arg1;

@end
