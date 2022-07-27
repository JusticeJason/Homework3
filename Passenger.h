//
//  Passenger.h
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Orders : NSObject
// @property 属性
@property (nonatomic, copy) NSString *place;
@property (nonatomic, copy) NSString *time;
@property (nonatomic, readonly) NSNumber *ordNumber;
@end

@interface Passenger : Person
// @property 属性
// 是否年满 18 岁
BOOL isAge;
// 历史订单 （数组）
NSArray *hisOrders = [[NSArray alloc] init];
// 未出行订单 （数组）
NSArray *newOrders = [[NSArray alloc] init];
// Function 方法
// 去订票
+(void)book: (Orders)order;
// 去检票
+(void)check: (Orders)order;
@end

NS_ASSUME_NONNULL_END
