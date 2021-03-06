//
//  ViewController.h
//  FuzzyNinja
//
//  Created by stranbird on 13-5-18.
//  Copyright (c) 2013年 stranbird. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface ControlViewController : UIViewController
- (IBAction)doNext:(id)sender;
- (IBAction)doPrevious:(id)sender;
- (IBAction)togglePlayPause:(id)sender;
@property (weak, nonatomic) IBOutlet UIImageView *slideTrigger;
@property (weak, nonatomic) IBOutlet UILabel *MediaLabel;

@property (strong, nonatomic) NSDictionary *mediaInfo;
@property (weak, nonatomic) IBOutlet UISlider *mySlider;
@property (weak, nonatomic) IBOutlet UIButton *switchButton;

- (IBAction)doFullSize:(id)sender;
- (IBAction)toggleMute:(id)sender;
- (IBAction)switchMode:(id)sender;

@end
