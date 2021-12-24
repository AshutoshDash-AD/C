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
  printf("Enter a no. to print its Prime factors:\n");
  int n;
  scanf("%d",&n);
  if(isPrime(n))
     printf("%d",n);

  for(int i=2;i<=n/2;i++)
  {
    if(isPrime(i) && n%i==0)
       printf("%d ",i);
  }

  return 0;
}	