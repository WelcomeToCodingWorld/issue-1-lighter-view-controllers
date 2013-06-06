//
//  PhotoCell.h
//  objc.io example project (edition #1)
//

#import <Foundation/Foundation.h>


@interface PhotoCell : UITableViewCell

+ (UINib *)nib;

@property (weak, nonatomic) IBOutlet UILabel *photoTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *photoDateLabel;

@end