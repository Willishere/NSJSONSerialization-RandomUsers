//
//  Person.h
//  RandomUsers-Objective-C
//
//  Created by William Chen on 11/7/19.
//  Copyright © 2019 Mitchell Budge. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPerson : NSObject
@property NSString *email;

- (instancetype) initWithEmail:(NSString *)email;

- (instancetype) initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
