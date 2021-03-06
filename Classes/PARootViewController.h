/*-
 * Copyright (c) 2011, Benedikt Meurer <benedikt.meurer@googlemail.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#import <MessageUI/MessageUI.h>

#import "PAInfoViewController.h"


@class PAController;


@interface PARootViewController : UIViewController <MFMailComposeViewControllerDelegate, PAInfoViewControllerDelegate, UIAlertViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>

///----------------
/// @name IBOutlets
///----------------
@property (nonatomic, retain) IBOutlet PAController *controller;
@property (nonatomic, retain) IBOutlet UIView *imageContainerView;
@property (nonatomic, retain) IBOutlet UIImageView *imageView;
@property (nonatomic, retain) IBOutlet UIActivityIndicatorView *imageActivityIndicatorView;
@property (nonatomic, retain) IBOutlet UIView *stateContainerView;
@property (nonatomic, retain) IBOutlet UILabel *choosePhotoLabel;
@property (nonatomic, retain) IBOutlet UIView *downloadPhotoView;
@property (nonatomic, retain) IBOutlet UILabel *downloadPhotoLabel;
@property (nonatomic, retain) IBOutlet UIView *noNetworkView;
@property (nonatomic, retain) IBOutlet UIView *warningView;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *photoLibraryButtonItem;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *cameraButtonItem;

///----------------
/// @name IBActions
///----------------
- (IBAction)presentImagePickerControllerForSender:(id)sender;
- (IBAction)infoButtonItemDidActivate:(id)sender;
- (IBAction)downloadPhotoViewDidActivate:(id)sender;

@end

