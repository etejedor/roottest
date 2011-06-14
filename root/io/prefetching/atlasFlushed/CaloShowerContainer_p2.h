//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef CaloShowerContainer_p2_h
#define CaloShowerContainer_p2_h
class CaloShowerContainer_p2;

#include "CaloClusterMomentContainer_p1.h"
#include "CaloSamplingDataContainer_p1.h"

class CaloShowerContainer_p2 {

public:
// Nested classes declaration.

public:
// Data Members.
   CaloClusterMomentContainer_p1 m_momentContainer;    //
   CaloSamplingDataContainer_p1  m_samplingDataContainer;    //
   unsigned int                  m_nClusters;                //

   CaloShowerContainer_p2();
   CaloShowerContainer_p2(const CaloShowerContainer_p2 & );
   virtual ~CaloShowerContainer_p2();

};
#endif
