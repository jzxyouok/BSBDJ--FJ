//
//  FJRecommendTag.h
//  百思不得姐
//
//  Created by  高帆 on 16/5/9.
//  Copyright © 2016年  高帆. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FJRecommendTag : NSObject

/**
 *  图片
 */
@property (nonatomic, copy) NSString *image_list;
/**
 *  名字
 */
@property (nonatomic, copy) NSString *theme_name;
/**
 *  订阅数
 */
@property (nonatomic, assign) NSInteger sub_number;

@end
