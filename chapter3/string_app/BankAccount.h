#include "ClientTable.h"

class BankAccount
{
    private:
      int current_balance;
      int Number_of_transactions;
      ClientTable client;

    public:
      BankAccount(){};
     ~BankAccount(){};
      BankAccount(int pCurrentBalance, string name);
      void deposit(double amount);
      void withdraw(double amount);
      void get_balance();
      void get_num_transaction();
      void bank_information();  

};