#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const int NUM_MONTHS = 12;

    // string name[NUM_MONTHS] = {"January","May","September","February","June",
    //                            "October","March","July","November","April","August",
    //                            "December"};

    // int days[NUM_MONTHS] = {31,31,30,28,31,30,31,31,30,31,30,31};

    // for(int month=0;month < NUM_MONTHS;month++)
    // {
    //     cout<<setw(9)<<left<< name[month] << " has " << days[month] << " days.\n";
    // }

    const int NUM_ROW = 12;
    const int NUM_COL = 2;
    string months_days[NUM_ROW][NUM_COL] = { {"January","31"},{"May","30"},
                                                   {"September","30"},{"February","28"},
                                                   {"June","30"},{"October","31"},
                                                   {"March","30"},{"July","31"},
                                                   {"November","30"},{"April","30"},
                                                   {"August","31"},{"December","31"}};

   
   for(int i=0;i<NUM_ROW;i++)
    {
        for(int j=NUM_COL-1;j>=0;j--)
        {
            cout<<months_days[i][j]<<endl;
        }
    }

}
