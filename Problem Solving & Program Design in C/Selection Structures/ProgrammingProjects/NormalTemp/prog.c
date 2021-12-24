/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Calculate Normal boiling point
*/
#include "stdio.h"
int within_x_percent(double, double, double);
void main()
{
	double boiling_point;
	printf("\n Enter observed boiling point of a substance - ");
	scanf("%lf", &boiling_point);
	
	if((within_x_percent(100, boiling_point, 5) == 1))
	{
		printf("\n Water\n");
	}
	else if((within_x_percent(357, boiling_point, 5) == 1))
	{
		printf("\n Mercury\n");
	}
	else if((within_x_percent(1187, boiling_point, 5) == 1))
	{
		printf("\n Copper\n");
	}
	else if((within_x_percent(2193, boiling_point, 5) == 1))
	{
		printf("\n Silver\n");
	}
	else if((within_x_percent(2660, boiling_point, 5) == 1))
	{
		printf("\n Gold\n");
	}
	else
		printf("\n Substance unknown\n");
}

int within_x_percent(double ref, double data, double x)
{
	if(data >= ((ref - ((x/100) * ref))) && (data <= (ref + ((x/100) * ref))))
		return 1;
	return 0;
}
