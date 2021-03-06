/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPShape : CPGraphicObject <CPDisposable> {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    boolboundsComputed;
    boolisUprightRectangle;
    boolrenderedBoundsComputed;
    struct CGColor { } *fillColor;
    union CGPDFObject { } *fillObject;
    int lineCap;
    int lineJoin;
    double lineWidth;
    double miterLimit;
    } paintTransform;
    struct CGPath { } *path;
    unsigned int pdfObjectID;
    struct CGColor { } *strokeColor;
    union CGPDFObject { } *strokeObject;
    int windingRule;
}

- (void)accept:(id)arg1;
- (void)addShape:(id)arg1;
- (id)attributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)canCombineWith:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)dispose;
- (struct CGColor { }*)fillColor;
- (union CGPDFObject { }*)fillObject;
- (void)finalize;
- (bool)hasFill;
- (bool)hasSamePathAs:(id)arg1;
- (bool)hasStroke;
- (id)init;
- (id)initWithPDFShape:(struct CPPDFShape { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned int x2; struct CPPDFStyle {} *x3; int x4; struct CGPath {} *x5; boolx6; struct CGAffineTransform { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; double x_7_1_5; double x_7_1_6; } x7; struct CGAffineTransform { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; } x8; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })innerBounds;
- (bool)isStrokeFor:(id)arg1;
- (bool)isUprightRectangle;
- (bool)isVisible;
- (int)lineCap;
- (int)lineJoin;
- (double)lineWidth;
- (void)makeLineFromVertex:(struct CGPoint { double x1; double x2; })arg1 toVertex:(struct CGPoint { double x1; double x2; })arg2;
- (double)miterLimit;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })paintTransform;
- (struct CGPath { }*)path;
- (unsigned int)pathElementCount;
- (unsigned int)pdfObjectID;
- (void)recomputeBounds;
- (void)recomputeRenderedBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderedBounds;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setFillObject:(union CGPDFObject { }*)arg1;
- (void)setLineCap:(int)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setPaintTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setPdfObjectID:(unsigned int)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (void)setStrokeObject:(union CGPDFObject { }*)arg1;
- (void)setWindingRule:(int)arg1;
- (id)string;
- (struct CGColor { }*)strokeColor;
- (union CGPDFObject { }*)strokeObject;
- (int)windingRule;
- (long long)zOrder;

@end
