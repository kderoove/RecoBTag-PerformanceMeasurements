
// PtrelSolver
// Author: Victor E. Bazterra, UIC (2008)

#ifdef NOSCRAMV
#include "PtrelSolver.h"
#include "PtrelByFitting.h"
#include "PtrelByCounting.h"
#include "PtrelTemplateMaker.h"
#include "PtrelSolverDependencies.h"
#else
#include "RecoBTag/PerformanceMeasurements/test/PtrelSolver/PtrelSolver.h"
#include "RecoBTag/PerformanceMeasurements/test/PtrelSolver/PtrelByFitting.h"
#include "RecoBTag/PerformanceMeasurements/test/PtrelSolver/PtrelByCounting.h"
#include "RecoBTag/PerformanceMeasurements/test/PtrelSolver/PtrelTemplateMaker.h"
#include "RecoBTag/PerformanceMeasurements/test/PtrelSolver/PtrelSolverDependencies.h"
#endif


#ifdef __CINT__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ class Flavor+;
#pragma link C++ class Dependency+;
#pragma link C++ class PtrelSolver+;
#pragma link C++ class PtrelByFitting+;
#pragma link C++ class PtrelByCounting+;
#pragma link C++ class PtrelTemplateMaker;

#endif
