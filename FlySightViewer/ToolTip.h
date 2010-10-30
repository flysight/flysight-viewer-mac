#import <Cocoa/Cocoa.h>

@interface ToolTip : NSObject
{
	NSWindow *window;
	NSTextField *textField;
	NSDictionary *textAttributes;
}

+(void) setString: (NSString *) string forEvent: (NSEvent *) theEvent;
+(void) release;

@end
