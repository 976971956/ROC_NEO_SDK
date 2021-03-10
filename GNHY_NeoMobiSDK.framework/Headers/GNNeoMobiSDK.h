//
//  GNNeoMobiSDK.h
//  GNHY_NeoMobiSDK_Manage
//
//  Created by 江湖 on 2020/5/28.
//  Copyright © 2020 江湖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GNBannerView.h"
#import "GNRewardVideoAd.h"
#import "GNInterstitialScreenAd.h"
#import "GNOpenScreenAd.h"
#import "GNNativeInfoAd.h"
#import "GNShufflingAD.h"
#import "GNFullScreenAd.h"
@protocol GNNeoMobiSDKDelegate <NSObject>

@optional

- (void)gn_RegisterSuccessful;

- (void)gn_RegisterFailure:(NSError *)error;


@end

@interface GNNeoMobiSDK : NSObject
+ (instancetype)shareGNHYNeoMobiSDK;


/// 初始化 appid;,appkey ;pageid媒体包号
- (GNNeoMobiSDK *(^)(NSString *appid ,NSString *appkey,NSString *pageId))setApp;

//YES竖屏No横屏 默认YES
@property(nonatomic,assign)BOOL somehowTheScreen;
@property(nonatomic,weak)id <GNNeoMobiSDKDelegate> delegate;
@property(nonatomic,assign)BOOL isInitSuccessful;//是否已经初始化

//日志
- (void)roc_Log:(BOOL)log andChanll:(NSString *)chanll;
@end

