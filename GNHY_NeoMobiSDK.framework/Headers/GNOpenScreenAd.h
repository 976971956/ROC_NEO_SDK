//
//  GNOpenScreenAd.h
//  GNHY_NeoMobiSDK_Manage
//
//  Created by 江湖 on 2020/5/28.
//  Copyright © 2020 江湖. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol GNOpenScreenAdDelegate;
@interface GNOpenScreenAd : NSObject
- (instancetype)initWithPlacementId:(NSString *)placementId;

@property(nonatomic,weak)id<GNOpenScreenAdDelegate> delegate;
@property(nonatomic,assign)BOOL isLoad;//是否加载完毕

/// 加载开屏数据
- (void)loadOpenAd;
//展示开屏
- (void)showOpenAd;
//广告位获取广告
- (void)upDataADitemId:(NSString *)itemId;
@end

@protocol GNOpenScreenAdDelegate <NSObject>
@optional
/**
 广告数据加载成功回调
 
 @param rewardedOpenAd GDTRewardOpenAd 实例
 */
- (void)gn_LoadOpenAdDidLoadFinish:(GNOpenScreenAd *)rewardedOpenAd;


/**
  当广告位更新时调用
 @param rewardedOpenAd GNRewardOpenAd
 */
- (void)gn_upDataAdOpenSuccess:(GNOpenScreenAd *)rewardedOpenAd;
/**
 开屏放页即将展示回调

 @param rewardedOpenAd GNOpenScreenAd 实例
 */
- (void)gn_OpenADViewWillAppear:(GNOpenScreenAd *)rewardedOpenAd DEPRECATED_ATTRIBUTE;

/**
 开屏广告已经展示，曝光

 @param rewardedOpenAd GNRewardOpenAd 实例
 */
- (void)gn_OpenADViewDidLoad:(GNOpenScreenAd *)rewardedOpenAd;

/**
 开屏关闭时回调

 @param rewardedOpenAd GNRewardOpenAd 实例
 */
- (void)gn_OpenAdDidClose:(GNOpenScreenAd *)rewardedOpenAd;

/**
 开屏广告信息点击回调

 @param rewardedOpenAd GNRewardOpenAd 实例
 */
- (void)gn_OpenAdDidClicked:(GNOpenScreenAd *)rewardedOpenAd;

/**
 开屏广告各种错误信息回调

 @param rewardedOpenAd GNRewardOpenAd 实例
 @param error 具体错误信息
 */
- (void)gn_OpenAd:(GNOpenScreenAd *)rewardedOpenAd didFailWithError:(NSError *)error;

@end
