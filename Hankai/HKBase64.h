//
//  HKBase64.h
//  Hankai
//
//  Created by 韩凯 on 3/24/14.
//  Copyright (c) 2014 Hankai. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the “Software”), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is furnished
//  to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

@import Foundation;

/**
 *  Base64 编码
 */
@interface HKBase64 : NSObject

/**
 *  将数据按 base64 编码
 *
 *  @param data 要编码的数据
 *
 *  @return 编码后的字串
 */
+ (NSString *)encode:(NSData *)data;

/**
 *  将字串按 base64 解码
 *
 *  @param string 已编码的字串
 *
 *  @return 解码后的数据
 */
+ (NSData *)decode:(NSString *)string;

@end
