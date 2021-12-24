#include<stdio.h>
#include<limits.h>

int main()
{
  int max1=INT_MIN,min1=INT_MAX,max2=INT_MIN,min2=INT_MAX,n,i;
  printf("Enter a no.\n");
  
  do{

  scanf("%d",&n);
  if(n>max1)
  {
     max2=max1;
     max1=n;
  }
  else if(n>max2)
     max2=n;

  if(n<min1)
  {
     min2=min1;
     min1=n;
  }
  else if(n<min2)
     min2=n;

  printf("Do you want to continue (1/0) ?: ");
  scanf("%d",&i);

  }while(i!=0);
  
  printf("%d is Maximum no., %d is second maximum no., %d is Minimum no. and %d is second minimum no.\n",max1,max2,min1,min2);

  return 0;
}	