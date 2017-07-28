

@class QPFlashControl;

@protocol QPFlashControlDelegate <NSObject>

@optional
- (void)flashControlWillExpand;
- (void)flashControlDidExpand;
- (void)flashControlWillCollapse;
- (void)flashControlDidCollapse;

@end

@interface QPFlashControl : UIControl

@property (nonatomic) NSInteger selectedMode;
@property (weak, nonatomic) id<QPFlashControlDelegate> delegate;

@end
