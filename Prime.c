#include<stdio.h>

int main()
{
  printf("Enter a no. to check if it is prime or not:\n");
  int n;
  scanf("%d",&n);
  
  int cnt=1;
  for(int i=2;i<=n;i++)
  {
    if(n%i==0)
	cnt++;
  }
  if(cnt==2)
     printf("%d is a prime no.\n",n);
  else
     printf("%d is not a prime no.\n",n);
  
  return 0;
}	