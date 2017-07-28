

#import "QPFlashControl.h"

@interface QPStatusView : UIView <QPFlashControlDelegate>

@property (weak, nonatomic) IBOutlet QPFlashControl *flashControl;
@property (weak, nonatomic) IBOutlet UILabel *elapsedTimeLabel;
@end
