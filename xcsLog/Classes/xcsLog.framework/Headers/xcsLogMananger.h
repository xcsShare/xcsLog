//
//  xcsLogMananger.h
//  LuxgenP1
//
//  Created by Kevin on 2018/12/5.
//  Copyright © 2018年 Trans-iot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "xcsLogMsg.h"

void xcsLog(NSString *format, ...);

NS_ASSUME_NONNULL_BEGIN

@interface xcsLogMananger : NSObject

+(xcsLogMananger*)shared;
+(xcsLogMsg*)msgWithType:(xcsLogLevel)type tags:(NSString*)tags msg:(NSString*)msg;

- (NSArray*)logFiles;

@end

NS_ASSUME_NONNULL_END
