#include<stdio.h>

int main()
{
  int n,p=1;
  
  printf("Enter a no. to find its factorial:\n");
  
  scanf("%d",&n);
  
  for(int i=1;i<=n;i++)
      p*=i;
  
  printf("Factorial of %d is %d\n",n,p);
  
  return 0;
}	