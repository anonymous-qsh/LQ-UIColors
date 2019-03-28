//
//  LQViewController.m
//  LQUIColor
//
//  Created by Little Queue on 03/28/2019.
//  Copyright (c) 2019 Little Queue. All rights reserved.
//

#import "LQViewController.h"

@interface LQViewController ()

@end

@implementation LQViewController

- (void)viewDidLoad {
  [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
  
  // color with hex
  UIView *hexStringColorView = [[UIView alloc] initWithFrame:CGRectMake(0, 100, 100, 100)];
  hexStringColorView.backgroundColor = [UIColor colorWithHexString:@"FF0000"];
  [self.view addSubview:hexStringColorView];
  
  // color with string: #00FF00
  UIView *stringColorView = [[UIView alloc] initWithFrame:CGRectMake(100, 100, 100, 100)];
  stringColorView.backgroundColor = [UIColor stringToColor: @"#00FF00"];
  [self.view addSubview:stringColorView];
  
}

- (void)didReceiveMemoryWarning {
  [super didReceiveMemoryWarning];
  // Dispose of any resources that can be recreated.
}

@end
