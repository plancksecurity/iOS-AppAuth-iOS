/*! @file AppAuthForExtensions.h
 @brief AppAuth iOS SDK
 @copyright
 Copyright 2015 Google Inc. All Rights Reserved.
 @copydetails
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <Foundation/Foundation.h>

//! Project version number for AppAuthFramework-iOS.
FOUNDATION_EXPORT double AppAuthVersionNumber;

//! Project version string for AppAuthFramework-iOS.
FOUNDATION_EXPORT const unsigned char AppAuthVersionString[];

#import <AppAuthForExtensions/OIDAuthState.h>
#import <AppAuthForExtensions/OIDAuthStateChangeDelegate.h>
#import <AppAuthForExtensions/OIDAuthStateErrorDelegate.h>
#import <AppAuthForExtensions/OIDAuthorizationFlowSession.h>
#import <AppAuthForExtensions/OIDAuthorizationRequest.h>
#import <AppAuthForExtensions/OIDAuthorizationResponse.h>
#import <AppAuthForExtensions/OIDAuthorizationService.h>
#import <AppAuthForExtensions/OIDError.h>
#import <AppAuthForExtensions/OIDErrorUtilities.h>
#import <AppAuthForExtensions/OIDExternalUserAgent.h>
#import <AppAuthForExtensions/OIDExternalUserAgentRequest.h>
#import <AppAuthForExtensions/OIDExternalUserAgentSession.h>
#import <AppAuthForExtensions/OIDGrantTypes.h>
#import <AppAuthForExtensions/OIDIDToken.h>
#import <AppAuthForExtensions/OIDRegistrationRequest.h>
#import <AppAuthForExtensions/OIDRegistrationResponse.h>
#import <AppAuthForExtensions/OIDResponseTypes.h>
#import <AppAuthForExtensions/OIDScopes.h>
#import <AppAuthForExtensions/OIDScopeUtilities.h>
#import <AppAuthForExtensions/OIDServiceConfiguration.h>
#import <AppAuthForExtensions/OIDServiceDiscovery.h>
#import <AppAuthForExtensions/OIDTokenRequest.h>
#import <AppAuthForExtensions/OIDTokenResponse.h>
#import <AppAuthForExtensions/OIDTokenUtilities.h>
#import <AppAuthForExtensions/OIDURLSessionProvider.h>

#if TARGET_OS_TV
#elif TARGET_OS_WATCH
#elif TARGET_OS_IOS
#import <AppAuthForExtensions/OIDAuthState+IOS.h>
#import <AppAuthForExtensions/OIDAuthorizationService+IOS.h>
#import <AppAuthForExtensions/OIDExternalUserAgentIOS.h>
#import <AppAuthForExtensions/OIDExternalUserAgentIOSCustomBrowser.h>
#elif TARGET_OS_MAC
#import <AppAuthForExtensions/OIDAuthState+Mac.h>
#import <AppAuthForExtensions/OIDAuthorizationService+Mac.h>
#import <AppAuthForExtensions/OIDExternalUserAgentMac.h>
#import <AppAuthForExtensions/OIDRedirectHTTPHandler.h>
#else
#error "Platform Undefined"
#endif

