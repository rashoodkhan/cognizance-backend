//
//  GTCommit.h
//  ObjectiveGitFramework
//
//  Created by Timothy Clem on 2/22/11.
//
//  The MIT License
//
//  Copyright (c) 2011 Tim Clem
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//


#import "GTObject.h"

@class GTSignature;
@class GTTree;
@class GTOID;

NS_ASSUME_NONNULL_BEGIN

@interface GTCommit : GTObject {}

@property (nonatomic, readonly, strong, nullable) GTSignature *author;
@property (nonatomic, readonly, strong, nullable) GTSignature *committer;
@property (nonatomic, readonly, copy) NSArray<GTCommit *> *parents;
@property (nonatomic, readonly, nullable) NSString *message;
@property (nonatomic, readonly) NSString *messageDetails;
@property (nonatomic, readonly) NSString *messageSummary;
@property (nonatomic, readonly) NSDate *commitDate;
@property (nonatomic, readonly) NSTimeZone *commitTimeZone;
@property (nonatomic, readonly, nullable) GTTree *tree;

/// Is this a merge commit?
@property (nonatomic, readonly, assign, getter = isMerge) BOOL merge;

/// The underlying `git_object` as a `git_commit` object.
- (git_commit *)git_commit __attribute__((objc_returns_inner_pointer));

@end

NS_ASSUME_NONNULL_END
