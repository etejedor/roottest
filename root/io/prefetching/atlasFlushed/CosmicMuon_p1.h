//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef CosmicMuon_p1_h
#define CosmicMuon_p1_h
class CosmicMuon_p1;

#include "TNamed.h"

class CosmicMuon_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   float       mP;          //
   float       mRadius;     //
   float       mTheta;      //
   float       mPhi;        //
   float       mPoint[3];    //
   float       mT;           //
   int         mIsIngoing;    //
   int         mNRpcPairs;    //
   int         mNTgcPairs;    //
   int         mNMdtHits;     //
   int         mNMdtSegs;     //

   CosmicMuon_p1();
   CosmicMuon_p1(const CosmicMuon_p1 & );
   virtual ~CosmicMuon_p1();

};
#endif
