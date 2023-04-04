#include <iostream>
#include "Bed.h"

using namespace std;


Bed::Bed(int len)
{
    num_bed = len;
    length = new int[num_bed]; 
    width = new int[num_bed];

    for(int index=0; index<num_bed; index++)
    {
        cout<<"\nWrite the size (length and width) of your bed "<< index+1<< ": ";
        cin >> length[index];
        cin >> width[index];

    }
}

void Bed::print_inf()
{
    for(int index=0;index<num_bed; index++)
    {
        cout<<"Size Bed#"<<index+1<<":"<<*(length+index)<<", "<<*(width+index)<<endl;
    }
}

void Bed::price()
{
    for(int index=0;index<num_bed; index++)
    {
        cout<<"Price Bed#"<<index+1<<": $"<<(length[index]*width[index]*2.5)<<endl;
    }
}

void Bed::set_bed(int len)
{
    num_bed = len;
    length = new int[num_bed]; 
    width = new int[num_bed];

    for(int index=0; index<num_bed; index++)
    {
        cout<<"\nWrite the size (length and width) of your bed "<< index+1<< ": ";
        cin >> length[index];
        cin >> width[index];

    }
}