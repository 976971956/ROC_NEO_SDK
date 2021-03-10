//
//  GNShufflingAD.h
//  GNHY_NeoMobiSDK_Manage
//
//  Created by 江湖 on 2020/7/15.
//  Copyright © 2020 江湖. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol GNShufflingADDelegate;
@interface GNShufflingAD : NSObject
- (instancetype)initWithPlacementId:(NSString *)placementId;
@property(nonatomic,weak)id<GNShufflingADDelegate> delegate;
@property(nonatomic,assign)BOOL isLoad;//是否加载完毕
@property(nonatomic,strong)UIColor *backgroudColor;//背景颜色
@property(nonatomic,strong)UIColor *borderColor;//边框颜色

@property(nonatomic,strong)UIColor *titleColor;//标题颜色
@property(nonatomic,strong)UIColor *titleBackgroudColor;//标题背景颜色
@property(nonatomic,strong)UIColor *suberTitleColor;//副标题颜色
@property(nonatomic,strong)UIColor *suberTitleBackgroudColor;//副标题背景颜色

@property(nonatomic,strong)UIColor *pageColor;//page默认颜色
@property(nonatomic,strong)UIColor *currentPageColor;//page选中颜色
@property(nonatomic,strong)UIColor *closeColor;//关闭按钮颜色
@property(nonatomic,strong)UIColor *closeBackgroudColor;//关闭按钮背景颜色

// 加载激励视频数据
- (void)loadShufflingAd;
//展示激励视频
- (void)showShufflingAD;
//广告位获取广告
- (void)upDataADitemId:(NSString *)itemId;


@end
@protocol GNShufflingADDelegate <NSObject>
@optional
/**
 广告数据加载成功回调
 
 */
- (void)gn_LoadShufflingAdDidLoadFinish:(GNShufflingAD *)rewardedShufflingAd;


/**
  当广告位更新时调用
 */
- (void)gn_upDataAdShufflingSuccess:(GNShufflingAD *)rewardedShufflingAd DEPRECATED_ATTRIBUTE;

/**
 轮播页即将展示回调

 */
- (void)gn_ShufflingADViewWillAppear:(GNShufflingAD *)rewardedShufflingAd DEPRECATED_ATTRIBUTE;
/**
 轮播广告已经展示，曝光

 */
- (void)gn_ShufflingADViewDidLoad:(GNShufflingAD *)rewardedShufflingAd;

/**
 轮播关闭时回调

 */
- (void)gn_ShufflingAdDidClose:(GNShufflingAD *)rewardedShufflingAd;

/**
 轮播广告信息点击回调

 */
- (void)gn_ShufflingAdDidClicked:(GNShufflingAD *)rewardedShufflingAd;

/**
 轮播广告各种错误信息回调

 @param error 具体错误信息
 */
- (void)gn_ShufflingAd:(GNShufflingAD *)rewardedShufflingAd didFailWithError:(NSError *)error;

@end
