/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Chatflow Wireless monthly bill calculator
*/
#include "stdio.h"
#define TAX 0.0525
#define FLAT_RATE 39.99
#define ADD_RATE 0.40
void generate_bill(double, double, double);
void main()
{
    double weekday_mins, night_mins, weekend_mins;
    printf("\nEnter weekday minutes - ");
    scanf("%lf", &weekday_mins);
    printf("\nEnter night minutes - ");
    scanf("%lf", &night_mins);
    printf("\nEnter weekday minutes - ");
    scanf("%lf", &weekend_mins);
    generate_bill(weekday_mins, night_mins, weekend_mins);
}

void generate_bill(double weekday_mins,double night_mins,double weekend_mins)
{
    double cost_no_tax, avg, cost_tax;
    
    if(weekday_mins <= 2400)        // Assume 4 weeks in a month
    {
        cost_no_tax = (FLAT_RATE * 4);
        avg = (cost_no_tax / 2400);
    }
    else
    {
        cost_no_tax = (FLAT_RATE * 4) + ((2400 - weekday_mins) * ADD_RATE);
        avg = (cost_no_tax / 2400);
    }
    
    cost_tax = cost_no_tax + (cost_no_tax * TAX);
    
    printf("\n Monthly Bill");
    printf("\n Week Day Minutes - %.0f mins", weekday_mins);
    printf("\n Night Minutes - %.0f mins", night_mins);
    printf("\n Week End Minutes - %.0f mins", weekend_mins);
    printf("\n Bill Without Tax - %.0f ", cost_no_tax);
    printf("\n Average cost of a minute - %.0f ", avg);
    printf("\n Bill With Tax (%.2f%%) - %.0f\n", (TAX * 100), cost_tax);
}
