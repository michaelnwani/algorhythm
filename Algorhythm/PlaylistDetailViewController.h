//
//  PlaylistDetailViewController.h
//  Algorhythm
//
//  Created by Michael Nwani on 8/10/15.
//  Copyright (c) 2015 Team Treehouse. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Playlist;

@interface PlaylistDetailViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *playlistTitle;
@property (weak, nonatomic) IBOutlet UILabel *playlistDescription;

@property (strong, nonatomic) Playlist *playlist;
@property (weak, nonatomic) IBOutlet UIImageView *playlistCoverImage;

@property (weak, nonatomic) IBOutlet UILabel *playlistArtist0;


@property (weak, nonatomic) IBOutlet UILabel *playlistArtist1;


@property (weak, nonatomic) IBOutlet UILabel *playlistArtist2;


@end
