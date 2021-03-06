// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_PolygonOnClosedTriangulation_HeaderFile
#define _BRep_PolygonOnClosedTriangulation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRep_PolygonOnClosedTriangulation_HeaderFile
#include <Handle_BRep_PolygonOnClosedTriangulation.hxx>
#endif

#ifndef _Handle_Poly_PolygonOnTriangulation_HeaderFile
#include <Handle_Poly_PolygonOnTriangulation.hxx>
#endif
#ifndef _BRep_PolygonOnTriangulation_HeaderFile
#include <BRep_PolygonOnTriangulation.hxx>
#endif
#ifndef _Handle_Poly_Triangulation_HeaderFile
#include <Handle_Poly_Triangulation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_BRep_CurveRepresentation_HeaderFile
#include <Handle_BRep_CurveRepresentation.hxx>
#endif
class Poly_PolygonOnTriangulation;
class Poly_Triangulation;
class TopLoc_Location;
class BRep_CurveRepresentation;


//! A representation by two arrays of nodes on a <br>
//!          triangulation. <br>
class BRep_PolygonOnClosedTriangulation : public BRep_PolygonOnTriangulation {

public:

  
  Standard_EXPORT   BRep_PolygonOnClosedTriangulation(const Handle(Poly_PolygonOnTriangulation)& P1,const Handle(Poly_PolygonOnTriangulation)& P2,const Handle(Poly_Triangulation)& Tr,const TopLoc_Location& L);
  //! Returns True. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsPolygonOnClosedTriangulation() const;
  
  Standard_EXPORT   virtual  void PolygonOnTriangulation2(const Handle(Poly_PolygonOnTriangulation)& P2) ;
  
  Standard_EXPORT   virtual const Handle_Poly_PolygonOnTriangulation& PolygonOnTriangulation2() const;
  //! Return a copy of this representation. <br>
  Standard_EXPORT   virtual  Handle_BRep_CurveRepresentation Copy() const;




  DEFINE_STANDARD_RTTI(BRep_PolygonOnClosedTriangulation)

protected:




private: 


Handle_Poly_PolygonOnTriangulation myPolygon2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
