#include "Rectangle.h"

class Carpet
{
    private:
        double price_per_SqYard;
        Rectangle dimension;

    public:
        Carpet(){};
        void set_pricePerSqYard(double p);
        void set_dimension(double l, double w);
        Rectangle get_dimension();
        double get_pricePerSqYard();
        double compute_total_price();
};