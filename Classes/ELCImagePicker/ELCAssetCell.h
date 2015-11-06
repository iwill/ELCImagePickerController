//
//  AssetCell.h
//
//  Created by ELC on 2/15/11.
//  Copyright 2011 ELC Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>

#define ELC_imagesPerLine   4
#define ELC_imageMargin     4.0
#define ELC_imageSizeForWidth(viewWidth) ({ \
    (viewWidth - (ELC_imagesPerLine + 1) * ELC_imageMargin) / ELC_imagesPerLine; \
})

@interface ELCAssetCell : UITableViewCell

- (void)setAssets:(NSArray *)assets;

@end
