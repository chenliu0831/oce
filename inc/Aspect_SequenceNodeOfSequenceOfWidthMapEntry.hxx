// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_SequenceNodeOfSequenceOfWidthMapEntry_HeaderFile
#define _Aspect_SequenceNodeOfSequenceOfWidthMapEntry_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Aspect_SequenceNodeOfSequenceOfWidthMapEntry_HeaderFile
#include <Handle_Aspect_SequenceNodeOfSequenceOfWidthMapEntry.hxx>
#endif

#ifndef _Aspect_WidthMapEntry_HeaderFile
#include <Aspect_WidthMapEntry.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class Aspect_WidthMapEntry;
class Aspect_SequenceOfWidthMapEntry;



class Aspect_SequenceNodeOfSequenceOfWidthMapEntry : public TCollection_SeqNode {

public:

  
      Aspect_SequenceNodeOfSequenceOfWidthMapEntry(const Aspect_WidthMapEntry& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Aspect_WidthMapEntry& Value() const;




  DEFINE_STANDARD_RTTI(Aspect_SequenceNodeOfSequenceOfWidthMapEntry)

protected:




private: 


Aspect_WidthMapEntry myValue;


};

#define SeqItem Aspect_WidthMapEntry
#define SeqItem_hxx <Aspect_WidthMapEntry.hxx>
#define TCollection_SequenceNode Aspect_SequenceNodeOfSequenceOfWidthMapEntry
#define TCollection_SequenceNode_hxx <Aspect_SequenceNodeOfSequenceOfWidthMapEntry.hxx>
#define Handle_TCollection_SequenceNode Handle_Aspect_SequenceNodeOfSequenceOfWidthMapEntry
#define TCollection_SequenceNode_Type_() Aspect_SequenceNodeOfSequenceOfWidthMapEntry_Type_()
#define TCollection_Sequence Aspect_SequenceOfWidthMapEntry
#define TCollection_Sequence_hxx <Aspect_SequenceOfWidthMapEntry.hxx>

#include <TCollection_SequenceNode.lxx>

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
