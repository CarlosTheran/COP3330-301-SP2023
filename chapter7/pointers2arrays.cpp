#include <iostream>

using namespace std;


int main()
{
    const int SIZE = 5;
    int *ptr;
    int array[]={10,24,13,76,5};

    ptr = array;

    for(int index=0;index<SIZE;index++)
    {
        //cout<<array[index]<<endl;
        //cout<<ptr[index]<<endl;
        cout<<*(ptr+index)<<endl;
    }
}
