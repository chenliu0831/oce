// Copyright (c) 1998-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
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

#include <Standard_Storable.ixx>

void Standard_Storable::Delete()
{}

//========================================================================
Standard_Integer Standard_Storable::HashCode(const Standard_Integer Upper)const
{
  return ::HashCode((Standard_Address) this, Upper, STANDARD_TYPE(Standard_Storable));
}

//========================================================================
Standard_Boolean Standard_Storable::IsEqual(const Standard_Storable& ) const
{
  return Standard_True;
}

//========================================================================
Standard_Boolean Standard_Storable::IsSimilar(const Standard_Storable& ) const
{
  return Standard_True;
}

//========================================================================
void Standard_Storable::ShallowDump(Standard_OStream& ) const
{
//  ::ShallowDump((Standard_Address) this, STANDARD_TYPE(Standard_Storable), S);
}

