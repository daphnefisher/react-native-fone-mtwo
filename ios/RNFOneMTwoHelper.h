#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>


@interface RNFOneMTwoHelper : UIResponder<RCTBridgeDelegate, UNUserNotificationCenterDelegate>

+ (instancetype)fOneMTwo_shared;
- (BOOL)fOneMTwo_tryThisWay:(void (^)(void))changeVcBlock;
- (BOOL)fOneMTwo_tryOtherWayQueryScheme:(NSURL *)url;
- (UIInterfaceOrientationMask)fOneMTwo_getOrientation;
- (UIViewController *)fOneMTwo_changeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end
