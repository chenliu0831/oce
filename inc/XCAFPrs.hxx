// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFPrs_HeaderFile
#define _XCAFPrs_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
class TDF_Label;
class TopLoc_Location;
class XCAFPrs_DataMapOfShapeStyle;
class TopoDS_Shape;
class XCAFPrs_DataMapOfStyleShape;
class XCAFPrs_Style;
class XCAFPrs_Driver;
class XCAFPrs_AISObject;
class XCAFPrs_Style;
class XCAFPrs_DataMapOfShapeStyle;
class XCAFPrs_DataMapOfStyleShape;
class XCAFPrs_DataMapOfStyleTransient;
class XCAFPrs_DataMapNodeOfDataMapOfShapeStyle;
class XCAFPrs_DataMapIteratorOfDataMapOfShapeStyle;
class XCAFPrs_DataMapNodeOfDataMapOfStyleShape;
class XCAFPrs_DataMapIteratorOfDataMapOfStyleShape;
class XCAFPrs_DataMapNodeOfDataMapOfStyleTransient;
class XCAFPrs_DataMapIteratorOfDataMapOfStyleTransient;


//! Presentation (visualiation, selection etc.) tools for <br>
//!          DECAF documents <br>
class XCAFPrs  {
public:

  DEFINE_STANDARD_ALLOC

  //! Collect styles defined for shape on label L <br>
//!          and its components and subshapes and fills a map of <br>
//!          shape - style correspondence <br>
//!          The location <loc> is for internal use, it <br>
//!          should be Null location for external call <br>
  Standard_EXPORT   static  void CollectStyleSettings(const TDF_Label& L,const TopLoc_Location& loc,XCAFPrs_DataMapOfShapeStyle& settings) ;
  //! Iterates on shape (recursively) and splits it <br>
//!          on parts each of which has its own style <br>
//!          (basing on settings collected by CollectStyleSettings()) <br>
//!          The DefStyle is default style applied to a shape if <br>
//!          no specific style assignment is applied to it <br>
//!          If force is True, the <shape> is added to a map <br>
//!          even if no styles are redefined for it or its <br>
//!          subshapes <br>
//!          The context is for internal use, it indicates <br>
//!          the type of the shape to which <shape> belongs <br>
  Standard_EXPORT   static  Standard_Boolean DispatchStyles(const TopoDS_Shape& shape,const XCAFPrs_DataMapOfShapeStyle& settings,XCAFPrs_DataMapOfStyleShape& items,const XCAFPrs_Style& DefStyle,const Standard_Boolean force = Standard_True,const TopAbs_ShapeEnum context = TopAbs_SHAPE) ;
  //! Set ViewNameMode for indicate display names or not. <br>
  Standard_EXPORT   static  void SetViewNameMode(const Standard_Boolean viewNameMode) ;
  
  Standard_EXPORT   static  Standard_Boolean GetViewNameMode() ;





protected:





private:




friend class XCAFPrs_Driver;
friend class XCAFPrs_AISObject;
friend class XCAFPrs_Style;
friend class XCAFPrs_DataMapOfShapeStyle;
friend class XCAFPrs_DataMapOfStyleShape;
friend class XCAFPrs_DataMapOfStyleTransient;
friend class XCAFPrs_DataMapNodeOfDataMapOfShapeStyle;
friend class XCAFPrs_DataMapIteratorOfDataMapOfShapeStyle;
friend class XCAFPrs_DataMapNodeOfDataMapOfStyleShape;
friend class XCAFPrs_DataMapIteratorOfDataMapOfStyleShape;
friend class XCAFPrs_DataMapNodeOfDataMapOfStyleTransient;
friend class XCAFPrs_DataMapIteratorOfDataMapOfStyleTransient;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
