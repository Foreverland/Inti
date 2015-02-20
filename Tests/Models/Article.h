@import Foundation;
@import CoreData;

@class Author, Tag;

@interface Article : NSManagedObject

@property (nonatomic) NSString *title;
@property (nonatomic) NSNumber *remoteID;
@property (nonatomic) NSString *localID;
@property (nonatomic) NSDate *createdDate;
@property (nonatomic) NSDate *updatedDate;
@property (nonatomic) Author *author;
@property (nonatomic) NSSet *tags;
@end

@interface Article (CoreDataGeneratedAccessors)

- (void)addTagsObject:(Tag *)value;
- (void)removeTagsObject:(Tag *)value;
- (void)addTags:(NSSet *)values;
- (void)removeTags:(NSSet *)values;

@end
