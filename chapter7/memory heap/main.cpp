#include <iostream>
#include "Bed.h"


using namespace std;

int main()
{
   int num_companies;


  cout<<"From how many companies do you want to get quote?";
  cin >> num_companies;

  Bed *num_comp = new Bed[num_companies];

  for(int i=0; i< num_companies; i++)
  {
    cout<<"******** Company "<<i+1<<"*******\n";
    num_comp[i].set_bed(2);
  }

  for(int i=0; i< num_companies; i++)
  {
    cout<<"******** Company "<<i+1<<"*******\n";
    num_comp[i].print_inf();
  }

  delete[] num_comp;
  num_comp = nullptr;
  
};

