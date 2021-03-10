//
//  GNFullScreenAd.h
//  GNHYNeoMobiSDK
//
//  Created by 江湖 on 2020/10/28.
//  Copyright © 2020 江湖. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol GNFullScreenAdDelegate;

@interface GNFullScreenAd : NSObject
+ (GNFullScreenAd *)sharedInstance;
@property(nonatomic,weak)id<GNFullScreenAdDelegate> delegate;
@property(nonatomic,assign)BOOL isLoad;//是否加载完毕

/// 加载激励视频数据
/// @param itemId itemid
- (void)loadVideoWithItemId:(NSString *)itemId;
//展示激励视频
- (void)showVideoAD;
//广告位获取广告
- (void)upDataADitemId:(NSString *)itemId;
@end

@protocol GNFullScreenAdDelegate <NSObject>
@optional

/**
 广告数据加载成功回调
 
 @param fullScreenAd GDTRewardVideoAd 实例
 */
- (void)gn_LoadFullScreenAdDidLoadFinish:(GNFullScreenAd *)fullScreenAd;


/**
  当广告位更新时调用
 @param fullScreenAd GNRewardVideoAd
 */
- (void)gn_upDataAdFullScreenSuccess:(GNFullScreenAd *)fullScreenAd;

/**
 视频播放页即将展示回调

 @param fullScreenAd GNRewardVideoAd 实例
 */
- (void)gn_FullScreenADViewWillAppear:(GNFullScreenAd *)fullScreenAd DEPRECATED_ATTRIBUTE;

/**
 视频广告已经展示，曝光

 @param fullScreenAd GNRewardVideoAd 实例
 */
- (void)gn_FullScreenADViewDidLoad:(GNFullScreenAd *)fullScreenAd;

/**
 视频播放页关闭回调

 @param fullScreenAd GNRewardVideoAd 实例
 */
- (void)gn_FullScreenAdDidClose:(GNFullScreenAd *)fullScreenAd;

/**
 视频广告信息点击回调

 @param fullScreenAd GNRewardVideoAd 实例
 */
- (void)gn_FullScreenAdDidClicked:(GNFullScreenAd *)fullScreenAd;

/**
 视频广告错误信息回调

 @param fullScreenAd GNRewardVideoAd 实例
 @param error 具体错误信息
 */
- (void)gn_FullScreenAd:(GNFullScreenAd *)fullScreenAd didFailWithError:(NSError *)error;

/**
 视频广告视频播放完成

 @param fullScreenAd GDTRewardVideoAd 实例
 */
- (void)gn_FullScreenAdDidPlayFinish:(GNFullScreenAd *)fullScreenAd;

@end
