#include "Carpet.h"

void Carpet::set_pricePerSqYard(double p)
{
    price_per_SqYard = p;
}

void Carpet::set_dimension(double l, double w)
{
  dimension.set_length(l);
  dimension.set_width(w);

}

Rectangle Carpet::get_dimension()
{
    return dimension;
}

double Carpet::get_pricePerSqYard()
{
    return price_per_SqYard;
}

double Carpet::compute_total_price()
{
    return (dimension.area()*price_per_SqYard);
}

