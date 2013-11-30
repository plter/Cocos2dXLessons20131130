//
//  ViewController.m
//  D01L12HelloOC
//
//  Created by plter on 13-11-30.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#import "ViewController.h"
#import "Hello.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    Hello * h = [[Hello alloc] init];
    [h sayHello];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
