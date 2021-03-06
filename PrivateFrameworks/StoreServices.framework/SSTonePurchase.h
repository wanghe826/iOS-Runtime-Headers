/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSNumber, NSString;

@interface SSTonePurchase : SSPurchase <SSXPCCoding, NSCoding, NSCopying> {
    NSArray *_allowedToneStyles;
    NSNumber *_assigneeIdentifier;
    NSString *_assigneeToneStyle;
    bool_shouldMakeDefaultRingtone;
    bool_shouldMakeDefaultTextTone;
}

@property(copy) NSArray * allowedToneStyles;
@property(retain) NSNumber * assigneeIdentifier;
@property(copy) NSString * assigneeToneStyle;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool shouldMakeDefaultRingtone;
@property bool shouldMakeDefaultTextTone;
@property(readonly) Class superclass;

- (void)_addEntriesToDatabaseEncoding:(id)arg1;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (id)allowedToneStyles;
- (id)assigneeIdentifier;
- (id)assigneeToneStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAllowedToneStyles:(id)arg1;
- (void)setAssigneeIdentifier:(id)arg1;
- (void)setAssigneeToneStyle:(id)arg1;
- (void)setShouldMakeDefaultRingtone:(bool)arg1;
- (void)setShouldMakeDefaultTextTone:(bool)arg1;
- (bool)shouldMakeDefaultRingtone;
- (bool)shouldMakeDefaultTextTone;

@end
