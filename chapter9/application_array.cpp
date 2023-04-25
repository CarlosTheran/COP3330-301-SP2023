#include "Array.h"
#include <iostream>

using namespace std;

Array::Array(){

}

Array::Array(const int size, const double values[])
{
    arraySize = size;
    ptr = new double[arraySize];

    for(int i=0; i< arraySize; i++)
    {
      ptr[i] = values[i];
    }
}

Array::~Array()
{
    delete[] ptr;
    ptr = nullptr;
}

Array& Array::operator=(const Array &right)
{
   if(this != &right)
   {
     delete[] ptr;
   }

   arraySize = right.arraySize;
   ptr = new double[arraySize];

   for(int i=0; i<arraySize; i++)
   {
     ptr[i] = right.ptr[i];
   } 

   return *this; 
}


void Array::print()
{
    for(int i=0; i< arraySize; i++)
    {
        cout<<ptr[i]<<endl;
    }
}


void Array::setValue(double values[])
{
  for(int i=0; i<arraySize; i++)
  {
    ptr[i] = values[i];
  }
  
}

void Array::set_arraySize(int value)
{
    arraySize = value;
}

