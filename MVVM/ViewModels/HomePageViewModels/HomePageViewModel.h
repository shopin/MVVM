//
//  HomePageViewModel.h
//  MVVM
//
//  Created by 郑冰津 on 2017/4/6.
//  Copyright © 2017年 JMKJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HomePageViewModel : NSObject<UITableViewDelegate,UITableViewDataSource>

@property (nonatomic,strong)NSString *textString;

- (instancetype)init;

- (void)testSendEventAction;
///数据请求到了
- (void)requestData:(void(^)())block;


@end

/*
 职责:数据的包装,事件的源头以及接收事件的源头
 */
