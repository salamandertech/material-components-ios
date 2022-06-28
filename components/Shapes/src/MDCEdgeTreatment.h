// Copyright 2017-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <UIKit/UIKit.h>

API_DEPRECATED_BEGIN("Use layer.cornerRadius to achieve rounded corners.",
                     ios(12, API_TO_BE_DEPRECATED))

@class MDCPathGenerator;

/**
 MDCEdgeTreatment is a factory for creating MDCPathGenerators that represent the
 path of a edge.

 MDCEdgeTreaments only generate in the top quadrant (i.e. the top edge of a
 rectangle). MDCShapeModel will transform the generated MDCPathGenerator to the
 expected position and rotation.
 */
@interface MDCEdgeTreatment : NSObject <NSCopying>

- (nonnull instancetype)init NS_DESIGNATED_INITIALIZER;

/**
 Generates an MDCPathGenerator object for an edge with the provided length.

 @param length The length of the edge.
 */
- (nonnull MDCPathGenerator *)pathGeneratorForEdgeWithLength:(CGFloat)length;

@end

API_DEPRECATED_END
