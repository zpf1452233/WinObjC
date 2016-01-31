//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************
#pragma once

#import <QuickLook/QuickLookExport.h>
#import <CoreGraphics/CGGeometry.h>

@class QLPreviewController;
@class UIView;
@class UIImage;
@class NSURL;

@protocol QLPreviewItem;

@protocol QLPreviewControllerDelegate
@optional
- (CGRect)previewController:(QLPreviewController*)controller
        frameForPreviewItem:(id<QLPreviewItem>)item
               inSourceView:(UIView* _Nullable*)view;
- (UIImage*)previewController:(QLPreviewController*)controller
transitionImageForPreviewItem:(id<QLPreviewItem>)item
                  contentRect:(CGRect*)contentRect;
- (void)previewControllerWillDismiss:(QLPreviewController*)controller;
- (void)previewControllerDidDismiss:(QLPreviewController*)controller;
- (BOOL)previewController:(QLPreviewController*)controller shouldOpenURL:(NSURL*)url forPreviewItem:(id<QLPreviewItem>)item;

@end