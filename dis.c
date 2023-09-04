#include<stdio.h>
int main()
{
int n,i;
char ch;
printf("enter character");
scanf("%c",&ch);
printf("enter the limit");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
printf("%c",ch++);
}
}
