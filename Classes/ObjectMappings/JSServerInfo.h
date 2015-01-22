/*
 * Jaspersoft Mobile SDK
 * Copyright (C) 2011 - 2014 Jaspersoft Corporation. All rights reserved.
 * http://community.jaspersoft.com/project/mobile-sdk-ios
 * 
 * Unless you have purchased a commercial license agreement from Jaspersoft,
 * the following license terms apply:
 * 
 * This program is part of Jaspersoft Mobile SDK for iOS.
 * 
 * Jaspersoft Mobile SDK is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Jaspersoft Mobile SDK is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with Jaspersoft Mobile SDK for iOS. If not, see 
 * <http://www.gnu.org/licenses/lgpl>.
 */

//
//  JSServerInfo.h
//  Jaspersoft Corporation
//

#import <Foundation/Foundation.h>

/**
 @author Vlad Zavadskii vzavadskii@jaspersoft.com
 @author Alexey Gubarev ogubarie@tibco.com
 @since 1.4
 */
@interface JSServerInfo : NSObject

@property (nonatomic, retain) NSString *build;
@property (nonatomic, retain) NSString *edition;
@property (nonatomic, retain) NSString *editionName;
@property (nonatomic, retain) NSString *expiration;
@property (nonatomic, retain) NSString *features;
@property (nonatomic, retain) NSString *licenseType;
@property (nonatomic, retain) NSString *version;
@property (nonatomic, retain) NSString *dateFormatPattern;
@property (nonatomic, retain) NSString *datetimeFormatPattern;

- (float)versionAsFloat;

@end
