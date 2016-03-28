//
//  MAKRSampleAnnotation.h
//  MapKit Callout-Views

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface MAKRSampleAnnotation : NSObject <MKAnnotation>

- (void)setTitle:(NSString *)title;
- (void)setSubtitle:(NSString *)subtitle;

@end
