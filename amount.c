//a cashiher has currency notes of demonitation 1 ,5 and 10 accept the amount to be withdrow from the user and print the total number of currency notes of each demoniation the cashier will have to give
#include<stdio.h>
void main()
{
 int amount, one,five,ten;
 printf("enter amount=");
 scanf("%d",&amount);
 ten=amount/10;
 amount=amount%10;
 five=amount/5;
 amount=amount%5;
 one=amount;
 printf("notes of 10= %d",ten);
 printf("notes of 5= %d",five);
 }
