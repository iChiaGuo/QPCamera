
typedef NS_ENUM(NSUInteger, QPCaptureButtonMode) {
	QPCaptureButtonModePhoto = 0, // default
	QPCaptureButtonModeVideo = 1
};

@interface QPCaptureButton : UIButton

+ (instancetype)captureButton;
+ (instancetype)captureButtonWithMode:(QPCaptureButtonMode)captureButtonMode;

@property (nonatomic) QPCaptureButtonMode captureButtonMode;


@end

