// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_RightCircularCylinder_HeaderFile
#define _StepShape_RightCircularCylinder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_RightCircularCylinder_HeaderFile
#include <Handle_StepShape_RightCircularCylinder.hxx>
#endif

#ifndef _Handle_StepGeom_Axis1Placement_HeaderFile
#include <Handle_StepGeom_Axis1Placement.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _StepGeom_GeometricRepresentationItem_HeaderFile
#include <StepGeom_GeometricRepresentationItem.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class StepGeom_Axis1Placement;
class TCollection_HAsciiString;



class StepShape_RightCircularCylinder : public StepGeom_GeometricRepresentationItem {

public:

  //! Returns a RightCircularCylinder <br>
  Standard_EXPORT   StepShape_RightCircularCylinder();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_Axis1Placement)& aPosition,const Standard_Real aHeight,const Standard_Real aRadius) ;
  
  Standard_EXPORT     void SetPosition(const Handle(StepGeom_Axis1Placement)& aPosition) ;
  
  Standard_EXPORT     Handle_StepGeom_Axis1Placement Position() const;
  
  Standard_EXPORT     void SetHeight(const Standard_Real aHeight) ;
  
  Standard_EXPORT     Standard_Real Height() const;
  
  Standard_EXPORT     void SetRadius(const Standard_Real aRadius) ;
  
  Standard_EXPORT     Standard_Real Radius() const;




  DEFINE_STANDARD_RTTI(StepShape_RightCircularCylinder)

protected:




private: 


Handle_StepGeom_Axis1Placement position;
Standard_Real height;
Standard_Real radius;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
