# RecoBTag-PerformanceMeasurements

## Software setup

```
cmsrel CMSSW_8_0_4
cd CMSSW_8_0_4/src
cmsenv

setenv CMSSW_GIT_REFERENCE /cvmfs/cms.cern.ch/cmssw.git.daily
git cms-init

git remote add btv-cmssw https://github.com/cms-btv-pog/cmssw.git
git fetch --tags btv-cmssw

git cms-merge-topic kovitang:Neg_Pos_CTagger_80X
git cms-merge-topic cms-btv-pog:FixHistoryBase_from-CMSSW_8_0_4
git clone -b V00-00-01 --depth 1 git://github.com/cms-btv-pog/cms-EventCounter.git MyAnalysis/EventCounter
git clone -b 8_0_X --depth 1 https://github.com/cms-btv-pog/RecoBTag-PerformanceMeasurements.git RecoBTag/PerformanceMeasurements

scram b -j8

cd RecoBTag/PerformanceMeasurements/test/

cmsRun runBTagAnalyzer_cfg.py miniAOD=False maxEvents=100 reportEvery=1 wantSummary=True
```

