//
//  AstroDroid.h
//  Kapitel2
//
//  Created by Rodewig Klaus on 12.07.12.
//  Copyright (c) 2012 Klaus M. Rodewig. All rights reserved.
//

#import "Droid.h"

@interface AstroDroid : Droid
@property(copy) NSString *droidID;
-(id)initWithID:(NSNumber *)id;
-(void)sayName;
@end
