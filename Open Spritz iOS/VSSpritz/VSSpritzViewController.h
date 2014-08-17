//
//  VSSpritzLabelController.h
//  FastRead
//
//  Created by Vivek Seth on 8/6/14.
//  Copyright (c) 2014 Vivek Seth. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VSSpritzView.h"

@class VSSpritzViewController;

@interface VSSpritzViewController : NSObject

@property (nonatomic) BOOL isStarted;
@property (nonatomic) NSInteger wordsPerMinute;
@property (nonatomic) NSInteger currentWordIndex;

@property (nonatomic, strong) UIView<VSSpritzView> *spritzView;
@property (nonatomic, readonly) NSInteger totalWordCount;

- (instancetype)initWithBodyText:(NSString *)bodyText;

- (void)start;
- (void)startWithoutAnimation;
- (void)stop;

- (void)displayWordWithIndex:(NSInteger)wordIndex;

@end
