#include<stdio.h>

int isPrime(int n)
{
  int cnt=1;
  for(int i=2;i<=n;i++)
  {
    if(n%i==0)
	cnt++;
  }
  if(cnt==2)
     return 1;
  else
     return 0;
}
	     
int main()
{
  printf("Enter a no.\n");
  int n;
  scanf("%d",&n);
  
  printf("Prime no.s upto %d are ",n);
  for(int i=2;i<=n;i++)
  {
    if(isPrime(i))
       printf("%d ",i);
  }

  return 0;
}	