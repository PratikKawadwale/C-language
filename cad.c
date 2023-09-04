#include<stdio.h>
int main()
{
 int n[5],*ptr,**ptr;
 printf("enter limit");
 scanf("%d",&n);
 int n[5]={10,20,30,40,50};
 int *p[ ]={n,n+1,n+2,n+3,n+4};
 int **ptr=p;
     **ptr++;
  printf("%d %d %d",ptr - p,*ptr-n,**ptr);
  ++**ptr;
  printf("%d %d %d ",ptr - p,*ptr-n,**ptr);
  }
