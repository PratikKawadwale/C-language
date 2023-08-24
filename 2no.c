#include<stdio.h>
int main()
{
    int a,b,*x,*y;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    x=&a;
    y=&b;
    printf("\n addition=%d",*x+*y);
    printf("\n substraction=%d",*x-*y);
    printf("\n multiplication=%d",*x* *y);
    printf("\n division=%d",*x/(*y));
 }
    