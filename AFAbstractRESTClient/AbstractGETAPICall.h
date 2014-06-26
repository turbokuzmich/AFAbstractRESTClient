//
//  AbstractGETAPICall.h
//   
//
//  Created by Kamil Burczyk on 20.03.2013.
//  Copyright (c) 2013 Kamil Burczyk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AbstractGETAPICall : NSObject

- (void) executeAPICallWithSuccessBlock:(void (^)(NSHTTPURLResponse *response, id responseObject)) blockSuccess failure:(void (^)(NSError *error, NSHTTPURLResponse *response, id responseObject)) blockFailure;

@end
