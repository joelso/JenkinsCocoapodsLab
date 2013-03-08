#import "JenkinsCocoapodsLabIncrementalStore.h"
#import "JenkinsCocoapodsLabAPIClient.h"

@implementation JenkinsCocoapodsLabIncrementalStore

+ (void)initialize {
    [NSPersistentStoreCoordinator registerStoreClass:self forStoreType:[self type]];
}

+ (NSString *)type {
    return NSStringFromClass(self);
}

+ (NSManagedObjectModel *)model {
    return [[NSManagedObjectModel alloc] initWithContentsOfURL:[[NSBundle mainBundle] URLForResource:@"JenkinsCocoapodsLab" withExtension:@"xcdatamodeld"]];
}

- (id <AFIncrementalStoreHTTPClient>)HTTPClient {
    return [JenkinsCocoapodsLabAPIClient sharedClient];
}

@end