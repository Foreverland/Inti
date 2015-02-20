@import Foundation;
@import CoreData;

@interface Tag : NSManagedObject

@property (nonatomic) NSString *name;
@property (nonatomic) NSString *localID;
@property (nonatomic) NSNumber *remoteID;
@property (nonatomic) NSSet *articles;
@end

@interface Tag (CoreDataGeneratedAccessors)

- (void)addArticlesObject:(NSManagedObject *)value;
- (void)removeArticlesObject:(NSManagedObject *)value;
- (void)addArticles:(NSSet *)values;
- (void)removeArticles:(NSSet *)values;

@end
