

#import "QPCameraView.h"

@interface QPCameraView ()

@property (weak, nonatomic) IBOutlet QPPreviewView *previewView;
@property (weak, nonatomic) IBOutlet QPOverlayView *controlsView;

@end

@implementation QPCameraView

- (void)awakeFromNib {
    [super awakeFromNib];
    self.backgroundColor = [UIColor blackColor];
}

@end
