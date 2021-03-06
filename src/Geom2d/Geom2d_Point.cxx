// Created on: 1993-03-24
// Created by: Philippe DAUTRY
// Copyright (c) 1993-1999 Matra Datavision
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

#include <Geom2d_Point.ixx>

typedef Geom2d_Point Point;
typedef Handle(Geom2d_Point) Handle(Point);


Standard_Real Geom2d_Point::Distance (const Handle(Point)& Other) const {

  gp_Pnt2d P1 = this-> Pnt2d ();
  gp_Pnt2d P2 = Other->Pnt2d ();
  return P1.Distance (P2);
}


Standard_Real Geom2d_Point::SquareDistance (const Handle(Point)& Other) const {

  gp_Pnt2d P1 = this-> Pnt2d ();
  gp_Pnt2d P2 = Other->Pnt2d ();
  return P1.SquareDistance (P2);
}
