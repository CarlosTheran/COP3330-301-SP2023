/*
                            Carlos Theran-Suarez
                              COP3330-301
    This program will find the roots of a quatric function OOP
*/

#include <iostream>  //library is use for cout an cin
#include <math.h> // library is use for math functions
#include <iomanip> //library is use for manipulator (setw and setprecision)
#include <string>
#include <stdio.h>


using namespace std;


class QuadraticPolinomial
{
   private:
    double a;
    double b;
    double c;

   public:
    QuadraticPolinomial(){};
    ~QuadraticPolinomial(){};
    QuadraticPolinomial(double value1, double value2, double value3)
    {
      a = value1;
      b = value2;
      c = value3;
    }

    void general_formula();
    double evaluate(double x);
    void vertex();
    void set_a(double value);
    void set_b(double value);
    void set_c(double value);
    void evaluation(double x_value[], double y_value[], int leng);
    double get_a();
    double get_b();
    double get_c(); 

};




int main()
{
   double value1 =4, value2=6, value3=7;
   double x_values[] = {2, 3, 4, 6, 7, -4};
   double y_values[6] = {};
   int leng = 6;
   string answer = "yes";
   string answer2 = "yes";

   QuadraticPolinomial poly1;
   QuadraticPolinomial poly2(value1, value2, value3);

   poly1.set_a(leng);
   cout<<poly1.get_a()<<endl;
   cout<<poly2.get_a()<<endl;
   while(answer == answer2)
   {
      cout<<"Please provide the coefficient of your quadratic equation"<<endl;
      cin>> value1 >> value2 >> value3;

      poly1.set_a(value1);
      poly1.set_b(value2);
      poly1.set_c(value3);

      poly1.general_formula();
      poly1.evaluation(x_values, y_values, leng);
      poly1.vertex();
      cout<<"\nDo you want to keep using the APP? ";
      cin >> ws;
      getline(cin,answer);
      
   } 

   return 0; 
}

//********************************************* **************** ***************************************************
//*********************************************  Methods Section ***************************************************
//********************************************* **************** ***************************************************

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