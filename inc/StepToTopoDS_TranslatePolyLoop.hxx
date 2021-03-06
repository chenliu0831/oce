// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_TranslatePolyLoop_HeaderFile
#define _StepToTopoDS_TranslatePolyLoop_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepToTopoDS_TranslatePolyLoopError_HeaderFile
#include <StepToTopoDS_TranslatePolyLoopError.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _StepToTopoDS_Root_HeaderFile
#include <StepToTopoDS_Root.hxx>
#endif
#ifndef _Handle_StepShape_PolyLoop_HeaderFile
#include <Handle_StepShape_PolyLoop.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
class StdFail_NotDone;
class StepShape_PolyLoop;
class StepToTopoDS_Tool;
class Geom_Surface;
class TopoDS_Face;
class TopoDS_Shape;



//! <br>
class StepToTopoDS_TranslatePolyLoop  : public StepToTopoDS_Root {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   StepToTopoDS_TranslatePolyLoop();
  
  Standard_EXPORT   StepToTopoDS_TranslatePolyLoop(const Handle(StepShape_PolyLoop)& PL,StepToTopoDS_Tool& T,const Handle(Geom_Surface)& S,const TopoDS_Face& F);
  
  Standard_EXPORT     void Init(const Handle(StepShape_PolyLoop)& PL,StepToTopoDS_Tool& T,const Handle(Geom_Surface)& S,const TopoDS_Face& F) ;
  
  Standard_EXPORT    const TopoDS_Shape& Value() const;
  
  Standard_EXPORT     StepToTopoDS_TranslatePolyLoopError Error() const;





protected:





private:



StepToTopoDS_TranslatePolyLoopError myError;
TopoDS_Shape myResult;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
