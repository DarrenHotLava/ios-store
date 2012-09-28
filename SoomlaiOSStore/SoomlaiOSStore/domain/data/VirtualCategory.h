/*
 * Copyright (C) 2012 Soomla Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

/**
 * This class is a definition of a category. A single category can be associated with many virtual items.
 * The purposes of virtual category are:
 * 1. You can use it to arrange virtual items to their specific categories.
 * 2. SOOMLA's storefront uses this to show the items in their categories on the UI (for supported themes only).
 */
@interface VirtualCategory : NSObject{
    NSString* name;
    int       Id;
}

@property (retain, nonatomic) NSString* name;
@property int Id;

/**
* oName is the category's name.
* oId is the category's unique id.
*/
- (id)initWithName:(NSString*)oName andId:(int)oId;
- (id)initWithDictionary:(NSDictionary*)dict;
- (NSDictionary*)toDictionary;

@end
