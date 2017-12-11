//
//  curlViewController.m
//  curl
//
//  Created by billnie on 12/11/2017.
//  Copyright (c) 2017 billnie. All rights reserved.
//

#import "curlViewController.h"
#include <curl/curl.hpp>
@interface curlViewController ()

@end

@implementation curlViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    string s;
    curl_get("https://raw.githubusercontent.com/billnie/billnie.github.io/master/feed.xml",s);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
