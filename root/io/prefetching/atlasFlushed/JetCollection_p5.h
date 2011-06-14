//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef JetCollection_p5_h
#define JetCollection_p5_h
class JetCollection_p5;

#include "Riostream.h"
#include <vector>
#include "TPObjRef.h"
#include "DataLink_p1.h"

class JetCollection_p5 : public vector<TPObjRef> {

public:
// Nested classes declaration.

public:
// Data Members.
   short       m_ordered;    //
   DataLink_p1 m_keyStore;    //

   JetCollection_p5();
   JetCollection_p5(const JetCollection_p5 & );
   virtual ~JetCollection_p5();

};
#endif
