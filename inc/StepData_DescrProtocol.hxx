// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_DescrProtocol_HeaderFile
#define _StepData_DescrProtocol_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepData_DescrProtocol_HeaderFile
#include <Handle_StepData_DescrProtocol.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _StepData_FileProtocol_HeaderFile
#include <StepData_FileProtocol.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif


//! A DescrProtocol is a protocol dynamically (at execution time) <br>
//!           defined with : <br>
//!           - a list of resources (inherits FileProtocol) <br>
//!           - a list of entity descriptions <br>
//!           i.e. it can be defined with only C++ writing to initialize it <br>
//!           Its initialization must : <br>
//!           - set its schema name <br>
//!           - define its resources (which can also be other DescrProtocol) <br>
//!           - define its entity descriptions <br>
//!           - record it in the system by calling RecordLib <br>
class StepData_DescrProtocol : public StepData_FileProtocol {

public:

  
  Standard_EXPORT   StepData_DescrProtocol();
  //! Defines a specific Schema Name for this Protocol <br>
  Standard_EXPORT     void SetSchemaName(const Standard_CString name) ;
  //! Records this Protocol in the service libraries, with a <br>
//!           DescrGeneral and a DescrReadWrite <br>
//!           Does nothing if the Protocol brings no proper description <br>
  Standard_EXPORT     void LibRecord() const;
  //! Returns the Schema Name attached to each class of Protocol <br>
//!           here, returns the SchemaName set by SetSchemaName <br>
//! was C++ : return const <br>
  Standard_EXPORT   virtual  Standard_CString SchemaName() const;




  DEFINE_STANDARD_RTTI(StepData_DescrProtocol)

protected:




private: 


TCollection_AsciiString thename;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif