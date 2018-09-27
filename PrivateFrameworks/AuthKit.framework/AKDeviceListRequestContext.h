/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKDeviceListRequestContext : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    bool  _includeFamilyDevices;
    bool  _includeUntrustedDevices;
    NSArray * _operatingSystems;
    NSArray * _services;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic) bool includeFamilyDevices;
@property (nonatomic) bool includeUntrustedDevices;
@property (nonatomic, copy) NSArray *operatingSystems;
@property (nonatomic, copy) NSArray *services;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeFamilyDevices;
- (bool)includeUntrustedDevices;
- (id)initWithCoder:(id)arg1;
- (id)operatingSystems;
- (id)services;
- (void)setAltDSID:(id)arg1;
- (void)setIncludeFamilyDevices:(bool)arg1;
- (void)setIncludeUntrustedDevices:(bool)arg1;
- (void)setOperatingSystems:(id)arg1;
- (void)setServices:(id)arg1;

@end