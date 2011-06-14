//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TrackRecordCollection_p2_h
#define TrackRecordCollection_p2_h
class TrackRecordCollection_p2;

#include "Riostream.h"
#include <vector>
#include "TrackRecord_p1.h"
#include <string>

class TrackRecordCollection_p2 {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<TrackRecord_p1> m_cont;      //(TrackRecord_p1)
   string                 m_name;      //

   TrackRecordCollection_p2();
   TrackRecordCollection_p2(const TrackRecordCollection_p2 & );
   virtual ~TrackRecordCollection_p2();

};
#endif
