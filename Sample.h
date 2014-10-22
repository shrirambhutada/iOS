#import <UIKit/UIKit.h>

@interface myClass: my Parent <myProtocol> {
  NString *myString;  ///these are class variables
  IBOutlet UILabel *myLabel;
}

// (1)+ means class method - means instance method  
// (2)Return type //common return types are void and id(equalant to variant)
// (3)name of the method
// (4)Type of parameter if the method takes parameter
// (5)name of the parameter
// (6)if the method take another parameter "anotherParameter"

//(1) (2)       (3)             (4)     (5)
  +(NSString) myClassMethod: (NSString)aString;  

//                                            (6)              (4)  (5)
  -(NSDate)myInstanceMethod:(NString)aString anotherParameter:(NSur)aURL;

// (7) & (8) these are property attributes - strong means strong reference - weak mean weak reference (ex:IServerObjectHelper) to avoid circular reference
// (8) nonatomic is for multithread abd atomic if for single thread only (thread safe)
//other common attributes readwrite, readonly, copy
//           (7)      (8)
@property (strong, nonatomic) NString *myString;

// (9) End of the interface
@end
