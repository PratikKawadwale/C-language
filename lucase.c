#include<stdio.h>
void main()
{
 char ch;
 printf("enter character=");
 scanf("%c",&ch);
 if(ch>=48 && ch==57)
 printf("it is a digit");
 else
 if(ch>=97 && ch<=122)
 printf("lower case character");
 else
 if(ch<=65 && ch>=90)
 printf("upper case character");
 }
