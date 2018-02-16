#include "TSpectrum.h"
#include "Riostream.h"
#include "TApplication.h"
#include "TROOT.h"
#include "TFile.h"
#include "TNtuple.h"
#include "TClasTool.h"
#include "TIdentificator.h"
#include "TMath.h"
#include "TBenchmark.h"
#include "TLorentzVector.h"
#include "TCanvas.h"
#include "TH2F.h"
#include "TLatex.h"
#include "TF1.h"
#include "TFitResultPtr.h"
#include "TFitResult.h"
#include "TLegend.h"
#include "TNT10Reader.h"
#include <vector>
#include <iostream>
#include <sys/stat.h>


int main()
{
TNT10Reader *nt = new TNT10Reader();
nt->Add("/data/atlas/users/alaoui/mc_prod/newsimul4_bat/32bit/Fe56/run0132/recsis_Fe56_run0132.root/h10");

return 0;

}
