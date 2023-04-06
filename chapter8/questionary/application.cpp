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