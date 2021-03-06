// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_SequenceOfSegmentOfTheSearchOfContour_HeaderFile
#define _Contap_SequenceOfSegmentOfTheSearchOfContour_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Contap_SequenceNodeOfSequenceOfSegmentOfTheSearchOfContour_HeaderFile
#include <Handle_Contap_SequenceNodeOfSequenceOfSegmentOfTheSearchOfContour.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Contap_TheSegmentOfTheSearchOfContour;
class Contap_SequenceNodeOfSequenceOfSegmentOfTheSearchOfContour;



class Contap_SequenceOfSegmentOfTheSearchOfContour  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      Contap_SequenceOfSegmentOfTheSearchOfContour();
  
  Standard_EXPORT     void Clear() ;
~Contap_SequenceOfSegmentOfTheSearchOfContour()
{
  Clear();
}
  
  Standard_EXPORT    const Contap_SequenceOfSegmentOfTheSearchOfContour& Assign(const Contap_SequenceOfSegmentOfTheSearchOfContour& Other) ;
   const Contap_SequenceOfSegmentOfTheSearchOfContour& operator =(const Contap_SequenceOfSegmentOfTheSearchOfContour& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Contap_TheSegmentOfTheSearchOfContour& T) ;
  
        void Append(Contap_SequenceOfSegmentOfTheSearchOfContour& S) ;
  
  Standard_EXPORT     void Prepend(const Contap_TheSegmentOfTheSearchOfContour& T) ;
  
        void Prepend(Contap_SequenceOfSegmentOfTheSearchOfContour& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Contap_TheSegmentOfTheSearchOfContour& T) ;
  
        void InsertBefore(const Standard_Integer Index,Contap_SequenceOfSegmentOfTheSearchOfContour& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Contap_TheSegmentOfTheSearchOfContour& T) ;
  
        void InsertAfter(const Standard_Integer Index,Contap_SequenceOfSegmentOfTheSearchOfContour& S) ;
  
  Standard_EXPORT    const Contap_TheSegmentOfTheSearchOfContour& First() const;
  
  Standard_EXPORT    const Contap_TheSegmentOfTheSearchOfContour& Last() const;
  
        void Split(const Standard_Integer Index,Contap_SequenceOfSegmentOfTheSearchOfContour& Sub) ;
  
  Standard_EXPORT    const Contap_TheSegmentOfTheSearchOfContour& Value(const Standard_Integer Index) const;
   const Contap_TheSegmentOfTheSearchOfContour& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Contap_TheSegmentOfTheSearchOfContour& I) ;
  
  Standard_EXPORT     Contap_TheSegmentOfTheSearchOfContour& ChangeValue(const Standard_Integer Index) ;
    Contap_TheSegmentOfTheSearchOfContour& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Contap_SequenceOfSegmentOfTheSearchOfContour(const Contap_SequenceOfSegmentOfTheSearchOfContour& Other);




};

#define SeqItem Contap_TheSegmentOfTheSearchOfContour
#define SeqItem_hxx <Contap_TheSegmentOfTheSearchOfContour.hxx>
#define TCollection_SequenceNode Contap_SequenceNodeOfSequenceOfSegmentOfTheSearchOfContour
#define TCollection_SequenceNode_hxx <Contap_SequenceNodeOfSequenceOfSegmentOfTheSearchOfContour.hxx>
#define Handle_TCollection_SequenceNode Handle_Contap_SequenceNodeOfSequenceOfSegmentOfTheSearchOfContour
#define TCollection_SequenceNode_Type_() Contap_SequenceNodeOfSequenceOfSegmentOfTheSearchOfContour_Type_()
#define TCollection_Sequence Contap_SequenceOfSegmentOfTheSearchOfContour
#define TCollection_Sequence_hxx <Contap_SequenceOfSegmentOfTheSearchOfContour.hxx>

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
