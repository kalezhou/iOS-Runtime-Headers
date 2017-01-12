/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAnalogScene : SKScene {
    UIColor * _alternativeTickColor;
    SKNode * _background;
    SKNode * _backgroundChild;
    SKNode * _circle;
    unsigned int  _currentDensity;
    NTKVariantNode * _currentVariantNode;
    int  _dataMode;
    NTKFaceEditView * _editView;
    SKNode * _faceChild;
    SKSpriteNode * _faceCircleSprite;
    SKTexture * _faceCircleTexture;
    UIColor * _faceColor;
    SKNode * _root;
    BOOL  _shouldHideVariantsBelowCurrent;
    BOOL  _showContentForUnadornedSnapshot;
    UIColor * _tickColor;
    NSMutableArray * _variantNodes;
}

@property (readonly) NSArray *activeVariantNodes;
@property (nonatomic, retain) UIColor *alternativeTickColor;
@property (nonatomic, readonly) SKNode *background;
@property (nonatomic, readonly) SKNode *circle;
@property (nonatomic, readonly) unsigned int currentDensity;
@property (nonatomic, retain) NTKVariantNode *currentVariantNode;
@property (nonatomic, readonly) int dataMode;
@property (nonatomic, retain) NTKFaceEditView *editView;
@property (nonatomic, readonly) SKNode *face;
@property (retain) UIColor *faceColor;
@property (nonatomic) BOOL shouldHideVariantsBelowCurrent;
@property (nonatomic) BOOL shouldRasterizeBackground;
@property (nonatomic) BOOL showContentForUnadornedSnapshot;
@property (nonatomic, retain) UIColor *tickColor;
@property (nonatomic, readonly) NSMutableArray *variantNodes;

- (void).cxx_destruct;
- (void)_applyDataMode:(int)arg1;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4;
- (BOOL)_canRasterize;
- (void)_cleanupAfterEditing;
- (void)_configureForEditMode:(int)arg1;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_displayZoomScale:(float)arg1 fraction:(float)arg2;
- (void)_prepareForEditing;
- (void)_restoreToFullScreen;
- (void)_setObscuredContentHiddenForScrubbing:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)_updateTickColors;
- (id)activeVariantNodes;
- (void)addNodeToBackground:(id)arg1;
- (void)addNodeToFace:(id)arg1;
- (id)addVariantNodeWithElements:(id)arg1;
- (id)addVariantNodeWithElements:(id)arg1 parent:(id)arg2 hidden:(BOOL)arg3;
- (id)alternativeTickColor;
- (void)applyLabelPositions:(struct LabelPosition { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; int x2; int x3; }*)arg1 toNodes:(id)arg2;
- (void)applyLabelPositions:(struct LabelPosition { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; int x2; int x3; }*)arg1 withCenter:(struct CGPoint { float x1; float x2; })arg2 toNodes:(id)arg3;
- (id)auxiliaryScrubbingObscuredNodes;
- (id)background;
- (id)circle;
- (void)cleanupAfterZoom;
- (unsigned int)currentDensity;
- (id)currentVariantNode;
- (int)dataMode;
- (void)didMoveToView:(id)arg1;
- (id)displayTime;
- (id)editView;
- (void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)enumerateTickCollectionNodes:(id /* block */)arg1;
- (id)face;
- (id)faceCircleSprite;
- (id)faceColor;
- (void)forEachActiveVariant:(id /* block */)arg1;
- (id)handColor;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)invalidateRasterization;
- (void)performWristRaiseAnimation;
- (void)preRender;
- (void)prepareToZoom;
- (void)prepareWristRaiseAnimation;
- (unsigned int)scrubbingObscured12ElementBottomIndex;
- (id)scrubbingObscuredCollectionNodes;
- (void)setAlternativeTickColor:(id)arg1;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setCurrentVariantNode:(id)arg1;
- (void)setDensity:(unsigned int)arg1;
- (void)setEditView:(id)arg1;
- (void)setFaceColor:(id)arg1;
- (void)setShouldHideVariantsBelowCurrent:(BOOL)arg1;
- (void)setShouldRasterizeBackground:(BOOL)arg1;
- (void)setShowContentForUnadornedSnapshot:(BOOL)arg1;
- (void)setTickColor:(id)arg1;
- (void)setZoomFraction:(float)arg1 diameter:(float)arg2;
- (BOOL)shouldHideVariantsBelowCurrent;
- (BOOL)shouldRasterizeBackground;
- (BOOL)showContentForUnadornedSnapshot;
- (void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (id)tickColor;
- (id)variantNodes;

@end