class Array
{
private:
     double *ptr;
     int arraySize;
public:
    Array();
    Array(const int size, const double values[]);
    ~Array();
    void print();
    void setValue(double values[]);
    void set_arraySize(int value);
   Array& operator=(const Array &right);
};
