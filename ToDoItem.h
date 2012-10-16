#import <Cocoa/Cocoa.h>

@interface ToDoItem : NSObject {
	
	NSString *package;
	NSString *time;
	NSNumber *progress;	
	NSString *status;
}

@property (retain) NSString *package;
@property (retain) NSString *time;
@property (retain) NSNumber *progress;
@property (retain) NSString *status;


@end