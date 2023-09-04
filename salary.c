#include<stdio.h>
void main()
{
 float sal,tax,hno,da,tsal;
 printf("enter salary");
 scanf("%f",&sal);
 tax=sal*0.05;
 hno=sal*0.10;
 tsal=sal+hno+da+tax;
 printf("tax=%f",tax);
 printf("\n hno=%f",hno);
 printf("\n da=%f",da);
 printf("\n total salary=%f",tsal);
 }
