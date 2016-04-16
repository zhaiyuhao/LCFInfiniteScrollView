//
//  LCFInfiniteScrollView.h
//  LCFInfiniteScrollView
//
//  Created by leichunfeng on 16/4/16.
//  Copyright © 2016年 leichunfeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LCFInfiniteScrollView;

@interface LCFInfiniteScrollViewItem : NSObject

@property (nonatomic, copy, readonly) NSString *imageURL;
@property (nonatomic, copy, readonly) NSString *imageText;

- (instancetype)initWithImageURL:(NSString *)imageURL imageText:(NSString *)imageText;

@end

@protocol LCFInfiniteScrollViewDelegate <NSObject>

@end

@interface LCFInfiniteScrollView : UIView

@property (nonatomic, copy) NSArray<LCFInfiniteScrollViewItem *> *items;
@property (nonatomic, weak) id<LCFInfiniteScrollViewDelegate> delegate;

@property (nonatomic, assign) CGSize itemSize;
@property (nonatomic, assign) CGFloat itemSpacing;

@end
