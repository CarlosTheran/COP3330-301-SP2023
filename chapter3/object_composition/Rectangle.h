class Rectangle
{
    private:
        double length;
        double width;

    public:
        Rectangle(){};
        ~Rectangle();
        double perimeter();
        double area();
        void set_length(double l);
        void set_width(double w);
        double get_length();
        double get_width();
};