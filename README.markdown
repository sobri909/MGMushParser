## MGMushParser

Create an `NSAttributedString` from an `NSString` with lightweight **Mush** markup.

- **Bold** is achieved with \*\*double asterisks\*\*
- _Italics_ are achieved with //double slashes//
- <u>Underlining</u> is achieved with \_\_double underscores\_\_
- `Monospacing` is achieved with \`single backticks\`
- ~~Strikethrough~~ is achieved with \~~double tildes\~~
- Coloured text is achieved with {#123456|the coloured text}
- Set text background colour with {bg#123456|the text}
- Adjust kerning with {k4.5|the more widely spaced text}
- Change font with {font:HelveticaNeue,12pt|text in a different font}

### CocoaPods Setup

```
pod 'MGMushParser'
```

### Example

```objc
NSString *mush = @"this string has **bold**, //italics//, and {#ff0000|red text}";

NSAttributedString *result = [MGMushParser attributedStringFromMush:mush
        font:[UIFont fontWithName:@"Helvetica" size:14] color:UIColor.blackColor];
```
