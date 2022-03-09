//
//  Steamworks.h
//  
//
//  Created by Marc-Aurel Zent on 08.03.22.
//

#ifndef Header_h
#define Header_h
#import <Foundation/Foundation.h>

@interface Steamworks : NSObject
@property (readonly, copy) NSData *authSessionTicket;
@property (readonly) uint32 serverRealTime;
@end

#endif /* Header_h */
