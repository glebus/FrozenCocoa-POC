/*
 * Copyright (c) 2003 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * Copyright (c) 1999-2003 Apple Computer, Inc.  All Rights Reserved.
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*
 *  CFUnicodePrecomposition.h
 *  CoreFoundation
 *
 *  Created by aki on Wed Oct 03 2001.
 *  Copyright (c) 2001-2003, Apple Inc. All rights reserved.
 *
 */

#if !defined(__COREFOUNDATION_CFUNICODEPRECOMPOSITION__)
#define __COREFOUNDATION_CFUNICODEPRECOMPOSITION__ 1

#if KERNEL
#include "CFKernelTypes.h"
#else // KERNEL
#include "CFUniChar.h"
#endif /* KERNEL */

#if defined(__cplusplus)
extern "C" {
#endif

// As you can see, this function cannot precompose Hangul Jamo
CF_EXPORT UTF32Char CFUniCharPrecomposeCharacter(UTF32Char base, UTF32Char combining);

CF_EXPORT bool CFUniCharPrecompose(const UTF16Char *characters, uint32_t length, uint32_t *consumedLength, UTF16Char *precomposed, uint32_t maxLength, uint32_t *filledLength);

#if defined(__cplusplus)
}
#endif

#endif /* ! __COREFOUNDATION_CFUNICODEDECOMPOSITION__ */

