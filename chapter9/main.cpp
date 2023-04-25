#include "Array.h"
#include <iostream>
using namespace std;


int main()
{
  double values[] = {4,6,7,2,1,3}; 
  int size = 6;

  Array obj2(size, values);
  Array obj1;

  obj1 = obj2;

  cout<<"Printing Object 1"<<endl;
  obj1.print();


  cout<<"Priting Object 2"<<endl;
  obj2.print();

    
 double values2[] = {14,26,47,32,11,23};
 obj2.setValue(values2); 

  cout<<"Printing Object 1"<<endl;
  obj1.print();


  cout<<"Priting Object 2"<<endl;
  obj2.print();

}