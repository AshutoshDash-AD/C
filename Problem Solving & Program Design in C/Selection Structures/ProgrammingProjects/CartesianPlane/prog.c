/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - x – y coordinates of a point in the Cartesian Plane
*/
#include "stdio.h"
void main()
{
	double x, y;
	printf("\nEnter x - ");
	scanf("%lf", &x);
	printf("\nEnter y - ");
	scanf("%lf", &y);
	
	if((x > 0) && (y > 0))
	{
		printf("\n ( %.2f,%.2f ) is in quadrant I", x, y);
	}
	else if((x < 0) && (y > 0))
	{
		printf("\n ( %.2f,%.2f ) is in quadrant II", x, y);
	}
	else if((x < 0) && (y < 0))
	{
		printf("\n ( %.2f,%.2f ) is in quadrant III", x, y);
	}
	else if((x > 0) && (y < 0))
	{
		printf("\n ( %.2f,%.2f ) is in quadrant IV", x, y);
	}
	else if((x == 0) && ((y > 0) || (y < 0)))
	{
		printf("\n ( %.2f,%.2f ) is on the X - axis", x, y);
	}
	else if(((x > 0) || (x < 0)) && (y == 0))
	{
		printf("\n ( %.2f,%.2f ) is on the Y - axis", x, y);
	}
	else if((x == 0) && (y == 0))
	{
		printf("\n ( %.2f,%.2f ) is at origin", x, y);
	}
	printf("\n");
}
