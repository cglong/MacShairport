//
//  MacShairportAppDelegate.h
//  MacShairport
//
//  Created by Josh Abernathy on 4/18/11.
//  Copyright 2011 Josh Abernathy. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MSShairportServer.h"


@interface MacShairportAppDelegate : NSObject <NSApplicationDelegate, MSShairportServerDelegate>
{
@private
    NSWindow *window;
}

#if __MAC_OS_X_VERSION_MIN_REQUIRED >= 1050
@property (assign) IBOutlet NSWindow *window;
#else
- (NSWindow *)window;
- (void)setWindow:(NSWindow *)window;
#endif

@end
