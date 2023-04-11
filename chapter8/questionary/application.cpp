#include "Questionary.h"
#include <iostream>

using namespace std;

Questionary::Questionary(int num_quest)
{
    number_questions = num_quest;
    student_answer = new char[num_quest];
    correct_answer = new char[num_quest];
}

Questionary::~Questionary()
{
 delete[] student_answer;
 delete[] correct_answer;

 student_answer = nullptr;
 correct_answer = nullptr;
}

Questionary::Questionary(const Questionary &obj)
{
  number_questions = obj.number_questions;
  student_answer = new char[number_questions];
  correct_answer = new char[number_questions]; 

  for(int index=0; index<number_questions; index++)
  {
    student_answer[index] = obj.student_answer[index];
    correct_answer[index] = obj.student_answer[index];
  }
}

void Questionary::set_number_of_questions(int num_q)
{
  number_questions = num_q;
}

void Questionary::set_correct_answers()
{
  cout<<"Set the correct answers: "<<endl;
  for(int index=0;index<number_questions;index++)
  {
    cout<<"\nWrite the correct answer for question # "<<index+1<<": "<<endl;
    cin >> correct_answer[index];
  }
}

void Questionary::set_student_answers()
{
  cout<<"Set the correct answers: "<<endl;
  for(int index=0;index<number_questions;index++)
  {
    cout<<"\nWrite the student answer for question # "<<index+1<<": "<<endl;
    cin >> student_answer[index];
  }
}

int Questionary::get_number_of_questions()
{
  return number_questions;
}

void Questionary::print_correct_answers()
{
  for(int index=0; index<number_questions; index++)
  {
    cout<<"Question# "<<index+1<<": "<<correct_answer[index]<<endl;
  }
}

void Questionary::print_student_answers()
{
  for(int index=0; index<number_questions; index++)
  {
    cout<<"Question# "<<index+1<<": "<<student_answer[index];
  }
}