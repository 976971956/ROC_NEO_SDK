//
//  GNBannerView.h
//  GNHY_NeoMobiSDK_Manage
//
//  Created by 江湖 on 2020/5/28.
//  Copyright © 2020 江湖. All rights reserved.
//

#import <UIKit/UIKit.h>


@class GNBannerView;
@protocol GNBannerViewDelegate <NSObject>
@optional
/**
 广告数据加载成功回调
 
 @param rewardedBannerAd GNBannerView 实例
 */
- (void)gn_LoadBannerAdDidLoadFinish:(GNBannerView *)rewardedBannerAd;
/**
  当广告位更新时调用
 @param rewardedBannerAd GNBannerView
 */
- (void)gn_upDataAdBannerSuccess:(GNBannerView *)rewardedBannerAd;
/**
 Banner播放页即将展示回调

 @param rewardedVideoAd GNRewardVideoAd 实例
 */
- (void)gn_BannerADViewWillAppear:(GNBannerView *)rewardedVideoAd DEPRECATED_ATTRIBUTE;

/**
 Banner广告已经展示，曝光

 @param rewardedVideoAd GNRewardVideoAd 实例
 */
- (void)gn_BannerADViewDidLoad:(GNBannerView *)rewardedVideoAd;

/**
 Banner关闭回调

 @param rewardedVideoAd GNRewardVideoAd 实例
 */
- (void)gn_BannerAdDidClose:(GNBannerView *)rewardedVideoAd;

/**
 Banner广告信息点击回调

 @param rewardedVideoAd GNRewardVideoAd 实例
 */
- (void)gn_BannerAdDidClicked:(GNBannerView *)rewardedVideoAd;

/**
 Banner广告各种错误信息回调

 @param rewardedVideoAd GNRewardVideoAd 实例
 @param error 具体错误信息
 */
- (void)gn_BannerAd:(GNBannerView *)rewardedVideoAd didFailWithError:(NSError *)error;




@end


typedef NS_ENUM(NSUInteger, GNBannerSizeType) {
    GNBannerSize_320_50,
    GNBannerSize_375_60,
    GNBannerSize_414_90,
};
@interface GNBannerView : UIView
- (instancetype)initWithItemId:(NSString *)itemId RootViewController:(UIViewController *)vc andBannerRect:(CGRect)bannerRect andBannerSizeType:(GNBannerSizeType)sizeType;
- (void)upDataConstraint;
//加载banner数据
- (void)loadBannerAd;
//显示banner数据
- (void)showBannerView;
//广告位获取广告
- (void)upDataADitemId:(NSString *)itemId;

@property(nonatomic,assign)BOOL isClose;//banner是否有关闭按钮,默认没有
@property (nonatomic,weak)id <GNBannerViewDelegate> delegate;
@property(nonatomic,assign)BOOL isLoad;//是否加载完毕
@property(nonatomic,strong)UIColor* bannerBackgroundColor;//banner背景颜色

@end

