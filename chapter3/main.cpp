#include <iostream>
#include <iomanip>
#include <math.h>
#include <fstream>
#include "QuadraticPolinomial.h"

using namespace std; 

int main()
{
   double value1 =4, value2=6, value3=7;
   double x_values[] = {2, 3, 4, 6, 7, -4};
   double y_values[6] = {};
   int leng = 6;
   string answer = "yes";
   string answer2 = "yes";

   QuadraticPolinomial poly1;
   QuadraticPolinomial poly2(value1, value2, value3);

   poly1.set_a(leng);
   cout<<poly1.get_a()<<endl;
   cout<<poly2.get_a()<<endl;
   while(answer == answer2)
   {
      cout<<"Please provide the coefficient of your quadratic equation"<<endl;
      cin>> value1 >> value2 >> value3;

      poly1.set_a(value1);
      poly1.set_b(value2);
      poly1.set_c(value3);

      poly1.general_formula();
      poly1.evaluation(x_values, y_values, leng);
      poly1.vertex();
      cout<<"\nDo you want to keep using the APP? ";
      cin >> ws;
      getline(cin,answer);
      
   } 

   return 0; 
}