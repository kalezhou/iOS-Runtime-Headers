/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIAutoLoopExportJob : NUVideoExportJob

+ (id)metalRenderer;
+ (bool)shouldUseMetalRenderer;

- (id)autoLoopExportRequest;
- (id)initWithAutoLoopExportRequest:(id)arg1;
- (id)initWithVideoExportRequest:(id)arg1;
- (id)renderer;
- (bool)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(out id*)arg4;

@end
