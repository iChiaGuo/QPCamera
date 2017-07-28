
#import "QPPreviewView.h"
#import "QPOverlayView.h"

@interface QPCameraView : UIView

@property (weak, nonatomic, readonly) QPPreviewView *previewView;
@property (weak, nonatomic, readonly) QPOverlayView *controlsView;

@end
