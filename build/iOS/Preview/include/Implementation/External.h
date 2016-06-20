#pragma once
#include <JavaScriptCore/JavaScriptCore.h>
#include <uObjC.Foreign.h>

@protocol External <JSExport>
@end

@interface ExternalUnoObject : NSObject<External>
@property (strong) id<UnoObject> object;
- (id)initWithObject:(id<UnoObject>)obj NS_DESIGNATED_INITIALIZER;
- (id)init;
@end
