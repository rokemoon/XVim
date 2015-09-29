//
//  XVimSourceCodeEditor.h
//  XVim
//
//  Created by Tomas Lundell on 31/03/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IDESourceEditor.h"

@interface IDESourceCodeEditor(XVim)
+ (void)xvim_initialize;
- (NSArray*) xvim_textView:(NSTextView *)textView willChangeSelectionFromCharacterRanges:(NSArray *)oldSelectedCharRanges toCharacterRanges:(NSArray *)newSelectedCharRanges;
- (id)xvim_initWithNibName:(NSString*)arg1 bundle:(NSBundle*)arg2 document:(IDEEditorDocument*)arg3;
@end