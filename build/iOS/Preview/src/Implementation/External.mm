#include <Implementation/External.h>

@implementation ExternalUnoObject

- (id)initWithObject:(id<UnoObject>)obj
{
	self = [super init];
	if (self)
	{
		self.object = obj;
	}
	return self;
}

- (id)init
{
	return [self initWithObject: nil];
}

@end
