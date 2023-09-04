#include<stdio.h>
#include<ctype.h>
void main()
{
char ch;

int d=0,a=0;
printf("enter character");
while(ch ! ="*")
{
 ch= getchar(ch);
 //if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
 if(is alpha(ch))
 a++;
 //if(ch>=48 && ch<=57)
 if (is digit(ch))
 d++;
 }
 printf("\n alphabates=%d \t digit=%d",a,d);
 }
