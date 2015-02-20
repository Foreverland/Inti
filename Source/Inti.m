#import "Inti.h"

@implementation Inti

- (void)fetchItemsFromEntity:(NSString *)entityName completion:(void (^)(NSError *error))completion
{
    if (completion) {
        completion(nil);
    }
}

- (void)saveObject:(NSManagedObject *)object completion:(void (^)(NSManagedObject *insertedObject, NSError *error))completion
{
    if (completion) {
        completion(nil, nil);
    }
}

- (void)updateObject:(NSManagedObject *)object completion:(void (^)(NSManagedObject *updatedObject, NSError *error))completion
{
    if (completion) {
        completion(nil, nil);
    }
}

- (void)deleteObject:(NSManagedObject *)object completion:(void (^)(NSError *error))completion
{
    if (completion) {
        completion(nil);
    }
}


@end
