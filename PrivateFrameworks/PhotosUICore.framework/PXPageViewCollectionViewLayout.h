/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPageViewCollectionViewLayout : UICollectionViewFlowLayout {
    bool  _pagingEnabled;
}

@property (nonatomic) bool pagingEnabled;

- (double)_pageWidth;
- (unsigned long long)pageForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (bool)pagingEnabled;
- (void)setPagingEnabled:(bool)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end
