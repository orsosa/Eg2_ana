/////////////////////////////////////////////////////////////////////////
//   This class has been automatically generated 
//   (at Sun May 22 23:04:43 2016 by ROOT version 5.34/19)
//   from TTree tuplePi0_gamma/tuple for gamma from pi0 with bining information
//   found on file: pi0_eta_id_pictures_sim_FeD_Fe/pi0_eta_sim_FeD_Fe.root
/////////////////////////////////////////////////////////////////////////


#ifndef generatedSel_h
#define generatedSel_h

// System Headers needed by the proxy
#if defined(__CINT__) && !defined(__MAKECINT__)
   #define ROOT_Rtypes
   #define ROOT_TError
#endif
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TPad.h>
#include <TH1.h>
#include <TSelector.h>
#include <TBranchProxy.h>
#include <TBranchProxyDirector.h>
#include <TBranchProxyTemplate.h>
#include <TFriendProxy.h>
using namespace ROOT;

// forward declarations needed by this particular proxy


// Header needed by this particular proxy


class Sectorg_Interface {
   // This class defines the list of methods that are directly used by generatedSel,
   // and that can be overloaded in the user's script
public:
   void Sectorg_Begin(TTree*) {}
   void Sectorg_SlaveBegin(TTree*) {}
   Bool_t Sectorg_Notify() { return kTRUE; }
   Bool_t Sectorg_Process(Long64_t) { return kTRUE; }
   void Sectorg_SlaveTerminate() {}
   void Sectorg_Terminate() {}
};


class generatedSel : public TSelector, public Sectorg_Interface {
public :
   TTree          *fChain;         //!pointer to the analyzed TTree or TChain
   TH1            *htemp;          //!pointer to the histogram
   TBranchProxyDirector fDirector; //!Manages the proxys

   // Optional User methods
   TClass         *fClass;    // Pointer to this class's description

   // Proxy for each of the branches, leaves and friends of the tree
   TFloatProxy   Px;
   TFloatProxy   Py;
   TFloatProxy   Pz;
   TFloatProxy   Pex;
   TFloatProxy   Pey;
   TFloatProxy   Pez;
   TFloatProxy   Nu;
   TFloatProxy   Q2;
   TFloatProxy   Eh;
   TFloatProxy   Pt2;
   TFloatProxy   Event;


   generatedSel(TTree *tree=0) : 
      fChain(0),
      htemp(0),
      fDirector(tree,-1),
      fClass                (TClass::GetClass("generatedSel")),
      Px           (&fDirector,"Px"),
      Py           (&fDirector,"Py"),
      Pz           (&fDirector,"Pz"),
      Pex          (&fDirector,"Pex"),
      Pey          (&fDirector,"Pey"),
      Pez          (&fDirector,"Pez"),
      Nu           (&fDirector,"Nu"),
      Q2           (&fDirector,"Q2"),
      Eh           (&fDirector,"Eh"),
      Pt2          (&fDirector,"Pt2"),
      Event        (&fDirector,"Event")
      { }
   ~generatedSel();
   Int_t   Version() const {return 1;}
   void    Begin(::TTree *tree);
   void    SlaveBegin(::TTree *tree);
   void    Init(::TTree *tree);
   Bool_t  Notify();
   Bool_t  Process(Long64_t entry);
   void    SlaveTerminate();
   void    Terminate();

   ClassDef(generatedSel,0);


//inject the user's code
#include "Sectorg.gif"
};

#endif


#ifdef __MAKECINT__
#pragma link C++ class generatedSel;
#endif


inline generatedSel::~generatedSel() {
   // destructor. Clean up helpers.

}

inline void generatedSel::Init(TTree *tree)
{
//   Set branch addresses
   if (tree == 0) return;
   fChain = tree;
   fDirector.SetTree(fChain);
   if (htemp == 0) {
      htemp = fDirector.CreateHistogram(GetOption());
      htemp->SetTitle("Sectorg.gif");
      fObject = htemp;
   }
}

Bool_t generatedSel::Notify()
{
   // Called when loading a new file.
   // Get branch pointers.
   fDirector.SetTree(fChain);
   Sectorg_Notify();
   
   return kTRUE;
}
   

inline void generatedSel::Begin(TTree *tree)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();
   Sectorg_Begin(tree);

}

inline void generatedSel::SlaveBegin(TTree *tree)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   Init(tree);

   Sectorg_SlaveBegin(tree);

}

inline Bool_t generatedSel::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either TTree::GetEntry() or TBranch::GetEntry()
   // to read either all or the required parts of the data. When processing
   // keyed objects with PROOF, the object is already loaded and is available
   // via the fObject pointer.
   //
   // This function should contain the "body" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.

   // WARNING when a selector is used with a TChain, you must use
   //  the pointer to the current TTree to call GetEntry(entry).
   //  The entry is always the local entry number in the current tree.
   //  Assuming that fChain is the pointer to the TChain being processed,
   //  use fChain->GetTree()->GetEntry(entry).


   fDirector.SetReadEntry(entry);
   htemp->Fill(Sectorg());
   Sectorg_Process(entry);
   return kTRUE;

}

inline void generatedSel::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.
   Sectorg_SlaveTerminate();
}

inline void generatedSel::Terminate()
{
   // Function called at the end of the event loop.
   htemp = (TH1*)fObject;
   Int_t drawflag = (htemp && htemp->GetEntries()>0);
   
   if (gPad && !drawflag && !fOption.Contains("goff") && !fOption.Contains("same")) {
      gPad->Clear();
   } else {
      if (fOption.Contains("goff")) drawflag = false;
      if (drawflag) htemp->Draw(fOption);
   }
   Sectorg_Terminate();
}
