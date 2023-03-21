/*For mac you need to compile the code using the following command g++ -std=c++11 main.cpp */

#include <iostream>
#include <string>


using namespace std;

struct InvItem
{
    int partNum;
    string description;
    int onhand;
    double price;

    InvItem(){};
    InvItem(int pN, string des, int oh, double p)
    {
       partNum = pN;
       description = des;
       onhand = oh;
       price = p; 
    }    
    /* data */
};

void getItemData(InvItem & Item2)
{
   cout<<"Write the PartNum of your Item: "<<endl; 
   cin >> Item2.partNum;

   cout<<"Write the description of your Item: "<<endl;
   cin >> Item2.description;

   cout<<"Write how many Items you have in the store: "<<endl;
   cin >> Item2.onhand;

   cout<<"Write the price of the Item: "<<endl;
   cin>>Item2.price;
}


void showItemInformation(const InvItem & Item)
{
  cout<<endl<<Item.partNum<<" "<<Item.description<<" "<<Item.onhand<<" "<<Item.price<<endl; 
}


int main()
{
  
  InvItem Items={3457,"Laptop",4,2457};

  showItemInformation(Items); 
  
  InvItem Item2;

  getItemData(Item2);

  cout<<"Values from my Item2"<<endl;
  showItemInformation(Item2);

  
  InvItem Item3(645,"smart-phone",10,700);
  showItemInformation(Item3);

}
