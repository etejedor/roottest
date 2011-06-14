//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef Muon_p4_h
#define Muon_p4_h
class Muon_p4;

#include "P4IPtCotThPhiM_p1.h"
#include "ParticleBase_p1.h"
#include "Riostream.h"
#include <vector>
#include "ElementLink_p1_unsigned_int_.h"
#include "ElementLinkVector_p1_unsigned_int_.h"

class Muon_p4 {

public:
// Nested classes declaration.

public:
// Data Members.
   P4IPtCotThPhiM_p1 m_momentum;    //
   ParticleBase_p1   m_particleBase;    //
   unsigned int      m_author;          //
   bool              m_hasCombinedMuon;    //
   bool              m_hasInDetTrackParticle;    //
   bool              m_hasMuonExtrapolatedTrackParticle;    //
   bool              m_hasInnerExtrapolatedTrackParticle;    //
   bool              m_hasCombinedMuonTrackParticle;         //
   bool              m_hasCluster;                           //
   double            m_matchChi2;                            //
   vector<int>       m_associatedEtaDigits;                  //
   vector<int>       m_associatedPhiDigits;                  //
   ElementLink_p1<unsigned int> m_inDetTrackParticle;                   //
   ElementLinkVector_p1<unsigned int> m_muonSegments;                         //
   ElementLink_p1<unsigned int>       m_muonSpectrometerTrackParticle;        //
   ElementLink_p1<unsigned int>       m_muonExtrapolatedTrackParticle;        //
   ElementLink_p1<unsigned int>       m_innerExtrapolatedTrackParticle;       //
   ElementLink_p1<unsigned int>       m_combinedMuonTrackParticle;            //
   ElementLink_p1<unsigned int>       m_cluster;                              //
   vector<float>                      m_parameters;                           //
   bool                               m_bestMatch;                            //
   int                                m_matchNumberDoF;                       //
   bool                               m_isAlsoFoundByLowPt;                   //
   bool                               m_isAlsoFoundByCaloMuonId;              //
   ElementLink_p1<unsigned int>       m_caloEnergyLoss;                       //
   unsigned short                     m_caloMuonAlsoFoundByMuonReco;          //
   bool                               m_isCorrected;                          //
   unsigned short                     m_allAuthors;                           //

   Muon_p4();
   Muon_p4(const Muon_p4 & );
   virtual ~Muon_p4();

};
#endif
