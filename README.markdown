## MGMushParser

Create an `NSAttributedString` from an `NSString` with lightweight **Mush** markup.

- **Bold** is achieved with \*\*double asterisks\*\*
- _Italics_ are achieved with //double slashes//
- <u>Underlining</u> is achieved with \_\_double underscores\_\_
- `Monospacing` is achieved with \`single backticks\`
- Coloured text is achieved with {#123456|the coloured text}
- Set text background colour with {bg#123456|the text}

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
