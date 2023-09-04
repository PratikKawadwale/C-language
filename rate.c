#include<stdio.h>
int main()
{
 int q1,q2,q3;
 float r1,r2,r3,t,d;
 printf("enter quantity and rate for first item");
 scanf("%d%f",&q1,&r1);
 printf("enter quantity and rate for second item");
 scanf("%d%f",&q2,&r2);
 printf("enter quantity and rate for third item"); 
 scanf("%d%f",&q3,&r3);
 t=(q1*r1)+(q2*r2)+(q3*r3);
 if(t>=1000)
 d=t*20/100;
 else
 if(t>=500 && t<=999)
 d=t*10/100;
 else
 if(t>=100 && t<=499)
 d=t*8/100;
 else
 d=0;
 printf("total amount of thre item=%f",t);
 printf("discount=%f",d);
 printf("final amount =%f",t-d);
 } 
