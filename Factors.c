#include<stdio.h>

int main()
{
  printf("Enter a no. to print its factors:\n");
  int n;
  scanf("%d",&n);
  
  printf("1 ");
  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0)
	printf("%d ",i);
  }
  printf("%d ",n);
  return 0;
}	