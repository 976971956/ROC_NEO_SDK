//
//  GNNativeInfoAd.h
//  GNHY_NeoMobiSDK_Manage
//
//  Created by 江湖 on 2020/5/28.
//  Copyright © 2020 江湖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GNNativeAdView.h"


typedef enum : NSUInteger {
    GNNativeSizeType_1280_720,//宽1280高720.比例1280:720
    GNNativeSizeType_equal,//宽高相等,比例1:1
} GNNativeSizeType;
@protocol GNNativeInfoAdDelegate;
@interface GNNativeInfoAd : NSObject
//+ (GNNativeInfoAd *)sharedInstance;
- (instancetype)initWithPlacementId:(NSString *)placementId adRectFrame:(CGRect)rectFrame autoHeight:(BOOL)autoHeight;
/**委托对象*/
@property(nonatomic,weak)id<GNNativeInfoAdDelegate> delegate;
@property(nonatomic,assign)BOOL isLoad;//是否加载完毕

/// 加载Native数据
/// @param count 加载数量
- (void)loadNativeWithCount:(NSInteger)count;
//展示Native视频
- (void)showNativeAD;
//广告位获取广告
- (void)upDataADitemId:(NSString *)itemId;
@end

@protocol GNNativeInfoAdDelegate <NSObject>
@optional

/**
 广告数据加载成功回调
 
 @param ad GNNativeInfoAd 实例
 */
- (void)gn_LoadNativeAdDidLoadFinish:(GNNativeInfoAd *)ad views:(NSArray<__kindof GNNativeAdView *> *)views;

/**
  当广告位更新时调用
 @param ad GNNativeInfoAd
 */
- (void)gn_upDataAdNativeSuccess:(GNNativeInfoAd *)ad;
/**
 广告关闭时调用
 @param AdView GNNativeAdView
 */
- (void)gn_nativeAdViewClosed:(GNNativeAdView *)AdView;
/**
 原生广告信息点击回调

 @param adView GNNativeAdView 实例
 */
- (void)gn_nativeAdDidClicked:(GNNativeAdView *)adView;

/**
 原生广告各种错误信息回调

 @param rewardedVideoAd GNRewardVideoAd 实例
 @param error 具体错误信息
 */
- (void)gn_nativeAd:(GNNativeInfoAd *)rewardedVideoAd didFailWithError:(NSError *)error;
@end
