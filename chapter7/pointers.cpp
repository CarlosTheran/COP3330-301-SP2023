#include<iostream>

using namespace std;


int main()
{
  int x = 25;
  int *ptr = &x;

  cout<<"memory allocation: "<<ptr<<endl;
  cout<<"saved value: "<<x<<endl;
  cout<<"saved value: "<<*ptr<<endl;
 
  *ptr = 5;

  cout<<"saved value: "<<*ptr<<endl;
  cout<<"saved value: "<<x<<endl;
}
