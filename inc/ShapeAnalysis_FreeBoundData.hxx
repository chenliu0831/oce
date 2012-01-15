// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeAnalysis_FreeBoundData_HeaderFile
#define _ShapeAnalysis_FreeBoundData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeAnalysis_FreeBoundData_HeaderFile
#include <Handle_ShapeAnalysis_FreeBoundData.hxx>
#endif

#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TopTools_HSequenceOfShape_HeaderFile
#include <Handle_TopTools_HSequenceOfShape.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeReal_HeaderFile
#include <TopTools_DataMapOfShapeReal.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TopTools_HSequenceOfShape;
class TopoDS_Wire;


//! This class is intended to represent free bound and to store <br>
//!          its properties. <br>
class ShapeAnalysis_FreeBoundData : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   ShapeAnalysis_FreeBoundData();
  //! Creates object with contour given in the form of TopoDS_Wire <br>
  Standard_EXPORT   ShapeAnalysis_FreeBoundData(const TopoDS_Wire& freebound);
  //! Clears all properties of the contour. <br>
//!          Contour bound itself is not cleared. <br>
  Standard_EXPORT     void Clear() ;
  //! Sets contour <br>
        void SetFreeBound(const TopoDS_Wire& freebound) ;
  //! Sets area of the contour <br>
        void SetArea(const Standard_Real area) ;
  //! Sets perimeter of the contour <br>
        void SetPerimeter(const Standard_Real perimeter) ;
  //! Sets ratio of average length to average width of the contour <br>
        void SetRatio(const Standard_Real ratio) ;
  //! Sets average width of the contour <br>
        void SetWidth(const Standard_Real width) ;
  //! Adds notch on the contour with its maximum width <br>
  Standard_EXPORT     void AddNotch(const TopoDS_Wire& notch,const Standard_Real width) ;
  //! Returns contour <br>
        TopoDS_Wire FreeBound() const;
  //! Returns area of the contour <br>
        Standard_Real Area() const;
  //! Returns perimeter of the contour <br>
        Standard_Real Perimeter() const;
  //! Returns ratio of average length to average width of the contour <br>
        Standard_Real Ratio() const;
  //! Returns average width of the contour <br>
        Standard_Real Width() const;
  //! Returns number of notches on the contour <br>
        Standard_Integer NbNotches() const;
  //! Returns sequence of notches on the contour <br>
        Handle_TopTools_HSequenceOfShape Notches() const;
  //! Returns notch on the contour <br>
        TopoDS_Wire Notch(const Standard_Integer index) const;
  //! Returns maximum width of notch specified by its rank number <br>
//!          on the contour <br>
  Standard_EXPORT     Standard_Real NotchWidth(const Standard_Integer index) const;
  //! Returns maximum width of notch specified as TopoDS_Wire <br>
//!          on the contour <br>
  Standard_EXPORT     Standard_Real NotchWidth(const TopoDS_Wire& notch) const;




  DEFINE_STANDARD_RTTI(ShapeAnalysis_FreeBoundData)

protected:




private: 


TopoDS_Wire myBound;
Standard_Real myArea;
Standard_Real myPerimeter;
Standard_Real myRatio;
Standard_Real myWidth;
Handle_TopTools_HSequenceOfShape myNotches;
TopTools_DataMapOfShapeReal myNotchesParams;


};


#include <ShapeAnalysis_FreeBoundData.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif