//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef MuonSpShowerContainer_p1_h
#define MuonSpShowerContainer_p1_h
class MuonSpShowerContainer_p1;

#include "Riostream.h"
#include <vector>
#include "MuonSpShower_p1.h"

class MuonSpShowerContainer_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<MuonSpShower_p1*> m_showers;    //

   MuonSpShowerContainer_p1();
   MuonSpShowerContainer_p1(const MuonSpShowerContainer_p1 & );
   virtual ~MuonSpShowerContainer_p1();

};
#endif
