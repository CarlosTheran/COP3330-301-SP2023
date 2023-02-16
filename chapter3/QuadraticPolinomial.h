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