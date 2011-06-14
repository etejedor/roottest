//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TrigTrackCountsCollection_tlp1_h
#define TrigTrackCountsCollection_tlp1_h
class TrigTrackCountsCollection_tlp1;

#include "Riostream.h"
#include <vector>
#include "TrigTrackCountsCollection_p1.h"
#include "TrigTrackCounts_p1.h"
#include "TrigTrackCounts_p2.h"

class TrigTrackCountsCollection_tlp1 {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<TrigTrackCountsCollection_p1> m_trigTrackCountsCollectionVec;    //(TrigTrackCountsCollection_p1)
   vector<TrigTrackCounts_p1>           m_trigTrackCountsVec;              //(TrigTrackCounts_p1)
   vector<TrigTrackCounts_p2>           m_trigTrackCountsVec_p2;           //(TrigTrackCounts_p2)

   TrigTrackCountsCollection_tlp1();
   TrigTrackCountsCollection_tlp1(const TrigTrackCountsCollection_tlp1 & );
   virtual ~TrigTrackCountsCollection_tlp1();

};
#endif
