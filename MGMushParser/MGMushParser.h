//
//  Created by matt on 7/11/12.
//
#import <UIKit/UIKit.h>

//! Project version number for MGMushParser.
FOUNDATION_EXPORT double MGMushParserVersionNumber;

//! Project version string for MGMushParser.
FOUNDATION_EXPORT const unsigned char MGMushParserVersionString[];

#import <CoreText/CoreText.h>

/**
Use `MGMushParser` to create an `NSAttributedString` from an `NSString` with lightweight 
**Mush** markup.

- **Bold** is achieved with \*\*double asterisks\*\*
- _Italics_ are achieved with //double slashes//
- <u>Underlining</u> is achieved with \_\_double underscores\_\_
- `Monospacing` is achieved with \`single backticks\`
- Coloured text is achieved with {#123456|the coloured text}
- Set text background colour with {bg#123456|the text}
*/

@interface MGMushParser : NSObject

/** @name Create an NSAttributedString */

/**
* Takes an `NSString` and returns an appropriately attributed 
* `NSAttributedString`.
*
* @param mush An `NSString` containing text marked up with `Mush`
* @param font The base font to use, from which bold and italic variants will be
* derived
* @param color The text colour to use for the resulting attributed string
*/
+ (NSAttributedString *)attributedStringFromMush:(NSString *)mush
                                            font:(UIFont *)font
                                           color:(UIColor *)color;

+ (NSAttributedString *)attributedStringFromMush:(NSString *)markdown
                                            font:(UIFont *)font
                                           color:(UIColor *)color
                                  paragraphStyle:(NSParagraphStyle *)paragraphStyle;

+ (NSAttributedString *)attributedStringFromMush:(NSString *)markdown
                                            font:(UIFont *)font
                                        boldFont:(UIFont *)boldFont
                                      italicFont:(UIFont *)italicFont
                                           color:(UIColor *)color
                                  paragraphStyle:(NSParagraphStyle *)paragraphStyle;

@property (nonatomic, copy) NSString *mush;
@property (nonatomic, retain) UIFont *baseFont;
@property (nonatomic, retain) UIFont *boldFont;
@property (nonatomic, retain) UIFont *italicFont;
@property (nonatomic, retain) UIColor *baseColor;
@property (nonatomic, retain) NSParagraphStyle *paragraphStyle;
- (void)parse;
- (void)strip;
- (NSAttributedString *)attributedString;

@end
