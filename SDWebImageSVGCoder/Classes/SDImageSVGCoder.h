//
//  SDImageSVGCoder.h
//  SDWebImageSVGCoder
//
//  Created by DreamPiggy on 2018/9/27.
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

NS_ASSUME_NONNULL_BEGIN

/***
SDImageSVGCoder is a SVG image coder, which use the built-in UIKit/AppKit method to decode SVG images. The SVG was implemented in iOS 13/macOS 10.15 with Symbol Image format, which is subset of SVG 1.1 or SVG 2 spec. If you find your SVG ccould not rendered correctly, please convert it by checking https://developer.apple.com/documentation/xcode/creating_custom_symbol_images_for_your_app

@note If you call the coder directly, use the coder option (See `SDWebImageSVGCoderDefine.h`) instead of the context option.
*/
API_AVAILABLE(macos(10.15), ios(13.0), watchos(6.0), tvos(13.0))
@interface SDImageSVGCoder : NSObject <SDImageCoder>

@property (nonatomic, class, readonly) SDImageSVGCoder *sharedCoder;

@end

NS_ASSUME_NONNULL_END
