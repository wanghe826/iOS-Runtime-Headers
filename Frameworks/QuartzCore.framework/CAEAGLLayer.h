/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable> {
    struct _CAEAGLNativeWindow { struct _EAGLNativeWindowObject { int x_1_1_1; unsigned int x_1_1_2; int (*x_1_1_3)(); int (*x_1_1_4)(); int (*x_1_1_5)(); int (*x_1_1_6)(); int (*x_1_1_7)(); int (*x_1_1_8)(); } x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); struct x_list_struct {} *x6; unsigned long long x7; struct Atomic { struct { int x_1_2_1; } x_8_1_1; } x8; struct Atomic { struct { int x_1_2_1; } x_9_1_1; } x9; struct SpinLock { struct { int x_1_2_1; } x_10_1_1; } x10; struct _CAImageQueue {} *x11; id x12; struct x_list_struct {} *x13; unsigned int x14; struct CAEAGLBuffer {} *x15; struct CAEAGLBuffer {} *x16; unsigned int x17; unsigned int x18; unsigned int x19; struct CAEAGLBuffer {} *x20; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; } *_win;
}

@property(getter=isAsynchronous) bool asynchronous;
@property(copy) NSDictionary * drawableProperties;
@property(readonly) struct _EAGLNativeWindowObject { int x1; unsigned int x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); }* nativeWindow;

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (struct _EAGLNativeWindowObject { int x1; unsigned int x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); }*)nativeWindow;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; }*)arg1;
- (void)_display;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (id)drawableProperties;
- (bool)isAsynchronous;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)setAsynchronous:(bool)arg1;
- (void)setDrawableProperties:(id)arg1;
- (bool)shouldArchiveValueForKey:(id)arg1;

@end
