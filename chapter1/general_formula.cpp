/*
                            Carlos Theran
                              COP3330-301
    This program will find the roots of a quatric function
*/

#include <iostream>  //library is use for cout an cin
#include <math.h> // library is use for math functions
#include <iomanip> //library is use for manipulator (setw and setprecision)
#include <string>
#include <stdio.h>

using namespace std;

void general_formula(double a, double b, double c)
{
   double x_sol1, x_sol2;
   double descriminant = 0.0;

   descriminant = pow(b,2)-4*a*c;
   if(descriminant>=0)
   {
      x_sol1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
      x_sol2 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);
      cout<<"\nThe two solution for the given equation are "<<endl;
      cout<<left<<"First solution ---->"<<setw(4)<<right<<setprecision(3)<<x_sol1<<endl;
      cout<<left<<"First solution ---->"<<setw(4)<<right<<setprecision(3)<<x_sol2<<endl;
   }
   else
   {
      cout<<left<<"The given quadratic equation does not have real solution, the descriminant value is: "<<descriminant<<endl;
   }
}


void evaluation(double a, double b, double c, double x_value[], double y_value[], int leng)
{
   for(int i=0;i<leng;i++)
   {
      y_value[i] = a*pow(x_value[i],2)+b*x_value[i]+c;
      cout<<"For x="<<x_value[i]<<"; y="<<y_value[i]<<endl;
   }
}


double evaluate(double a, double b, double c, double x)
{
   return a*pow(x,2)+b*x+c;
}

void vertex(double a, double b, double c)
{
   double vertex1 = 0.0;
   double vertex2 = 0.0;

   vertex1 = -b/(2*a);
   vertex2 = evaluate(a,b,c,vertex1);

   printf("\n The vertex are:(%.4f, %.4f)",vertex1,vertex2);
}

int main()
{
   double a =0.0, b=0.0, c=0.0;
   double x_values[] = {2, 3, 4, 6, 7, -4};
   double y_values[6] = {};
   int leng = 6;
   string answer = "yes";
   string answer2 = "yes";

   while(answer == answer2)
   {
      cout<<"Please provide the coefficient of your quadratic equation"<<endl;
      cin>> a >> b >> c;

      general_formula( a,  b,  c);
      evaluation( a, b, c, x_values, y_values, leng);
      vertex(a,b,c);
      cout<<"\nDo you want to keep using the APP? ";
      cin >> ws;
      getline(cin,answer);
      
   } 

   return 0; 
}
