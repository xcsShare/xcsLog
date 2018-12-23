//
//  xcsLogMsg.h
//  LuxgenP1
//
//  Created by Cypress on 2018/1/9.
//  Copyright © 2018 xcs. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef CF_ENUM(NSInteger, xcsLogLevel) {
    xcsLogLevelNone = 0,
    xcsLogLevelException = 1,
    xcsLogLevelERROR  = 2,
    xcsLogLevelWARN   = 4,
    xcsLogLevelINFO   = 8,
    xcsLogLevelDEBUG  = 16,
    xcsLogLevelTRACE  = 32,
    xcsLogLevelALL = 63,

};

NS_ASSUME_NONNULL_BEGIN

@interface xcsLogMsg : NSOperation
@property(readonly, getter=isExecuting) BOOL executing;
@property(readonly, getter=isFinished) BOOL finished;
@property(nonatomic, readonly) NSString* MSG;

@property (nonatomic,readonly)  NSDate *eventDate;
@property (nonatomic,readonly)  xcsLogLevel eventLevel;
@property (nonatomic,readonly)  NSString *eventTags;
@property (nonatomic,readonly)  NSString *eventMsg;

+(NSString*)noteFilePath;

@end

NS_ASSUME_NONNULL_END
