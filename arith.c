#include<stdio.h>
int main()
{
int a,b;
char ch;
printf("\n menu");
printf("\n addition");
printf("\n substraction");
printf("\n multiplication");
printf("\n division");
printf("\n enter your choice");
scanf("%d%d",&a,&b);
switch (ch)
{
 case'+' : printf("\n addition=%d",a+b);
          break;
case'-' : printf("\n substraction=%d",a-b);
          break;
case'*' : printf("\n multiplication=%d",a*b);
         break;
case'/' : printf("\n division=%d",a/b);
          break;
default: printf("invalid choice");
}
}          
