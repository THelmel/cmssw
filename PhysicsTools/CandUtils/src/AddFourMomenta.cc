// $Id: AddFourMomenta.cc,v 1.2 2005/10/03 10:12:11 llista Exp $
#include "PhysicsTools/CandUtils/interface/AddFourMomenta.h"
#include "PhysicsTools/Candidate/interface/daughter_iterator.h"
using namespace aod;

AddFourMomenta::~AddFourMomenta() { }

void AddFourMomenta::set( Candidate & c ) {
  p4.SetXYZT( 0, 0, 0, 0 );
  charge = 0;
  for( Candidate::iterator d = c.begin(); d != c.end(); ++ d ) {
    p4 += d->p4();
    charge += d->charge();
  }
}
