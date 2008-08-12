from ROOT import *;

def printme(o):
    print "t now %g %d %d" % (o.get("double")(), o.get("int")(), o.get("double")());

#gSystem.Load("libG__t.so");
gROOT.ProcessLine(".L t.h+");
print dir(t);
o = t();
printme(o);
o.set(12);
printme(o);
o.set(42.34);
printme(o);
