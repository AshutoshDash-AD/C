#include<stdio.h>

int main()
{
  printf("Enter a no. to find sum of its digits\n");
  int n,sum=0;
  scanf("%d",&n);
  int num=n;

  while(n!=0)
  {
    sum+=n%10;
    n/=10;
  }

  printf("Sum of digits of %d is %d\n",num,sum);
  
  return 0;
}	