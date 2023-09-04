//accept two integers from the user and interchange tem display the interchange number
#include<stdio.h>
void main()
{
int a,b,d,t;
printf("enter two number");
scanf("%d%d",&a,&b);
printf("befor interchang a=%d \t b=%d ",a,b);
t=a; // a=a+b;
a=b; // b=a-b;
b=t;  // a=a-b;
printf("after interchang a=%d \t b=%d",a,b);
}
