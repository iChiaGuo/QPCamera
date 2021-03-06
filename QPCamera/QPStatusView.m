

#import "QPStatusView.h"
#import <AVFoundation/AVFoundation.h>
#import "UIView+QPAdditions.h"

@implementation QPStatusView

- (id)initWithFrame:(CGRect)frame {
	self = [super initWithFrame:frame];
	if (self) {
		[self setupView];
	}
	return self;
}

- (void)awakeFromNib {
    [super awakeFromNib];
	[self setupView];
}

- (void)setupView {
	self.flashControl.delegate = self;
}

- (void)flashControlWillExpand {
	[UIView animateWithDuration:0.2f animations:^{
		self.elapsedTimeLabel.alpha = 0.0f;
	}];
}

- (void)flashControlDidCollapse {
	[UIView animateWithDuration:0.1f animations:^{
		self.elapsedTimeLabel.alpha = 1.0f;
	}];
}

@end
