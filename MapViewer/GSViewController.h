//
//  GSViewController.h
//  MapViewer
//
//  Created by Simon Whitaker on 16/01/2013.
//  Copyright (c) 2013 Goo Software Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface GSViewController : UIViewController

@property (nonatomic, weak) IBOutlet MKMapView *mapView;

@end
