/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSNumber, NSString;

@interface SAAssistantLoaded : SABaseClientBoundCommand {
}

@property(copy) NSString * dataAnchor;
@property(copy) NSNumber * requestSync;
@property(copy) NSArray * syncAnchors;
@property(copy) NSString * version;

+ (id)assistantLoaded;
+ (id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2;

- (id)dataAnchor;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)requestSync;
- (bool)requiresResponse;
- (void)setDataAnchor:(id)arg1;
- (void)setRequestSync:(id)arg1;
- (void)setSyncAnchors:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)syncAnchors;
- (id)version;

@end