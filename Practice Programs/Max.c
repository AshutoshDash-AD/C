#include<stdio.h>

int main()
{
  printf("Enter three numbers:\n");
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  
  if(a>b)
  {
    if(a>c)
       printf("Greatest no. is %d\n",a);
    else 
       printf("Greatest no. is %d\n",c);
  }
  else
  {
    if(b>c)
      printf("Greatest no. is %d\n",b);
    else
        printf("Greatest no. is %d\n",c);
  }

  return 0;
}	