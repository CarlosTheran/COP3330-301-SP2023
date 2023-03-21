#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include "BankAccount.h"

using namespace std;

struct Machine
{
    string machine_id;
    string location; 

    Machine(string name = "236-90-0", string loct = "Tallahassee, FL")
    {
        machine_id = name;
        location = loct;
    }
};

void print_machine_inf(const Machine &M)
{
 printf("Local information: Machine- %s, location:- %s\n",M.machine_id.c_str(), M.location.c_str());
}

using namespace std;

int main()
{
  int initialCurrentBalance;
  int expression;
  int amount;
  string answer;

  Machine machine;

  string name_client = "Carlos-Theran";
  int ssn = 14897;
  int account_num = 80954;

  cout<<"Set the initial current balance: $";
  cin >> initialCurrentBalance;

  //BankAccount BankAccount1;
  //BankAccount BankAccount2(initialCurrentBalance);
  BankAccount BankAccount2(initialCurrentBalance, name_client, ssn, account_num);

  cout<<"Do you want to do any transaction? ";
  cin >> answer;

  while(answer=="yes")
  {
    cout<<"Select one of the following options"<<endl;
    cout<<"\n\n**************************"<<endl;
    cout<<"****"<<setw(19)<<"Menu"<<setw(19)<<"*****"<<endl;
    cout<<left<<"1."<<setw(5)<<"Deposit"<<endl;
    cout<<left<<"2."<<setw(5)<<"Withdraw"<<endl;
    cout<<"**************************************\n";

    cin >> expression;

    switch (expression)
    {
    case 1:
        cout<<"Write the total amount to deposit: $";
        cin >> amount;
        BankAccount2.deposit(amount);
        break;
    
    case 2:
        cout<<"Write the total amount to withdraw: $";
        cin >> amount;
        BankAccount2.withdraw(amount);
    default:
        cout<<"The input selection is not valid"<<endl;
        break;
    }
    cout<<"Do you want to do any other transaction?";
    cin >> answer;
  }
  print_machine_inf(machine);
  BankAccount2.print_inf();

}