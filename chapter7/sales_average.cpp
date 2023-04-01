#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double *sales = nullptr;
    double total = 0.0, average;

    int num_days;

    cout<<"How many days of sales do you want to process"<<endl;
    cin >> num_days;

    sales = new double[num_days];

    cout<<"Enter the sales:\n";

    for(int i=0;i<num_days;i++)
    {
        cout<<" Day "<<(i+1)<<": ";
        cin >> sales[i];
    }

    for(int i=0;i<num_days;i++)
    {
        total += sales[i];
    }
    
    average = total/num_days;

    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"\nTotal Sales: $"<<total<<endl;
    cout<<"Average Sales: $"<<average<<endl;

    delete[] sales;
    sales = nullptr;

}

