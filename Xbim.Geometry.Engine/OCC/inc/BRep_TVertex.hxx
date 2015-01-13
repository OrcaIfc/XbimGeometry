// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_TVertex_HeaderFile
#define _BRep_TVertex_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRep_TVertex_HeaderFile
#include <Handle_BRep_TVertex.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _BRep_ListOfPointRepresentation_HeaderFile
#include <BRep_ListOfPointRepresentation.hxx>
#endif
#ifndef _TopoDS_TVertex_HeaderFile
#include <TopoDS_TVertex.hxx>
#endif
#ifndef _Handle_TopoDS_TShape_HeaderFile
#include <Handle_TopoDS_TShape.hxx>
#endif
class gp_Pnt;
class BRep_ListOfPointRepresentation;
class TopoDS_TShape;


//! The TVertex from  BRep inherits  from  the TVertex <br>
//!          from TopoDS. It contains the geometric data. <br>
//! <br>
//!          The  TVertex contains a 3d point and a tolerance. <br>
//! <br>
class BRep_TVertex : public TopoDS_TVertex {

public:

  
  Standard_EXPORT   BRep_TVertex();
  
        Standard_Real Tolerance() const;
  
        void Tolerance(const Standard_Real T) ;
  //! Sets the tolerance  to the   max  of <T>  and  the <br>
//!          current  tolerance. <br>
//! <br>
        void UpdateTolerance(const Standard_Real T) ;
  
       const gp_Pnt& Pnt() const;
  
        void Pnt(const gp_Pnt& P) ;
  
       const BRep_ListOfPointRepresentation& Points() const;
  
        BRep_ListOfPointRepresentation& ChangePoints() ;
  //! Returns a copy  of the  TShape  with no sub-shapes. <br>
  Standard_EXPORT     Handle_TopoDS_TShape EmptyCopy() const;




  DEFINE_STANDARD_RTTI(BRep_TVertex)

protected:




private: 


gp_Pnt myPnt;
Standard_Real myTolerance;
BRep_ListOfPointRepresentation myPoints;


};


#include <BRep_TVertex.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif