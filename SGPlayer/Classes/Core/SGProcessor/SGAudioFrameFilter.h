//
//  SGAudioFrameFilter.h
//  SGPlayer iOS
//
//  Created by Single on 2018/10/30.
//  Copyright © 2018 single. All rights reserved.
//

#import "SGFrameFilter.h"

@interface SGAudioFrameFilter : SGFrameFilter

/**
 *  AVSampleFormat
 */
@property (nonatomic) SInt32 format;

/**
 *
 */
@property (nonatomic) SInt32 sampleRate;

/**
 *
 */
@property (nonatomic) SInt32 numberOfChannels;

/**
 *
 */
@property (nonatomic) UInt64 channelLayout;

@end
