#include<stdio.h>

int main()
{
  printf("Enter a no. to check if its a Pallindrome no. or not: ");
  int n,rev=0;
  scanf("%d",&n);
  int num=n;

  while(n!=0)
  {
    rev=(rev*10)+(n%10);
    n/=10;
  }

  if(num==rev)
     printf("%d is a Pallindrome no.\n",num);
  else
     printf("%d is not a Pallindrome no.\n",num);
  
  return 0;
}	