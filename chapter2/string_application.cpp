/*
                                                Carlos Theran
                                                COP 3330 - OOP
                             This program read a txt file using fstream class

*/

#include <iostream> // allow us to use the cerr function.
#include <stdio.h>
#include <fstream>  // this library allows to read txt files.
#include <cstdlib>  
#include <string>


using namespace std;

void print_by_name(string name[], string id[], string phone[], int num_clients);


int main()
{
     fstream InputFile;
     string name[6] = {};
     string id[6] = {};
     string phone[6] = {};
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

        printf(" Client: %s %s %s\n", id[count].c_str(),name[count].c_str(),phone[count].c_str());
        count = count + 1;
     }
    int num_clients =  count - 1;

    print_by_name(name, id, phone, num_clients);


    InputFile.close();
    cout<<"\nAll clients were uploaded"<<endl;
}


void print_by_name(string name[], string id[], string phone[], int num_clients)
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

void print_by_id(string name[], string id[], string phone[], int num_clients)
{
  string given_id;
  cout<<"please write the id of the client: ";
  cin >> given_id;
  bool found = false;

  for(int i=0; i<num_clients; i++)
  {
    if(given_id == id[i])
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

void print_by_phone(string name[], string id[], string phone[], int num_clients)
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