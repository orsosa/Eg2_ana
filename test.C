#include "TROOT.h"
#include "TH1F.h"
#include "TLorentzVector.h"
#include "TSpectrum.h"
#include <vector>
#include <iostream>


template <typename T> T bop(T a,T b)
{
  return a + b;
}

template <typename T> int combine(std::vector<T> v,int st, int n,T s=0, int lev =0,bool debug=false)
{
  if (n==1)
  {
    for (int i= st; i < v.size(); i++)
    {
      if (debug)for (int j=0;j<lev;j++) std::cout<<"  ";
      if (debug)std::cout<<v[i];
      float sum =bop(s,v[i]);
      if (debug)std::cout<<" = "<<sum<<std::endl;
    }
  }
  else
  {
    for (int k = st; k < v.size() - n + 1; k++)
    {
      if (debug) for (int j=0;j<lev;j++) std::cout<<"  ";
      if (debug) std::cout<<v[k]<<" + \n"; 
      combine(v,k+1,n-1,bop(v[k],s),lev+1,debug);  
    }
  }

  return 0;
}


TH1F *h = new TH1F("h","h",500,0,500);
int test(int n=5){
std::vector<float> v;
std::vector<TLorentzVector> vl;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(6);
vl.push_back(TLorentzVector(1,2,3,4));
vl.push_back(TLorentzVector(0,1,2,6));
TLorentzVector vls(bop(vl[0],vl[1]));
std::cout<<vls.E()<<"\t"<<vls.Px()<<"\t"<<vls.Py()<<"\t"<<vls.Pz()<<std::endl;
std::cout<<vls.M()<<std::endl;
TSpectrum *sp = new TSpectrum(3);

combine<float>(v,0,n,0,0,true);
return 0;
}


