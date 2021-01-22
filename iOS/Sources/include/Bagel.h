//
// Copyright (c) 2018 Bagel (https://github.com/yagiz/Bagel)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

#if SWIFT_PACKAGE
#import "BagelBaseModel.h"
#import "BagelCarrierDelegate.h"
#import "BagelConfiguration.h"
#import "BagelDeviceModel.h"
#import "BagelProjectModel.h"
#import "BagelUtility.h"
#else
#import <Bagel/BagelBaseModel.h>
#import <Bagel/BagelCarrierDelegate.h>
#import <Bagel/BagelConfiguration.h>
#import <Bagel/BagelDeviceModel.h>
#import <Bagel/BagelProjectModel.h>
#import <Bagel/BagelUtility.h>
#endif

@interface Bagel : NSObject

@property (nonatomic, strong) BagelConfiguration* configuration;

- (instancetype)init NS_UNAVAILABLE;

+ (void)start;
+ (void)start:(BagelConfiguration*)configuration;

@end
