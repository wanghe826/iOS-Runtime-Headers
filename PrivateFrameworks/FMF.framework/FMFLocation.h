/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@class CLLocation, FMFHandle, NSDate, NSString;

@interface FMFLocation : NSObject <NSCopying, NSSecureCoding, MKAnnotation> {
    double _TTL;
    FMFHandle *_handle;
    NSString *_label;
    CLLocation *_location;
    NSString *_longAddress;
    double _maxLocatingInterval;
    NSString *_shortAddressString;
    NSDate *_timestamp;
    bool_locatingInProgress;
}

@property double TTL;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) FMFHandle * handle;
@property(readonly) unsigned long long hash;
@property(retain) NSString * label;
@property(getter=isLocatingInProgress) bool locatingInProgress;
@property(retain) CLLocation * location;
@property(copy) NSString * longAddress;
@property double maxLocatingInterval;
@property(copy,readonly) NSString * shortAddress;
@property(copy) NSString * shortAddressString;
@property(copy,readonly) NSString * subtitle;
@property(readonly) Class superclass;
@property(copy) NSDate * timestamp;
@property(copy,readonly) NSString * title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)TTL;
- (struct { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 forHandle:(id)arg2 maxLocatingInterval:(double)arg3 TTL:(double)arg4;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLocatingInProgress;
- (bool)isValid;
- (id)label;
- (id)location;
- (id)locationAge;
- (id)locationShortAddressWithAge;
- (id)locationShortAddressWithAgeIncludeLocating;
- (id)longAddress;
- (double)maxLocatingInterval;
- (void)resetLocateInProgress:(id)arg1;
- (void)resetLocateInProgressTimer;
- (void)setHandle:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocatingInProgress:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setLongAddress:(id)arg1;
- (void)setMaxLocatingInterval:(double)arg1;
- (void)setShortAddressString:(id)arg1;
- (void)setTTL:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (id)shortAddress;
- (id)shortAddressString;
- (id)subtitle;
- (id)timestamp;
- (id)title;
- (void)updateHandle:(id)arg1;
- (void)updateLocation:(id)arg1;

@end
