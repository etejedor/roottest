//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TrigInDetTrackFitPar_p2_h
#define TrigInDetTrackFitPar_p2_h
class TrigInDetTrackFitPar_p2;

#include "TNamed.h"

class TrigInDetTrackFitPar_p2 {

public:
// Nested classes declaration.

public:
// Data Members.
   double      m_a0;        //
   double      m_phi0;      //
   double      m_z0;        //
   double      m_eta;       //
   double      m_pT;        //
   float       m_cov[15];    //
   int         m_surfaceType;    //
   double      m_surfaceCoordinate;    //

   TrigInDetTrackFitPar_p2();
   TrigInDetTrackFitPar_p2(const TrigInDetTrackFitPar_p2 & );
   virtual ~TrigInDetTrackFitPar_p2();

};
#endif
