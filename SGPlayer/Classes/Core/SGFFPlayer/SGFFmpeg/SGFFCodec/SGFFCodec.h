//
//  SGFFCodec.h
//  SGPlayer
//
//  Created by Single on 2018/1/16.
//  Copyright © 2018年 single. All rights reserved.
//

#ifndef SGFFCodec_h
#define SGFFCodec_h


#import <Foundation/Foundation.h>
#import "avformat.h"


@protocol SGFFCodec <NSObject>

- (void)putPacket:(AVPacket)packet;
- (void)close;

@end


#endif /* SGFFCodec_h */
