#ifdef __cplusplus
#import "react-native-timer-jsi.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTimerJsiSpec.h"

@interface TimerJsi : NSObject <NativeTimerJsiSpec>
#else
#import <React/RCTBridgeModule.h>

@interface TimerJsi : NSObject <RCTBridgeModule>
#endif

@end
