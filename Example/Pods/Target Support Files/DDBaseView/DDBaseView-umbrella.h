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

#import "FirstViewController.h"
#import "FirstViewModel.h"
#import "FirstView.h"

FOUNDATION_EXPORT double DDBaseViewVersionNumber;
FOUNDATION_EXPORT const unsigned char DDBaseViewVersionString[];

