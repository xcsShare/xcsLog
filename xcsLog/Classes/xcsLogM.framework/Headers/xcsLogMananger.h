//
//  xcsLogMananger.h
//  LuxgenP1
//
//  Created by Cypress on 2018/1/9.
//  Copyright © 2018 xcs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "xcsLogMsg.h"

void xcsLogException(NSString* tags, NSString *format, ...);
void xcsLogERROR(NSString* tags, NSString *format, ...);
void xcsLogWARN(NSString* tags, NSString *format, ...);
void xcsLogINFO(NSString* tags, NSString *format, ...);
void xcsLogDEBUG(NSString* tags, NSString *format, ...);
void xcsLogTRACE(NSString* tags, NSString *format, ...);


NS_ASSUME_NONNULL_BEGIN

@interface xcsLogMananger : NSObject

+(xcsLogMananger*)shared;
+(xcsLogMsg*)msgWithType:(xcsLogLevel)type tags:(NSString*)tags msg:(NSString*)msg;
    
+(void)setLogLevel:(xcsLogLevel)level;
+(xcsLogLevel)LogLevel;
    
+(void)setEnableLogDb:(BOOL)enable;
+(BOOL)LogDbEnabled;
+ (NSString*)LogFile;
+ (NSString*)LogDbFile;
+ (void)purgeLogDb;

@end

NS_ASSUME_NONNULL_END
