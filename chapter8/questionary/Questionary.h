class Questionary
{
   private:
    int number_questions;
    char *correct_answer;
    char *student_answer;

   public:
   Questionary(){};
   Questionary(int num_quest);
   ~Questionary();
   Questionary(const Questionary &obj);
   void set_number_of_questions(int num_quest);
   void set_correct_answers();
   void set_student_answers();
   int get_number_of_questions();
   void print_correct_answers();
   void print_student_answers(); 
};
