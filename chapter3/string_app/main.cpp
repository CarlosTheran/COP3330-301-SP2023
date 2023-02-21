#include "ClientTable.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int expression = 0;

    ClientTable clients;

    clients.set_info();
    
    cout<<"\n\n*********************************"<<endl;
    cout<<"***"<<setw(15)<<" MENU "<<setw(15)<<"*****"<<endl;
    cout<<left<<"1."<<setw(5)<<"Search by name."<<endl;
    cout<<left<<"2."<<setw(5)<<"Search by id."<<endl;
    cout<<left<<"3."<<setw(5)<<"Search by phone number."<<endl;
    cout<<"*********************************"<<endl;
    cout<<"Your option: ";
    cin >> expression;

    switch (expression)
    {
    case 1:
      clients.print_by_name();
      break;
    case 2:
      clients.print_by_id();  
      break;
    case 3:
      clients.print_by_phone();
      break;
    default:
       cout<<"Selected option is not valid"<<endl;
      break;
    }
    cout<<"\nAll clients were uploaded"<<endl;

}
