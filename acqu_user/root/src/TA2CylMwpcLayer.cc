// SVN info: $Id: TA2CylMwpcLayer.cc 116 2013-02-06 02:32:22Z mushkar $
#include "TA2CylMwpcLayer.h"
#include "TA2WireChamber.h"

ClassImp(TA2CylMwpcLayer)

//---------------------------------------------------------------------------
  TA2CylMwpcLayer::TA2CylMwpcLayer(const char* name, Int_t nelem, Int_t maxclust, Int_t maxclsize, void* det)
                 :TA2WCLayer(name, nelem, maxclust, maxclsize, det)
{

}
