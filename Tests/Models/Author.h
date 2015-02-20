@import Foundation;
@import CoreData;

@interface Author : NSManagedObject

@property (nonatomic) NSString *firstName;
@property (nonatomic) NSString *lastName;
@property (nonatomic) NSNumber *remoteID;
@property (nonatomic) NSString *localID;
@property (nonatomic) NSSet *articles;
@end

@interface Author (CoreDataGeneratedAccessors)

- (void)addArticlesObject:(NSManagedObject *)value;
- (void)removeArticlesObject:(NSManagedObject *)value;
- (void)addArticles:(NSSet *)values;
- (void)removeArticles:(NSSet *)values;

@end
