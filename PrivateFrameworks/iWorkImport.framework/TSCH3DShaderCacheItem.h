/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject, NSSet, TSCH3DShaderResource;

@interface TSCH3DShaderCacheItem : NSObject {
    struct ObjectStateMatchObject { 
        struct ObjcSharedPtr<NSSet> { 
            NSSet *mValue; 
        } mEffects; 
        struct vector<TSCH3D::ResourceAttributeState, std::__1::allocator<TSCH3D::ResourceAttributeState> > { 
            struct ResourceAttributeState {} *__begin_; 
            struct ResourceAttributeState {} *__end_; 
            struct __compressed_pair<TSCH3D::ResourceAttributeState *, std::__1::allocator<TSCH3D::ResourceAttributeState> > { 
                struct ResourceAttributeState {} *__first_; 
            } __end_cap_; 
        } mAttributes; 
        struct array<TSCH3D::TextureAttributes, 8> { 
            struct TextureAttributes { 
                int object; 
                int format; 
                boolmipmap; 
                boolrepeat; 
                boolnearest; 
                long long unit; 
                struct TextureSizeHint { 
                    int loadOptimizedMipmaps; 
                    struct tvec2<int> { 
                        union { 
                            int x; 
                            int r; 
                            int s; 
                        } ; 
                        union { 
                            int y; 
                            int g; 
                            int t; 
                        } ; 
                    } sizeLODHint; 
                } textureSizeHint; 
                boolis3DTexture; 
            } __elems_[8]; 
        } mTextureAttributes; 
        struct array<NSObject *, 8> { 
            NSObject *__elems_[8]; 
        } mTextures; 
    NSSet *mDebugEffects;
    TSCH3DShaderResource *mShader;
    } mState;
}

+ (id)itemWithObjectState:(const struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_1_1; } x1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_1_1; struct Lookup {} *x_2_1_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_2_1; } x_2_1_3; } x2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_2_1; } x_3_1_1[8]; } x3; struct array<TSCH3D::TextureAttributes, 8> { struct TextureAttributes { int x_1_2_1; int x_1_2_2; boolx_1_2_3; boolx_1_2_4; boolx_1_2_5; long long x_1_2_6; struct TextureSizeHint { int x_7_3_1; struct tvec2<int> { union { int x_1_5_1; int x_1_5_2; int x_1_5_3; } x_2_4_1; union { int x_2_5_1; int x_2_5_2; int x_2_5_3; } x_2_4_2; } x_7_3_2; } x_1_2_7; boolx_1_2_8; } x_4_1_1[8]; } x4; }*)arg1 version:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)debug_differentEffectsWithItem:(id)arg1;
- (id)initWithObjectState:(const struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_1_1; } x1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_1_1; struct Lookup {} *x_2_1_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_2_1; } x_2_1_3; } x2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_2_1; } x_3_1_1[8]; } x3; struct array<TSCH3D::TextureAttributes, 8> { struct TextureAttributes { int x_1_2_1; int x_1_2_2; boolx_1_2_3; boolx_1_2_4; boolx_1_2_5; long long x_1_2_6; struct TextureSizeHint { int x_7_3_1; struct tvec2<int> { union { int x_1_5_1; int x_1_5_2; int x_1_5_3; } x_2_4_1; union { int x_2_5_1; int x_2_5_2; int x_2_5_3; } x_2_4_2; } x_7_3_2; } x_1_2_7; boolx_1_2_8; } x_4_1_1[8]; } x4; }*)arg1 version:(id)arg2;
- (bool)matchesObjectState:(const struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_1_1; } x1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_1_1; struct Lookup {} *x_2_1_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_2_1; } x_2_1_3; } x2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_2_1; } x_3_1_1[8]; } x3; struct array<TSCH3D::TextureAttributes, 8> { struct TextureAttributes { int x_1_2_1; int x_1_2_2; boolx_1_2_3; boolx_1_2_4; boolx_1_2_5; long long x_1_2_6; struct TextureSizeHint { int x_7_3_1; struct tvec2<int> { union { int x_1_5_1; int x_1_5_2; int x_1_5_3; } x_2_4_1; union { int x_2_5_1; int x_2_5_2; int x_2_5_3; } x_2_4_2; } x_7_3_2; } x_1_2_7; boolx_1_2_8; } x_4_1_1[8]; } x4; }*)arg1 version:(id)arg2;
- (id)shader;

@end
