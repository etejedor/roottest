//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef MuonSpShower_p1_h
#define MuonSpShower_p1_h
class MuonSpShower_p1;

#include "TNamed.h"

class MuonSpShower_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   float       m_eta;       //
   float       m_phi;       //
   unsigned short m_numberOfTriggerHits;    //
   unsigned short m_numberOfInnerHits;      //
   unsigned short m_numberOfInnerSegments;    //
   unsigned short m_numberOfMiddleHits;       //
   unsigned short m_numberOfMiddleSegments;    //
   unsigned short m_numberOfOuterHits;         //
   unsigned short m_numberOfOuterSegments;     //

   MuonSpShower_p1();
   MuonSpShower_p1(const MuonSpShower_p1 & );
   virtual ~MuonSpShower_p1();

};
#endif
