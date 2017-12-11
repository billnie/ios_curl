//
//  curl.hpp
//  curl_Example
//
//  Created by zzx on 2017/12/11.
//  Copyright © 2017年 billnie. All rights reserved.
//

#ifndef curl_hpp
#define curl_hpp

#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <curl/curl.h>
#include <pthread.h>
#include <string>
using namespace  std;
#ifdef __cplusplus
extern "C"
{
#endif
int curl_get(const char *url, string &resp);
int curl_post(void);

#ifdef __cplusplus
}
#endif
#endif /* curl_hpp */
