//
//  SDWebImageSVGCoderDefine.h
//  SDWebImageSVGCoder
//
//  Created by DreamPiggy on 2018/10/11.
//

#if __has_include(<SDWebImage/SDWebImage.h>)
#import <SDWebImage/SDWebImage.h>
#else
#import "SDWebImageManager.h"
#import "SDWebImageCacheKeyFilter.h"
#import "SDWebImageCacheSerializer.h"
#import "SDImageCacheConfig.h"
#import "SDImageCache.h"
#import "SDMemoryCache.h"
#import "SDDiskCache.h"
#import "SDImageCacheDefine.h"
#import "SDImageCachesManager.h"
#import "UIView+WebCache.h"
#import "UIImageView+WebCache.h"
#import "UIImageView+HighlightedWebCache.h"
#import "SDWebImageDownloaderConfig.h"
#import "SDWebImageDownloaderOperation.h"
#import "SDWebImageDownloaderRequestModifier.h"
#import "SDWebImageDownloaderResponseModifier.h"
#import "SDWebImageDownloaderDecryptor.h"
#import "SDImageLoader.h"
#import "SDImageLoadersManager.h"
#import "UIButton+WebCache.h"
#import "SDWebImagePrefetcher.h"
#import "UIView+WebCacheOperation.h"
#import "UIImage+Metadata.h"
#import "UIImage+MultiFormat.h"
#import "UIImage+MemoryCacheCost.h"
#import "UIImage+ExtendedCacheData.h"
#import "SDWebImageOperation.h"
#import "SDWebImageDownloader.h"
#import "SDWebImageTransition.h"
#import "SDWebImageIndicator.h"
#import "SDImageTransformer.h"
#import "UIImage+Transform.h"
#import "SDAnimatedImage.h"
#import "SDAnimatedImageView.h"
#import "SDAnimatedImageView+WebCache.h"
#import "SDAnimatedImagePlayer.h"
#import "SDImageCodersManager.h"
#import "SDImageCoder.h"
#import "SDImageAPNGCoder.h"
#import "SDImageGIFCoder.h"
#import "SDImageIOCoder.h"
#import "SDImageFrame.h"
#import "SDImageCoderHelper.h"
#import "SDImageGraphics.h"
#import "SDGraphicsImageRenderer.h"
#import "UIImage+GIF.h"
#import "UIImage+ForceDecode.h"
#import "NSData+ImageContentType.h"
#import "SDWebImageDefine.h"
#import "SDWebImageError.h"
#import "SDWebImageOptionsProcessor.h"
#import "SDImageIOAnimatedCoder.h"
#import "SDImageHEICCoder.h"
#import "SDImageAWebPCoder.h"
#endif

/**
 A BOOL value which specify whether we prefer the actual bitmap representation instead of vector representation for SVG image. This is because the UIImage on iOS 13+ (NSImage on macOS 10.15+) can use the vector image format, which support dynamic scale without losing any detail. However, for some image processing logic, user may need the actual bitmap representation to manage pixels. (NSNumber)
 If you don't provide this value, use NO for default value and prefer the vector format when possible.
 @note Deprecated, use `SDWebImageContextImageThumbnailPixelSize`. Pass CGSize.zero means the viewBox size of SVG.
 */
FOUNDATION_EXPORT SDWebImageContextOption _Nonnull const SDWebImageContextSVGPrefersBitmap API_DEPRECATED_WITH_REPLACEMENT("SDWebImageContextImageThumbnailPixelSize", macos(10.15, 10.15), ios(13.0, 13.0), watchos(6.0, 6.0), tvos(13.0, 13.0));

/**
 A CGSize raw value which specify the desired SVG image size during image loading. Because vector image like SVG format, may not contains a fixed size, or you want to get a larger size bitmap representation UIImage. (NSValue)
 If you don't provide this value, use viewBox size of SVG for default value.
 */
FOUNDATION_EXPORT SDWebImageContextOption _Nonnull const SDWebImageContextSVGImageSize API_DEPRECATED_WITH_REPLACEMENT("SDWebImageContextImageThumbnailPixelSize", macos(10.15, 10.15), ios(13.0, 13.0), watchos(6.0, 6.0), tvos(13.0, 13.0));

/**
 A BOOL value which specify the whether SVG image should keep aspect ratio during image loading. Because when you specify image size via `SDWebImageContextSVGImageSize`, we need to know whether to keep aspect ratio or not when image size aspect ratio is not equal to SVG viewBox size aspect ratio. (NSNumber)
 If you don't provide this value, use YES for default value.
 */
FOUNDATION_EXPORT SDWebImageContextOption _Nonnull const SDWebImageContextSVGImagePreserveAspectRatio API_DEPRECATED_WITH_REPLACEMENT("SDWebImageContextImagePreserveAspectRatio", macos(10.15, 10.15), ios(13.0, 13.0), watchos(6.0, 6.0), tvos(13.0, 13.0));
