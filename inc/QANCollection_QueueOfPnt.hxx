// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANCollection_QueueOfPnt_HeaderFile
#define _QANCollection_QueueOfPnt_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_QANCollection_QueueNodeOfQueueOfPnt_HeaderFile
#include <Handle_QANCollection_QueueNodeOfQueueOfPnt.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class gp_Pnt;
class QANCollection_QueueNodeOfQueueOfPnt;



class QANCollection_QueueOfPnt  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   QANCollection_QueueOfPnt();
  
  Standard_EXPORT    const QANCollection_QueueOfPnt& Assign(const QANCollection_QueueOfPnt& Other) ;
   const QANCollection_QueueOfPnt& operator =(const QANCollection_QueueOfPnt& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT    const gp_Pnt& Front() const;
  
  Standard_EXPORT     void Clear() ;
~QANCollection_QueueOfPnt()
{
  Clear();
}
  
  Standard_EXPORT     void Push(const gp_Pnt& T) ;
  
  Standard_EXPORT     void Pop() ;
  
  Standard_EXPORT     gp_Pnt& ChangeFront() ;





protected:





private:

  
  Standard_EXPORT   QANCollection_QueueOfPnt(const QANCollection_QueueOfPnt& Other);


Standard_Address myFront;
Standard_Address myEnd;
Standard_Integer myLength;


};

#define Item gp_Pnt
#define Item_hxx <gp_Pnt.hxx>
#define TCollection_QueueNode QANCollection_QueueNodeOfQueueOfPnt
#define TCollection_QueueNode_hxx <QANCollection_QueueNodeOfQueueOfPnt.hxx>
#define Handle_TCollection_QueueNode Handle_QANCollection_QueueNodeOfQueueOfPnt
#define TCollection_QueueNode_Type_() QANCollection_QueueNodeOfQueueOfPnt_Type_()
#define TCollection_Queue QANCollection_QueueOfPnt
#define TCollection_Queue_hxx <QANCollection_QueueOfPnt.hxx>

#include <TCollection_Queue.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_QueueNode
#undef TCollection_QueueNode_hxx
#undef Handle_TCollection_QueueNode
#undef TCollection_QueueNode_Type_
#undef TCollection_Queue
#undef TCollection_Queue_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
