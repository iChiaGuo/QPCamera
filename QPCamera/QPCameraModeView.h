

typedef NS_ENUM(NSUInteger, QPCameraMode) {
	QPCameraModePhoto = 0, // default
	QPCameraModeVideo = 1
};

@interface QPCameraModeView : UIControl

@property (nonatomic) QPCameraMode cameraMode;

@end
