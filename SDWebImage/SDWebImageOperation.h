/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

//协议
#import <Foundation/Foundation.h>

@protocol SDWebImageOperation <NSObject>

//取消operation
- (void)cancel;

@end
