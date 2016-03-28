//
//  MAKRViewController.h
//  MapKit Callout-Views
// Created by Gamex.

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface MAKRViewController : UIViewController <MKMapViewDelegate>

@property(nonatomic,strong) IBOutlet MKMapView *mapView;

@end
