//
//  ViewController.h
//  Alcolator
//
//  Created by DAD on 5/1/15.
//  Copyright (c) 2015 Mark Carpenter. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;


- (void)buttonPressed:(UIButton *)sender;


@end

