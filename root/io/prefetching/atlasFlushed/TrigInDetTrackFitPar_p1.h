//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TrigInDetTrackFitPar_p1_h
#define TrigInDetTrackFitPar_p1_h
class TrigInDetTrackFitPar_p1;

#include "Riostream.h"
#include "TPObjRef.h"
#include <vector>

class TrigInDetTrackFitPar_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   double      m_a0;        //
   double      m_phi0;      //
   double      m_z0;        //
   double      m_eta;       //
   double      m_pT;        //
   float       m_ea0;       //
   float       m_ephi0;     //
   float       m_ez0;       //
   float       m_eeta;      //
   float       m_epT;       //
   vector<double>* m_cov;       //
   int             m_surfaceType;    //
   double          m_surfaceCoordinate;    //
   vector<double>  m_covtmp;               //

   TrigInDetTrackFitPar_p1();
   TrigInDetTrackFitPar_p1(const TrigInDetTrackFitPar_p1 & );
   virtual ~TrigInDetTrackFitPar_p1();

};
#endif
