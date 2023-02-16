#include <iostream>
#include <iomanip>
#include <math.h>
#include <fstream>
#include "QuadraticPolinomial.h"

using namespace std; 

void QuadraticPolinomial::general_formula()
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


void QuadraticPolinomial::evaluation(double x_value[], double y_value[], int leng)
{
   for(int i=0;i<leng;i++)
   {
      y_value[i] = a*pow(x_value[i],2)+b*x_value[i]+c;
      cout<<"For x="<<x_value[i]<<"; y="<<y_value[i]<<endl;
   }
}


double QuadraticPolinomial::evaluate(double x)
{
   return a*pow(x,2)+b*x+c;
}

void QuadraticPolinomial::vertex()
{
   double vertex1 = 0.0;
   double vertex2 = 0.0;

   vertex1 = -b/(2*a);
   vertex2 = evaluate(vertex1);

   printf("\n The vertex are:(%.4f, %.4f)",vertex1,vertex2);
}


void QuadraticPolinomial::set_a(double value){ a=value;}
void QuadraticPolinomial::set_b(double value){ b=value;}
void QuadraticPolinomial::set_c(double value){ c=value;}


double QuadraticPolinomial::get_a(){return a;}
double QuadraticPolinomial::get_b(){return b;}
double QuadraticPolinomial::get_c(){return c;}