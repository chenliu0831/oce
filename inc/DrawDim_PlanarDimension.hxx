// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawDim_PlanarDimension_HeaderFile
#define _DrawDim_PlanarDimension_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DrawDim_PlanarDimension_HeaderFile
#include <Handle_DrawDim_PlanarDimension.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _DrawDim_Dimension_HeaderFile
#include <DrawDim_Dimension.hxx>
#endif
class TopoDS_Face;



class DrawDim_PlanarDimension : public DrawDim_Dimension {

public:

  
  Standard_EXPORT     void SetPlane(const TopoDS_Face& plane) ;
  
  Standard_EXPORT     TopoDS_Face GetPlane() const;




  DEFINE_STANDARD_RTTI(DrawDim_PlanarDimension)

protected:


TopoDS_Face myPlane;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
