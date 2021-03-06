/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class NSString;

@interface AXHearingAidMode : NSObject <NSSecureCoding> {
    long long _category;
    int _ear;
    unsigned char _index;
    NSString *_name;
    bool_isSelected;
    int syncAttempts;
}

@property long long category;
@property int ear;
@property unsigned char index;
@property bool isSelected;
@property(copy) NSString * name;
@property int syncAttempts;

+ (bool)supportsSecureCoding;

- (long long)category;
- (void)dealloc;
- (id)description;
- (int)ear;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSelected;
- (bool)isStream;
- (id)name;
- (void)setCategory:(long long)arg1;
- (void)setEar:(int)arg1;
- (void)setIndex:(unsigned char)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSyncAttempts:(int)arg1;
- (int)syncAttempts;
- (id)transportRepresentation;

@end
