#include<stdio.h>
void main()
{
int n,i=2,f=0;
printf("enter number ");
scanf("%d",&n);
while(i<n)
{
 if(n%i==0)
 {
  f=1;
  break;
  }
  i++;
  }
  if(f==0)
  printf("n is prime ");
  else
  printf("n is not prime");
  }
