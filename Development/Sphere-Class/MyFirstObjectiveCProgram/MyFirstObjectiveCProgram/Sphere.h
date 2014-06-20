//
//  Sphere.h
//  MyFirstObjectiveCProgram
//
//  Created by Nina Baculinao on 6/17/14.
//  Copyright (c) 2014 treehouse. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Sphere : NSObject {
    
    NSArray *_center;
    float _radius;
}

-(void)setRadius:(float)radius; // setter for radius
-(float)radius; // getter for radius

-(void)setCenter:(NSArray *)center;
-(NSArray *)center;

-(void)setCenter:(NSArray *)center radius:(float) radius;

@end


