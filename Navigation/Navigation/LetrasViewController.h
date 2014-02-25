//
//  LetrasViewController.h
//  Navigation
//
//  Created by Marcus Vinicius Seixas on 25/02/14.
//  Copyright (c) 2014 Vinicius Miana. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Palavra;

@interface LetrasViewController : UIViewController

@property (nonatomic, strong) UIImageView *myImage;
@property (nonatomic, strong) Palavra *palavra;

-(id) initWithPalavra:(Palavra *)palavra;

@end