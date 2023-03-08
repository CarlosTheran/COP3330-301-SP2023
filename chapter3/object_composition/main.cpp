#include "Carpet.h"
#include <iostream>

using namespace std;

int main()
{
    Carpet carpet1;
    double pricePerYard = 10.50;
    double length = 38;
    double width = 46;
    
   carpet1.set_dimension(length, width);
   carpet1.set_pricePerSqYard(pricePerYard);

   cout<<"\n Total price of my carper "<< carpet1.compute_total_price() <<endl;


}