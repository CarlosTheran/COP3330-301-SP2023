#include "Questionary.h"
#include <iostream>

using namespace std;

int main()
{
    int num_quest = 3;

    Questionary Exam1(3);
   
    cout<<"EXAM1"<<endl;
    Exam1.set_correct_answers();
    Exam1.set_student_answers();

    cout<<"CORRECT ANSWERS: "<<endl;
    Exam1.print_correct_answers();

    cout<<"Copy Exam1 into Exam2"<<endl;
    Questionary Exam2;
    Exam2 = Exam1;     //shallow copy

    cout<<"EXAM2"<<endl;
    Exam2.set_correct_answers();
    Exam2.set_student_answers();

    cout<<"CORRECT ANSWERS Exam1: "<<endl;
    Exam1.print_correct_answers();
    cout<<"CORRECT ANSWERS Exam2: "<<endl;
    Exam2.print_correct_answers();

    Questionary Exam3(Exam2);      //deep copy
    cout<<"EXAM3"<<endl;
    Exam3.set_correct_answers();
    Exam3.set_student_answers();

    cout<<"CORRECT ANSWERS Exam2: "<<endl;
    Exam2.print_correct_answers();
    cout<<"CORRECT ANSWERS Exam3: "<<endl;
    Exam3.print_correct_answers();
}