
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Sat, 04 Mar 2023 04:31:53 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorColorColorsSemiRed,
ColorColorColorsMultipleFills0,
ColorColorColorsMultipleFills1,
ColorColorColorsSingleBlue,
ColorColorColorsRefBlue,
ColorColorColorsEmpty,
ColorColorColorsSpecialCharacters,
ColorColorColorsSpecialCharactersNderung
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
