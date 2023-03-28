
#include <iostream>
#include <iomanip>
#include "bank_client/BankAccount.h"

const int NUM_MACHINE = 3;
const int NUM_ACCOUNT = 3;

using namespace std;


struct Machine
{
    string machine_id;
    string location;
    int expression;

    Machine(string id, string loc)
    {
        machine_id = id;
        location = loc;
    }
};

int index_bankAccount(int num_account, BankAccount bank[])
{
   int index = -1;

   for(int i =0; i<NUM_ACCOUNT; i++)
   {
        if(bank[i].get_accountNum()== num_account)
        {
            index = i;
            break;
        }
   }

   if(index = -1)
   {
    cout<<"Selected num_account does not exits."<<endl;
   }
}

int index_machine(string city, const Machine M[])
{
    int index=-1;

    for(int i=0;i<NUM_MACHINE;i++)
    {
        if(M[i].location == city)
        {
            index = i;
            break;
        }
    }

   if(index = -1)
   {
    cout<<"Selected Machine does not exits."<<endl;
   }
}


int main()
{
  string answer;
  string city;
  int expression;
  double amount;
  int bank_account;
  int bank_index;
  int machine_index;


    Machine machines[NUM_MACHINE]={ Machine("234-09-87","Tallahassee"),
                                    Machine("174-02-65","Orlando"),
                                    Machine("451-03-41","Gainesville")};

    BankAccount b_account[NUM_ACCOUNT];
    b_account[0].set_BankFullInfo(5000,"Michel-Kalim",3482,1234);
    b_account[1].set_BankFullInfo(4500,"Carlos-Theran",1987,3214);
    b_account[2].set_BankFullInfo(350,"Laura-McKla",5431,5632);


    cout<<"Do you want to do any transaction? ";
    cin >> answer;

    if(answer == "yes")
    {
        cout<<"\nSelect the city where you are doing the transaction"<<endl;
        cin >> city;

        machine_index = index_machine(city,machines);

        cout<<"\nType your bank account: ";
        cin >> bank_account;

        bank_index = index_bankAccount(bank_account, b_account);
    }

    while(answer=="yes")
    {
        cout<<"\nSelect one of the following options"<<endl;
        cout<<"\n**********************************"<<endl;
        cout<<"****"<<setw(19)<<"Menu"<<setw(19)<<"****"<<endl;
        cout<<left<<"1."<<setw(5)<<"Deposit"<<endl;
        cout<<left<<"2."<<setw(5)<<"withdraw"<<endl;
        cout<<"\n**********************************"<<endl;

    
        cin >> expression;

        switch (expression)
        {
        case 1:
            cout<<"Write the amount to deposit: $";
            cin >> amount;
            b_account[bank_index].deposit(amount);
            break;
        case 2:
            cout<<"Write the amount to withdraw: $";
            cin >> amount;
            b_account[bank_index].withdraw(amount);
        default:
        cout<<"The selected option is not valid "<<endl;
            break;
        }

    cout<<"Do you want to do any other transaction: ";
    cin >> answer;
    }
}    
