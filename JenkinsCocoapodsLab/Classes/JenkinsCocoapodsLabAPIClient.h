#import "AFIncrementalStore.h"
#import "AFRestClient.h"

@interface JenkinsCocoapodsLabAPIClient : AFRESTClient <AFIncrementalStoreHTTPClient>

+ (JenkinsCocoapodsLabAPIClient *)sharedClient;

@end
