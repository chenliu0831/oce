// Created on: 2014-04-10
// Created by: Kirill GAVRILOV
// Copyright (c) 2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and / or modify it
// under the terms of the GNU Lesser General Public version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _OpenGl_ArbTBO_H__
#define _OpenGl_ArbTBO_H__

#include <OpenGl_GlCore12.hxx>

//! TBO is available on OpenGL 3.0+ hardware
struct OpenGl_ArbTBO
{

  PFNGLTEXBUFFERARBPROC glTexBufferARB;

};

#endif // _OpenGl_ArbTBO_H__
