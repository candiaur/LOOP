#import <UIKit/UIKit.h>
#import "UIResponder+FirstResponder.h"

static id currentFirstResponder;

@implementation UIResponder (FirstResponder)

+(id)currentFirstResponder {
	[[UIApplication sharedApplication] sendAction:@selector(findFirstResponder:) to:nil from:nil forEvent:nil];
	id result = currentFirstResponder;
	currentFirstResponder = nil;
	return result;
}

-(void)findFirstResponder:(id)sender {
	currentFirstResponder = self;
}

@end
