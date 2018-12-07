//
//  xcsLogMsg.h
//  LuxgenP1
//
//  Created by Kevin on 2018/12/5.
//  Copyright © 2018年 Trans-iot. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef CF_ENUM(NSInteger, xcsLogLevel) {
    xcsLogLevelException = 1,
    xcsLogLevelERROR  = 2,
    xcsLogLevelWARN   = 4,
    xcsLogLevelINFO   = 8,
    xcsLogLevelDEBUG  = 16,
    xcsLogLevelTRACE  = 32,
    xcsLogLevelALL,

};

NS_ASSUME_NONNULL_BEGIN

@interface xcsLogMsg : NSOperation
@property(readonly, getter=isExecuting) BOOL executing;
@property(readonly, getter=isFinished) BOOL finished;

@property (nonatomic,readonly)  NSDate *eventDate;
@property (nonatomic,readonly)  xcsLogLevel eventLevel;
@property (nonatomic,readonly)  NSString *eventTags;
@property (nonatomic,readonly)  NSString *eventMsg;

//-(BOOL)isExecuting;
//-(BOOL)isFinished;


@end

NS_ASSUME_NONNULL_END
