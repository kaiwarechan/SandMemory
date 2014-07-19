//
//  ViewController.h
//  SandMemory
//
//  Created by 梶原 一葉 on 7/17/14.
//  Copyright (c) 2014 梶原 一葉. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    
    IBOutlet UIImageView *mainImageView;
    IBOutlet UIImageView *currentImageView;
    
    UIImage *reizedImage;
    
    NSMutableArray *averageRGBArray;
    
    NSMutableArray *views;
    
}

@end
