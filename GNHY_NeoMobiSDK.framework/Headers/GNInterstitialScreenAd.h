//
//  GNInterstitialScreenAd.h
//  GNHY_NeoMobiSDK_Manage
//
//  Created by 江湖 on 2020/5/28.
//  Copyright © 2020 江湖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GNFullScreenAd.h"

@protocol GNInterstitialScreenAdDelegate;
@interface GNInterstitialScreenAd : NSObject
- (instancetype)initWithPlacementId:(NSString *)placementId;
@property(nonatomic,weak)id<GNInterstitialScreenAdDelegate> delegate;
@property(nonatomic,assign)BOOL isLoad;//是否加载完毕
@property(nonatomic,assign)BOOL isFullScreen;//是否全屏视频
@property(nonatomic,weak)id<GNFullScreenAdDelegate> fullScreenDelegate;

// 加载激励视频数据
- (void)loadInterstitialAd;
//展示激励视频
- (void)showInterstitialAD;
//广告位获取广告
- (void)upDataADitemId:(NSString *)itemId;
@end


@protocol GNInterstitialScreenAdDelegate <NSObject>
@optional
/**
 广告数据加载成功回调
 
 @param rewardedInterstitialAd GDTRewardInterstitialAd 实例
 */
- (void)gn_LoadInterstitialAdDidLoadFinish:(GNInterstitialScreenAd *)rewardedInterstitialAd;


/**
  当广告位更新时调用
 @param rewardedInterstitialAd GNRewardInterstitialAd
 */
- (void)gn_upDataAdInterstitialSuccess:(GNInterstitialScreenAd *)rewardedInterstitialAd;

/**
 视频播放页即将展示回调

 @param rewardedInterstitialAd GNInterstitialScreenAd 实例
 */
- (void)gn_InterstitialADViewWillAppear:(GNInterstitialScreenAd *)rewardedInterstitialAd DEPRECATED_ATTRIBUTE;
/**
 插屏广告已经展示，曝光

 @param rewardedInterstitialAd GNRewardInterstitialAd 实例
 */
- (void)gn_InterstitialADViewDidLoad:(GNInterstitialScreenAd *)rewardedInterstitialAd;

/**
 插屏关闭时回调

 @param rewardedInterstitialAd GNRewardInterstitialAd 实例
 */
- (void)gn_InterstitialAdDidClose:(GNInterstitialScreenAd *)rewardedInterstitialAd;

/**
 插屏广告信息点击回调

 @param rewardedInterstitialAd GNRewardInterstitialAd 实例
 */
- (void)gn_InterstitialAdDidClicked:(GNInterstitialScreenAd *)rewardedInterstitialAd;

/**
 插屏广告各种错误信息回调

 @param rewardedInterstitialAd GNRewardInterstitialAd 实例
 @param error 具体错误信息
 */
- (void)gn_InterstitialAd:(GNInterstitialScreenAd *)rewardedInterstitialAd didFailWithError:(NSError *)error;

@end
