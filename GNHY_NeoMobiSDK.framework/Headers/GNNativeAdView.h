//
//  GNNativeAdView.h
//  GNHY_NeoMobiSDK_Manage
//
//  Created by 江湖 on 2020/6/8.
//  Copyright © 2020 江湖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GNNativeAdView : UIView
//渲染
- (void)render;
- (void)nativeTop:(CGFloat)top;
@property(nonatomic,weak)id delegates;

@end

