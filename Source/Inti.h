@import Foundation;
@import CoreData;

@interface Inti : NSObject

- (void)fetchItemsFromEntity:(NSString *)entityName completion:(void (^)(NSError *error))completion;

- (void)saveObject:(NSManagedObject *)object completion:(void (^)(NSManagedObject *insertedObject, NSError *error))completion;

- (void)updateObject:(NSManagedObject *)object completion:(void (^)(NSManagedObject *updatedObject, NSError *error))completion;

- (void)deleteObject:(NSManagedObject *)object completion:(void (^)(NSError *error))completion;

@end
