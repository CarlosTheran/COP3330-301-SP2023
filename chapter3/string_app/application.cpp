#include "ClientTable.h"
#include <fstream>
#include <iostream>

using namespace std;


void ClientTable::set_info()
{
    ifstream InputFile;
    int count = 0;
    InputFile.open("agenda_phone.txt");
         if(!InputFile)
     {
       cerr<< "Error: file could not be opened"<<endl;
       exit(1);
     }

     while(!InputFile.eof())
     {
        InputFile >> id[count];
        InputFile >> name[count];
        InputFile >> phone[count];
        count = count + 1;
     }

    int num_clients =  count - 1;
}

void ClientTable::print_by_name()
{
  string given_name;
  cout<<"please write the name of the client: ";
  cin >> given_name;
  bool found = false;

  for(int i=0; i<num_clients; i++)
  {
    if(given_name == name[i])
    {
      found = true;
      printf("\nThe client information: %s %s %s",id[i].c_str(),name[i].c_str(),phone[i].c_str());
      break;
    }
  }
  if(!found)
  {
    cout<<"\nClient was not found"<<endl;
  }
}

int ClientTable::print_by_id()
{
  string given_id;
  int position = -1;
  cout<<"please write the id of the client: ";
  cin >> given_id;
  bool found = false;

  for(int i=0; i<num_clients; i++)
  {
    if(given_id == id[i])
    {
      found = true;
      printf("\nThe client information: %s %s %s",id[i].c_str(),name[i].c_str(),phone[i].c_str());
      position = i;
      break;
    }
  }
  if(!found)
  {
    cout<<"\nClient was not found"<<endl;
  }

  return position;
}

void ClientTable::print_by_phone()
{
  string given_phone;
  cout<<"please write the id of the client: ";
  cin >> given_phone;
  bool found = false;

  for(int i=0; i<num_clients; i++)
  {
    if(given_phone == phone[i])
    {
      found = true;
      printf("\nThe client information: %s %s %s",id[i].c_str(),name[i].c_str(),phone[i].c_str());
      break;
    }
  }
  if(!found)
  {
    cout<<"\nClient was not found"<<endl;
  }
}

void ClientTable::edit_name()
{
   int position = print_by_id();
   string new_name;

   int len = name[position].length();
   cout<<"\nPlease provide the new name: ";
   cin >> new_name;

   cout<<"Changed name "<<name[position]<<" by "<<new_name<<endl;
   name[position].replace(0,len,new_name);

}

