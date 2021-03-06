/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKRelation : NSObject {
    NSString *_entityName;
    NSString *_inversePropertyName;
    bool_ownsRelated;
    bool_toMany;
}

@property(readonly) NSString * inversePropertyName;
@property(readonly) bool ownsRelatedObject;
@property(readonly) bool toMany;

+ (id)relationWithEntityName:(id)arg1 toMany:(bool)arg2 inversePropertyName:(id)arg3 ownsRelated:(bool)arg4;
+ (id)relationWithEntityName:(id)arg1 toMany:(bool)arg2 inversePropertyName:(id)arg3;

- (void)dealloc;
- (id)description;
- (id)initWithEntityName:(id)arg1 toMany:(bool)arg2 inversePropertyName:(id)arg3 ownsRelated:(bool)arg4;
- (id)inversePropertyName;
- (bool)ownsRelatedObject;
- (bool)toMany;

@end
