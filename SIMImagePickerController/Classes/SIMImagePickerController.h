//
//  SIMImagePickerController.h
//  Pods
//
//  Created by Ferris on 2016/12/19.
//
//  https://github.com/XFerris/SIMImagePickerController

#import <UIKit/UIKit.h>

@interface SIMImagePickerController : UIImagePickerController
/**
 *	The block that fires after the receiver finished picking up an image
 */
@property (nonatomic, copy) void(^sim_didFinishPickingImageBlock)(SIMImagePickerController *, NSDictionary<NSString*,id> *);

/**
 *	The block that fires after the user cancels out of picker
 */
@property (nonatomic, copy) void(^sim_didCancelBlock)(SIMImagePickerController *);
/**
 *  The doneButton in the right of the navigation bar, default is "Done".
 */
@property (nonatomic, strong) UIBarButtonItem* doneButton;
/**
 *  quick way to init an SIMImagePickerController
 */
+(instancetype)imagePickerWithSourceType:(UIImagePickerControllerSourceType)type doneButtonTitle:(NSString*)title completionHandler:(void(^)(UIImage *image))handler;
/**
 * quick way to present an SIMImagePickerController
 */
+(instancetype)showImagePickerWithSourceType:(UIImagePickerControllerSourceType)type doneButtonTitle:(NSString*)title completionHandler:(void(^)(UIImage *image))handler;
@end
