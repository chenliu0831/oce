// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_HArray2OfShape_HeaderFile
#define _TopTools_HArray2OfShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopTools_HArray2OfShape_HeaderFile
#include <Handle_TopTools_HArray2OfShape.hxx>
#endif

#ifndef _TopTools_Array2OfShape_HeaderFile
#include <TopTools_Array2OfShape.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class TopoDS_Shape;
class TopTools_Array2OfShape;



class TopTools_HArray2OfShape : public MMgt_TShared {

public:

  
  Standard_EXPORT   TopTools_HArray2OfShape(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT   TopTools_HArray2OfShape(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2,const TopoDS_Shape& V);
  
  Standard_EXPORT     void Init(const TopoDS_Shape& V) ;
  
        Standard_Integer ColLength() const;
  
        Standard_Integer RowLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const TopoDS_Shape& Value) ;
  
  Standard_EXPORT    const TopoDS_Shape& Value(const Standard_Integer Row,const Standard_Integer Col) const;
  
  Standard_EXPORT     TopoDS_Shape& ChangeValue(const Standard_Integer Row,const Standard_Integer Col) ;
  
       const TopTools_Array2OfShape& Array2() const;
  
        TopTools_Array2OfShape& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(TopTools_HArray2OfShape)

protected:




private: 


TopTools_Array2OfShape myArray;


};

#define ItemHArray2 TopoDS_Shape
#define ItemHArray2_hxx <TopoDS_Shape.hxx>
#define TheArray2 TopTools_Array2OfShape
#define TheArray2_hxx <TopTools_Array2OfShape.hxx>
#define TCollection_HArray2 TopTools_HArray2OfShape
#define TCollection_HArray2_hxx <TopTools_HArray2OfShape.hxx>
#define Handle_TCollection_HArray2 Handle_TopTools_HArray2OfShape
#define TCollection_HArray2_Type_() TopTools_HArray2OfShape_Type_()

#include <TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif