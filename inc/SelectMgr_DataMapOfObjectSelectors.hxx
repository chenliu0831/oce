// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_DataMapOfObjectSelectors_HeaderFile
#define _SelectMgr_DataMapOfObjectSelectors_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_SelectMgr_SelectableObject_HeaderFile
#include <Handle_SelectMgr_SelectableObject.hxx>
#endif
#ifndef _Handle_SelectMgr_DataMapNodeOfDataMapOfObjectSelectors_HeaderFile
#include <Handle_SelectMgr_DataMapNodeOfDataMapOfObjectSelectors.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class SelectMgr_SelectableObject;
class SelectMgr_SequenceOfSelector;
class TColStd_MapTransientHasher;
class SelectMgr_DataMapNodeOfDataMapOfObjectSelectors;
class SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors;



class SelectMgr_DataMapOfObjectSelectors  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   SelectMgr_DataMapOfObjectSelectors(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     SelectMgr_DataMapOfObjectSelectors& Assign(const SelectMgr_DataMapOfObjectSelectors& Other) ;
    SelectMgr_DataMapOfObjectSelectors& operator =(const SelectMgr_DataMapOfObjectSelectors& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~SelectMgr_DataMapOfObjectSelectors()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Handle(SelectMgr_SelectableObject)& K,const SelectMgr_SequenceOfSelector& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Handle(SelectMgr_SelectableObject)& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Handle(SelectMgr_SelectableObject)& K) ;
  
  Standard_EXPORT    const SelectMgr_SequenceOfSelector& Find(const Handle(SelectMgr_SelectableObject)& K) const;
   const SelectMgr_SequenceOfSelector& operator()(const Handle(SelectMgr_SelectableObject)& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     SelectMgr_SequenceOfSelector& ChangeFind(const Handle(SelectMgr_SelectableObject)& K) ;
    SelectMgr_SequenceOfSelector& operator()(const Handle(SelectMgr_SelectableObject)& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const Handle(SelectMgr_SelectableObject)& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const Handle(SelectMgr_SelectableObject)& K) ;





protected:





private:

  
  Standard_EXPORT   SelectMgr_DataMapOfObjectSelectors(const SelectMgr_DataMapOfObjectSelectors& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
