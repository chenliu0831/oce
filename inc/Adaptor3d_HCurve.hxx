// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Adaptor3d_HCurve_HeaderFile
#define _Adaptor3d_HCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _GeomAbs_CurveType_HeaderFile
#include <GeomAbs_CurveType.hxx>
#endif
#ifndef _gp_Lin_HeaderFile
#include <gp_Lin.hxx>
#endif
#ifndef _gp_Circ_HeaderFile
#include <gp_Circ.hxx>
#endif
#ifndef _gp_Elips_HeaderFile
#include <gp_Elips.hxx>
#endif
#ifndef _gp_Hypr_HeaderFile
#include <gp_Hypr.hxx>
#endif
#ifndef _gp_Parab_HeaderFile
#include <gp_Parab.hxx>
#endif
#ifndef _Handle_Geom_BezierCurve_HeaderFile
#include <Handle_Geom_BezierCurve.hxx>
#endif
#ifndef _Handle_Geom_BSplineCurve_HeaderFile
#include <Handle_Geom_BSplineCurve.hxx>
#endif
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class Adaptor3d_Curve;
class TColStd_Array1OfReal;
class gp_Pnt;
class gp_Vec;
class Geom_BezierCurve;
class Geom_BSplineCurve;


//! Root class for 3D curves manipulated by handles, on <br>
//! which geometric algorithms work. <br>
//! An adapted curve is an interface between the <br>
//! services provided by a curve and those required of <br>
//! the curve by algorithms which use it. <br>
//! Two derived concrete classes are provided: <br>
//! - GeomAdaptor_HCurve for a curve from the Geom package <br>
//! - Adaptor3d_HCurveOnSurface for a curve lying <br>
//!   on a surface from the Geom package. <br>
class Adaptor3d_HCurve : public MMgt_TShared {

public:

  //! Returns a pointer to the Curve inside the HCurve. <br>
//! <br>
  Standard_EXPORT   virtual const Adaptor3d_Curve& Curve() const = 0;
  //! Returns a pointer to the Curve inside the HCurve. <br>
//! <br>
  Standard_EXPORT   virtual  Adaptor3d_Curve& GetCurve()  = 0;
  
        Standard_Real FirstParameter() const;
  
        Standard_Real LastParameter() const;
  
        GeomAbs_Shape Continuity() const;
  
        Standard_Integer NbIntervals(const GeomAbs_Shape S) ;
  //! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
//! <br>
        void Intervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) ;
  //! Returns    a  curve equivalent   of  <me>  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>
//! <br>//! If <First> >= <Last> <br>
        Handle_Adaptor3d_HCurve Trim(const Standard_Real First,const Standard_Real Last,const Standard_Real Tol) const;
  
        Standard_Boolean IsClosed() const;
  
        Standard_Boolean IsPeriodic() const;
  
        Standard_Real Period() const;
  
        gp_Pnt Value(const Standard_Real U) const;
  
        void D0(const Standard_Real U,gp_Pnt& P) const;
  
        void D1(const Standard_Real U,gp_Pnt& P,gp_Vec& V) const;
  
        void D2(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) const;
  
        void D3(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) const;
  
        gp_Vec DN(const Standard_Real U,const Standard_Integer N) const;
  
        Standard_Real Resolution(const Standard_Real R3d) const;
  
        GeomAbs_CurveType GetType() const;
  
        gp_Lin Line() const;
  
        gp_Circ Circle() const;
  
        gp_Elips Ellipse() const;
  
        gp_Hypr Hyperbola() const;
  
        gp_Parab Parabola() const;
  
        Standard_Integer Degree() const;
  
        Standard_Boolean IsRational() const;
  
        Standard_Integer NbPoles() const;
  
        Standard_Integer NbKnots() const;
  
        Handle_Geom_BezierCurve Bezier() const;
  
        Handle_Geom_BSplineCurve BSpline() const;




  DEFINE_STANDARD_RTTI(Adaptor3d_HCurve)

protected:




private: 




};


#include <Adaptor3d_HCurve.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif