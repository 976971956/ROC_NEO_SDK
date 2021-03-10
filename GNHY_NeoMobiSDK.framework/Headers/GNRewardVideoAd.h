//
//  GNRewardVideoAd.h
//  GNHY_NeoMobiSDK_Manage
//
//  Created by 江湖 on 2020/5/28.
//  Copyright © 2020 江湖. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol GNRewardVideoAdDelegate;

@interface GNRewardVideoAd : NSObject
+ (GNRewardVideoAd *)sharedInstance;
@property(nonatomic,weak)id<GNRewardVideoAdDelegate> delegate;
@property(nonatomic,assign)BOOL isLoad;//是否加载完毕

/// 加载激励视频数据
/// @param itemId itemid
- (void)loadVideoWithItemId:(NSString *)itemId;
//展示激励视频
- (void)showVideoAD;
//广告位获取广告
- (void)upDataADitemId:(NSString *)itemId;
@end

@protocol GNRewardVideoAdDelegate <NSObject>
@optional

/**
 广告数据加载成功回调
 
 @param rewardedVideoAd GDTRewardVideoAd 实例
 */
- (void)gn_LoadVideoAdDidLoadFinish:(GNRewardVideoAd *)rewardedVideoAd;


/**
  当广告位更新时调用
 @param rewardedVideoAd GNRewardVideoAd
 */
- (void)gn_upDataAdVideoSuccess:(GNRewardVideoAd *)rewardedVideoAd;

/**
 视频播放页即将展示回调

 @param rewardedVideoAd GNRewardVideoAd 实例
 */
- (void)gn_VideoADViewWillAppear:(GNRewardVideoAd *)rewardedVideoAd DEPRECATED_ATTRIBUTE;

/**
 视频广告已经展示，曝光

 @param rewardedVideoAd GNRewardVideoAd 实例
 */
- (void)gn_VideoADViewDidLoad:(GNRewardVideoAd *)rewardedVideoAd;

/**
 视频播放页关闭回调

 @param rewardedVideoAd GNRewardVideoAd 实例
 */
- (void)gn_VideoAdDidClose:(GNRewardVideoAd *)rewardedVideoAd;

/**
 视频广告信息点击回调

 @param rewardedVideoAd GNRewardVideoAd 实例
 */
- (void)gn_VideoAdDidClicked:(GNRewardVideoAd *)rewardedVideoAd;

/**
 视频广告错误信息回调

 @param rewardedVideoAd GNRewardVideoAd 实例
 @param error 具体错误信息
 */
- (void)gn_VideoAd:(GNRewardVideoAd *)rewardedVideoAd didFailWithError:(NSError *)error;

/**
 视频广告播放达到激励条件回调

 @param rewardedVideoAd GNRewardVideoAd 实例
 */
- (void)gn_VideoAdDidRewardEffective:(GNRewardVideoAd *)rewardedVideoAd;

/**
 视频广告视频播放完成

 @param rewardedVideoAd GDTRewardVideoAd 实例
 */
- (void)gn_VideoAdDidPlayFinish:(GNRewardVideoAd *)rewardedVideoAd;

@end
