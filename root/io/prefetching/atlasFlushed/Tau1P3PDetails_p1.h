//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef Tau1P3PDetails_p1_h
#define Tau1P3PDetails_p1_h
class Tau1P3PDetails_p1;

#include "Riostream.h"
#include <vector>
#include "HepLorentzVector_p1.h"
#include "TPObjRef.h"
#include "ElementLinkVector_p1_unsigned_int_.h"
#include "ElementLink_p1_unsigned_int_.h"

class Tau1P3PDetails_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   int         m_numStripCells;    //
   float       m_stripWidth2;      //
   float       m_emRadius;         //
   float       m_ET12Frac;         //
   float       m_etIsolHAD;        //
   float       m_etIsolEM;         //
   float       m_etChrgHAD;        //
   int         m_nAssocTracksCore;    //
   int         m_nAssocTracksIsol;    //
   float       m_signD0Trk3P;         //
   float       m_massTrk3P;           //
   float       m_rWidth2Trk3P;        //
   float       m_etHadAtEMScale;      //
   float       m_etEMAtEMScale;       //
   float       m_etEMCL;              //
   float       m_etChrgEM;            //
   float       m_etNeuEM;             //
   float       m_etResNeuEM;          //
   float       m_trFlightPathSig;     //
   float       m_z0SinThetaSig;       //
   float       m_etChrgHADoverPttot;    //
   float       m_etIsolFrac;            //
   float       m_sumEtCellsLArOverLeadTrackPt;    //
   float       m_hadronicLeak;                    //
   float       m_secondaryMax;                    //
   vector<float> m_etChrgEM01Trk;                   //
   vector<float> m_etResChrgEMTrk;                  //
   HepLorentzVector_p1 m_sumEM;                           //
   TPObjRef            m_secVertex;                       //
   ElementLinkVector_p1<unsigned int> m_pi0;                             //
   ElementLink_p1<unsigned int>       m_cellEM012Cluster;                //
   float                              m_etEflow;                         //

   Tau1P3PDetails_p1();
   Tau1P3PDetails_p1(const Tau1P3PDetails_p1 & );
   virtual ~Tau1P3PDetails_p1();

};
#endif
