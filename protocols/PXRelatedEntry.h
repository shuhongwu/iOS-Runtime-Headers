/* Generated by RuntimeBrowser.
 */

@protocol PXRelatedEntry <NSObject, NSCopying>

@required

- (bool)isPlaceholder;
- (PHAssetCollection *)relatedAssetCollection;
- (PHFetchResult *)relatedKeyAssetFetchResult;
- (NSString *)relatedLocalizedSubtitle;
- (NSString *)relatedLocalizedTitle;
- (PHObject *)relatedReferenceObject;
- (NSString *)relatedTitleFontName;

@end