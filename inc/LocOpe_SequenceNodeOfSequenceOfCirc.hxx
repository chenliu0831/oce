// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_SequenceNodeOfSequenceOfCirc_HeaderFile
#define _LocOpe_SequenceNodeOfSequenceOfCirc_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_LocOpe_SequenceNodeOfSequenceOfCirc_HeaderFile
#include <Handle_LocOpe_SequenceNodeOfSequenceOfCirc.hxx>
#endif

#ifndef _gp_Circ_HeaderFile
#include <gp_Circ.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class gp_Circ;
class LocOpe_SequenceOfCirc;



class LocOpe_SequenceNodeOfSequenceOfCirc : public TCollection_SeqNode {

public:

  
      LocOpe_SequenceNodeOfSequenceOfCirc(const gp_Circ& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        gp_Circ& Value() const;




  DEFINE_STANDARD_RTTI(LocOpe_SequenceNodeOfSequenceOfCirc)

protected:




private: 


gp_Circ myValue;


};

#define SeqItem gp_Circ
#define SeqItem_hxx <gp_Circ.hxx>
#define TCollection_SequenceNode LocOpe_SequenceNodeOfSequenceOfCirc
#define TCollection_SequenceNode_hxx <LocOpe_SequenceNodeOfSequenceOfCirc.hxx>
#define Handle_TCollection_SequenceNode Handle_LocOpe_SequenceNodeOfSequenceOfCirc
#define TCollection_SequenceNode_Type_() LocOpe_SequenceNodeOfSequenceOfCirc_Type_()
#define TCollection_Sequence LocOpe_SequenceOfCirc
#define TCollection_Sequence_hxx <LocOpe_SequenceOfCirc.hxx>

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
