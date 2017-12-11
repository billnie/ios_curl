#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "curl.h"
#import "curl.hpp"
#import "curlbuild.h"
#import "curlrules.h"
#import "curlver.h"
#import "easy.h"
#import "mprintf.h"
#import "multi.h"
#import "stdcheaders.h"
#import "typecheck-gcc.h"

FOUNDATION_EXPORT double curlVersionNumber;
FOUNDATION_EXPORT const unsigned char curlVersionString[];

