#include<stdio.h>
void main()
{
 char ch;
 int c=0,w=0,l=0;
 printf("enter character");
 scanf("%c",&ch);
 while(ch !='*')
 {
 ch=getchar();
 if(ch==' '||ch=='\t' ||ch=='\n')
 w++;
 if(ch=='\n')
 l++;
 
 c++;
 }
 printf("\n total number of character:%d",c);
 printf("\n total number of word:%d",w);
 printf("\n total number of line:%d",l);
