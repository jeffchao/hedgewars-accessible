/*
 * Hedgewars-iOS, a Hedgewars port for iOS devices
 * Copyright (c) 2009-2011 Vittorio Giovara <vittorio.giovara@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * File created on 03/10/2010.
 */


#import <UIKit/UIKit.h>


@interface AmmoMenuViewController : UIViewController {
    NSArray *buttonsArray;
    NSArray *imagesArray;
    
    UILabel *nameLabel;
    UILabel *extraLabel;
    UILabel *captionLabel;

    uint8_t *delay;
    BOOL *shouldUpdateImage;
    CGPoint currentPoint;
    CGPoint placingPoint;
    BOOL isVisible;
}

@property (retain) NSArray *buttonsArray;
@property (retain) NSArray *imagesArray;
@property (nonatomic,retain) UILabel *nameLabel;
@property (nonatomic,retain) UILabel *extraLabel;
@property (nonatomic,retain) UILabel *captionLabel;
@property (assign) BOOL isVisible;

-(void) buttonPressed:(id) sender;
-(void) buttonReleased:(id) sender;
-(void) buttonCancelled:(id) sender;
-(void) appearInView:(UIView *)container;
-(void) disappear;
-(void) updateAmmoVisuals;
-(void) loadLabels;
-(void) loadAmmoStuff:(id) object;

@end
