#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <fstream>

using namespace std;


class Client
{
    private:
       string name_client;
       int ssn;
       int bank_account_num;

    public:
    Client(){};
    Client(string name_client, int ssn, int account_num)
    {
      name_client = name_client;
      ssn = ssn;
      bank_account_num = account_num;
    }
    void set_ClientName(string name);
    void set_SSN(int ssn);
    void set_BankAccountNum(int account);
    string get_ClientName();
    int get_SSN();
    int get_BankAccountNum();
    void print_inf();
};

void Client::set_BankAccountNum(int account)
{
  bank_account_num = account;
}

void Client::set_ClientName(string name)
{
    name_client = name;
}

void Client::set_SSN(int ssn2)
{
   ssn = ssn2;
}

string Client::get_ClientName()
{
    return name_client;
}

int Client::get_BankAccountNum()
{
    return bank_account_num;
}

int Client::get_SSN()
{
    return ssn;
}

void Client::print_inf()
{
    printf("Bank Account: %i, Name: %s, SNN: %i\n", bank_account_num, name_client.c_str(), ssn); 
}
