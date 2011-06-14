//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef EventType_p1_h
#define EventType_p1_h
class EventType_p1;

#include "Riostream.h"
#include <vector>
#include <string>

class EventType_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<bool> m_bit_mask;    //
   string       m_user_type;    //
   unsigned int m_mc_event_weight;    //

   EventType_p1();
   EventType_p1(const EventType_p1 & );
   virtual ~EventType_p1();

};
#endif
