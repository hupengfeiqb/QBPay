//
//  PosSdkKit.h
//  PayFrameWork
//
//  Created by 鹏飞 胡 on 15/10/15.
//  Copyright © 2015年 鹏飞 胡. All rights reserved.
//

#ifndef PosSdkKit_h
#define PosSdkKit_h



@protocol KsnNotBindDelegate <NSObject>
//恢复交易,绑定设备成功之后调用
- (void)resume;
//退出交易，点击对话框取消按钮，退出交易
- (void)quit;
@end


@protocol PosSdkProtocol <NSObject>


typedef void (^KsnNotBoundCallBack)(NSString * ksnNo,NSString * divceModel,id<KsnNotBindDelegate> delegate);

typedef void (^TradeFinishCallBack)();

/**
 * 开始交易，如果没有绑定设备， 则暂停交易跳出功能
 * 该方法为T+1交易
 * 如果已经绑定，会自动进行交易
 * @param activity 活动
 * @param orderNo 订单号
 * @param token 令牌
 * @param ksnNotBoundListener 是否当KSN未绑定时暂停交易,回调函数
 * @param tradeFinishCallBack 交易结束，回调函数

 * @see KsnNotBoundListener#onKsnNotBound
 */
- (void)startTrade:(NSString *)orderNo
             token:(NSString *)token
          viewCtrl:(UINavigationController *)viewCtrl
          callBack:(void (^)(NSString * ksnNo,NSString * divceModel,id<KsnNotBindDelegate> delegate))ksnNotBoundCallBack
tradeFinishCallBack:(void(^)())tradeFinishCallBack;
/**
 * 开始交易，如果没有绑定设备， 则暂停交易跳出功能
 * 如果已经绑定，会自动进行交易
 *
 * @param activity 活动
 * @param orderNo 订单号
 * @param token 令牌
 * @param isTradeZero 是否T0交易
 * @param ksnNotBoundListener 是否当KSN未绑定时暂停交易,回调次函数
 * @param tradeFinishCallBack 交易结束，回调函数
 * @see KsnNotBoundListener#onKsnNotBound
 */
- (void)startTrade:(NSString *)orderNo
             token:(NSString *)token
       isTradeZero:(BOOL)isTradeZero
          viewCtrl:(UINavigationController *)viewCtrl
          callBack:(void (^)(NSString * ksnNo,NSString * divceModel,id<KsnNotBindDelegate> delegate))ksnNotBoundCallBack
tradeFinishCallBack:(void(^)())tradeFinishCallBack
;
/**
 * 发起扫描和连接设备
 */
- (void)searchAndConnect;





@end






#endif /* PosSdkKit_h */
