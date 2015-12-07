//
//  PosSdkManager.h
//  paysdk
//
//  Created by 鹏飞 胡 on 15/9/14.
//  Copyright (c) 2015年 鹏飞 胡. All rights reserved.
//


#import "PosSdkKit.h"
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
@interface PosSdkManager : NSObject<PosSdkProtocol>
{


}
/**
 * 设置是否为测试环境
 */
@property(nonatomic,assign)BOOL isDebug;


+(PosSdkManager *)shareInstance;


@end
