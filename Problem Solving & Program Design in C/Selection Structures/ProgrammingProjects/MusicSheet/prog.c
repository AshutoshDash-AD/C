/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Music Sheet Bill Calculator
*/
#define SALES_TAX 0.05
#include "stdio.h"
void main()
{
	int choice;
	double total_purchases, discount_price, discount, discounted_total, tax, total;
	printf("\n1. Teacher"); 
	printf("\n2. Non-teacher");
	printf("\nSelect a choice");
	scanf("%d", &choice);
	printf("\nTotal purchases - $\n");
	scanf("%lf", &total_purchases);
	if(choice == 1)
	{
		if(total_purchases > 100)
			discount =  0.12;
		else
			discount =  0.10;
		discount_price = total_purchases * discount;
		discounted_total = total_purchases - discount_price;
		tax = discounted_total * SALES_TAX;
		total = discounted_total + tax;
		printf("\nTotal purchases %5c $%.2f", ' ', total_purchases);
		printf("\nTeacher's discount (%d%%) %5c $%.2f", (int)(discount * 100), ' ', discount_price);
		printf("\nDiscounted total %5c $%.2f", ' ', discounted_total);
		printf("\nTotal %5c $%.2f\n", ' ', total);
	}
	else if(choice == 2)
	{
		tax = total_purchases * SALES_TAX;
		total = total_purchases + tax;
		printf("\nTotal purchases \t\t $%.2f", total_purchases);
		printf("\nSales tax (%d%%) \t\t $%.2f", (int)(SALES_TAX * 100), tax);
		printf("\nTotal \t\t $%.2f\n", total);
	}
	else
		printf("\n Wrong Choice");
}
