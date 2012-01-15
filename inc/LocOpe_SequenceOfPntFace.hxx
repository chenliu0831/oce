// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_SequenceOfPntFace_HeaderFile
#define _LocOpe_SequenceOfPntFace_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_LocOpe_SequenceNodeOfSequenceOfPntFace_HeaderFile
#include <Handle_LocOpe_SequenceNodeOfSequenceOfPntFace.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class LocOpe_PntFace;
class LocOpe_SequenceNodeOfSequenceOfPntFace;



class LocOpe_SequenceOfPntFace  : public TCollection_BaseSequence {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
      LocOpe_SequenceOfPntFace();
  
  Standard_EXPORT     void Clear() ;
~LocOpe_SequenceOfPntFace()
{
  Clear();
}
  
  Standard_EXPORT    const LocOpe_SequenceOfPntFace& Assign(const LocOpe_SequenceOfPntFace& Other) ;
   const LocOpe_SequenceOfPntFace& operator =(const LocOpe_SequenceOfPntFace& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const LocOpe_PntFace& T) ;
  
        void Append(LocOpe_SequenceOfPntFace& S) ;
  
  Standard_EXPORT     void Prepend(const LocOpe_PntFace& T) ;
  
        void Prepend(LocOpe_SequenceOfPntFace& S) ;
  
        void InsertBefore(const Standard_Integer Index,const LocOpe_PntFace& T) ;
  
        void InsertBefore(const Standard_Integer Index,LocOpe_SequenceOfPntFace& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const LocOpe_PntFace& T) ;
  
        void InsertAfter(const Standard_Integer Index,LocOpe_SequenceOfPntFace& S) ;
  
  Standard_EXPORT    const LocOpe_PntFace& First() const;
  
  Standard_EXPORT    const LocOpe_PntFace& Last() const;
  
        void Split(const Standard_Integer Index,LocOpe_SequenceOfPntFace& Sub) ;
  
  Standard_EXPORT    const LocOpe_PntFace& Value(const Standard_Integer Index) const;
   const LocOpe_PntFace& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const LocOpe_PntFace& I) ;
  
  Standard_EXPORT     LocOpe_PntFace& ChangeValue(const Standard_Integer Index) ;
    LocOpe_PntFace& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   LocOpe_SequenceOfPntFace(const LocOpe_SequenceOfPntFace& Other);




};

#define SeqItem LocOpe_PntFace
#define SeqItem_hxx <LocOpe_PntFace.hxx>
#define TCollection_SequenceNode LocOpe_SequenceNodeOfSequenceOfPntFace
#define TCollection_SequenceNode_hxx <LocOpe_SequenceNodeOfSequenceOfPntFace.hxx>
#define Handle_TCollection_SequenceNode Handle_LocOpe_SequenceNodeOfSequenceOfPntFace
#define TCollection_SequenceNode_Type_() LocOpe_SequenceNodeOfSequenceOfPntFace_Type_()
#define TCollection_Sequence LocOpe_SequenceOfPntFace
#define TCollection_Sequence_hxx <LocOpe_SequenceOfPntFace.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif