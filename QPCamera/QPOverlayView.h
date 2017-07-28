

#import <UIKit/UIKit.h>
#import "QPCameraModeView.h"
#import "QPStatusView.h"

@interface QPOverlayView : UIView

@property (weak, nonatomic) IBOutlet QPCameraModeView *modeView;
@property (weak, nonatomic) IBOutlet QPStatusView *statusView;

@property (nonatomic) BOOL flashControlHidden;

@end
