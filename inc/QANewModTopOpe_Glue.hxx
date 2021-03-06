// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANewModTopOpe_Glue_HeaderFile
#define _QANewModTopOpe_Glue_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BRepTools_Substitution_HeaderFile
#include <BRepTools_Substitution.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeListOfShape_HeaderFile
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeShape_HeaderFile
#include <TopTools_DataMapOfShapeShape.hxx>
#endif
#ifndef _TopTools_IndexedDataMapOfShapeListOfShape_HeaderFile
#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TopTools_MapOfShape_HeaderFile
#include <TopTools_MapOfShape.hxx>
#endif
#ifndef _BRepAlgoAPI_BooleanOperation_HeaderFile
#include <BRepAlgoAPI_BooleanOperation.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopoDS_Shape;
class TopTools_ListOfShape;
class TopTools_DataMapOfShapeListOfShape;
class TopoDS_Face;
class TopTools_MapOfShape;
class gp_Pnt;
class TopoDS_Edge;
class TopoDS_Vertex;
class TopTools_IndexedDataMapOfShapeListOfShape;


//! Perform the gluing topological operation. <br>
class QANewModTopOpe_Glue  : public BRepAlgoAPI_BooleanOperation {
public:

  DEFINE_STANDARD_ALLOC

  //! Defines 2 operands. <br>
//!          If one of operands is Solid and another is Shell and Shell <br>
//!          goes inside Solid, the <allowCutting> determines what to do: <br>
//!            if True, Shell is cut by Solid during the operation; <br>
//!            if False, Null shape is returned, IsDone() returns False. <br>
//!          If <thePerformNow> is False then does not compute immediately. <br>
  Standard_EXPORT   QANewModTopOpe_Glue(const TopoDS_Shape& theS1,const TopoDS_Shape& theS2,const Standard_Boolean theAllowCutting = Standard_False,const Standard_Boolean thePerformNow = Standard_True);
  //! Computation; is usefull when Create was called with thePerformNow <br>
//!          being False <br>
  Standard_EXPORT     void Build() ;
  //! Returns the  list   of shapes generated   from the <br>
//!          shape <theS>. <br>
  Standard_EXPORT    const TopTools_ListOfShape& Generated(const TopoDS_Shape& theS) ;
  //! Returns the list  of shapes modified from the shape <br>
//!          <theS>. <br>
  Standard_EXPORT    const TopTools_ListOfShape& Modified(const TopoDS_Shape& theS) ;
  //! Returns True if the shape <theS> existed in one of operands <br>
//!          and is absent in the result. <br>
  Standard_EXPORT     Standard_Boolean IsDeleted(const TopoDS_Shape& theS) ;
  //! Returns True if there is at leat one generated shape <br>
  Standard_EXPORT   virtual  Standard_Boolean HasGenerated() const;
  //! Returns True if there is at leat one modified shape <br>
  Standard_EXPORT   virtual  Standard_Boolean HasModified() const;
  //! Returns True if there is at leat one deleted shape <br>
  Standard_EXPORT   virtual  Standard_Boolean HasDeleted() const;
  
  Standard_EXPORT   static  Standard_Boolean ProjPointOnEdge(const gp_Pnt& thePnt,const TopoDS_Edge& theEdge,Standard_Real& thePar,Standard_Real& theDist) ;
  
  Standard_EXPORT   static  void InsertVertexInEdge(const TopoDS_Edge& theEdge,const TopoDS_Vertex& theVer,const Standard_Real thePar,TopoDS_Edge& theNewEdge) ;
  
  Standard_EXPORT   static  void SplitEdgeByVertex(const TopoDS_Edge& theEdge,const TopoDS_Vertex& theVer,const Standard_Real thePar,TopTools_ListOfShape& theListE) ;
  
  Standard_EXPORT   static  Standard_Boolean CompareVertices(const TopoDS_Vertex& theV1,const TopoDS_Vertex& theV2,Standard_Real& theDist) ;





protected:





private:

  //! Performs gluing Shell-Wire <br>
  Standard_EXPORT     void PerformShellWire() ;
  //! Performs gluing Solid-Vertex and Shell-Vertex <br>
  Standard_EXPORT     void PerformVertex() ;
  //! Performs gluing Solid-Shell and Shell-Shell <br>
  Standard_EXPORT     void PerformShell() ;
  //! Performs gluing Wire-Wire <br>
  Standard_EXPORT     void PerformWires() ;
  //! This function performs gluing operation of same domain <br>
//!          faces theFirstSDFace and theSecondSDFace on shapes <br>
//!          theNewSolid1 and theNewSolid2 and returns them. <br>
//!          theMapOfChangedFaces contains changed faces as keys and <br>
//!          lists of their splits as items. <br>
  Standard_EXPORT     Standard_Boolean SubstitudeSDFaces(const TopoDS_Shape& theFirstSDFace,const TopoDS_Shape& theSecondSDFace,TopoDS_Shape& theNewSolid1,TopoDS_Shape& theNewSolid2,TopTools_DataMapOfShapeListOfShape& theMapOfChangedFaces) ;
  //! Performs gluing between same domain faces of object and tool <br>
  Standard_EXPORT     void PerformSDFaces() ;
  //! For the case Solid-Shell, <aFace> is from Shell. <br>
//!          Splits <theFace> onto faces by section edges <theListSE> and <br>
//!          add <theFace> for substitution by list of faces which are "out" <br>
//!          of Solid <br>
  Standard_EXPORT     Standard_Boolean CutFace(const TopoDS_Face& theFace,const TopTools_ListOfShape& theListSE) ;
  //! For the case Solid-Shell, <theFace> is a split of Shell's face. <br>
//!          Returns the state of <theFace> relatively Solid. <br>
  Standard_EXPORT     TopAbs_State ClassifyFace(const TopoDS_Face& theFace,const TopTools_ListOfShape& theListSE) const;
  //! Inserts "internal" elements (wires, edges, vertices) computed <br>
//!          from a list of section edges <theListSE> into <theFace>. <br>
  Standard_EXPORT     void SectionInsideFace(const TopoDS_Face& theFace,const TopTools_ListOfShape& theListSE,const Standard_Integer theShapeNum,const TopTools_MapOfShape& theGenEdges) ;
  
  Standard_EXPORT   static const TopoDS_Shape& FindWireOrUpdateMap(const TopoDS_Shape& theWire,TopTools_IndexedDataMapOfShapeListOfShape& theMapELW) ;


Standard_Boolean myCompleted;
Standard_Boolean myAllowCutting;
BRepTools_Substitution mySubst;
TopTools_DataMapOfShapeListOfShape myMapSEdgeFaces1;
TopTools_DataMapOfShapeListOfShape myMapSEdgeFaces2;
TopTools_DataMapOfShapeShape myMapSEdgeCrossFace1;
TopTools_DataMapOfShapeShape myMapSEdgeCrossFace2;
TopTools_IndexedDataMapOfShapeListOfShape myMapEdgeWires;
TopTools_MapOfShape myEdgesToLeave;
TopTools_DataMapOfShapeListOfShape myMapModif;
TopTools_DataMapOfShapeListOfShape myMapGener;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
