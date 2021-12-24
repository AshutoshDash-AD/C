#include<stdio.h>
#include<math.h>

int main()
{
  printf("Enter a no. to check if its an Armstrong no. or not: ");
  int n,r=0,sum=0;
  scanf("%d",&n);
  int num=n;

  while(n!=0)
  {
    r=n%10;
    sum+=(int)pow(r,3);
    n/=10;
  }

  if(num==sum)
     printf("%d is an Armstrong no.\n",num);
  else
     printf("%d is not an Armstrong no.\n",num);
  
  return 0;
}	