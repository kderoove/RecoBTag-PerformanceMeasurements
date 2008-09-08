#ifndef BTagTrackEvent_h
#define BTagTrackEvent_h

/**_________________________________________________________________
   class:   BTagTrackEvent.h
   package: RecoBTag/PerformanceMeasurements


 author: Victor E. Bazterra, UIC (baites@fnal.gov)

 version $Id: BTagTrackEvent.h,v 1.5 2008/08/27 20:13:14 bazterra Exp $
________________________________________________________________**/

#include "RecoBTag/PerformanceMeasurements/interface/BTagBaseTrackEvent.h"

#include "SimTracker/TrackHistory/interface/TrackCategories.h"

class BTagTrackEvent : public BTagBaseTrackEvent
{

public:

    BTagTrackEvent() : BTagBaseTrackEvent()
    {
        Reset();
    }
    ~BTagTrackEvent() {}

    virtual void Reset();

    std::vector<float> ip2d, ip3d, dta;
    std::vector<float> ip2dSigma, ip3dSigma;

    ClassDef(BTagTrackEvent,1);
};

#endif