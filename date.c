#include<stdio.h>
void main()
{
int dd,mm,yy;
printf("enter day,month and year");
scanf("%d%d%d",&dd,&mm,&yy);
if(mm=4|| mm==6||mm==9||mm==11)
{
 if(dd>=1 && dd<=30)
 {
  printf("date is valid");
 }
 else
 {
  printf("date is invalid");
 }
 }
 else
 {
  if(mm==1 || mm==3|| mm==5|| mm==7|| mm==8|| mm==10|| mm==12)
  {
   if(dd>=1 && dd<=31)
   {
    printf("date is valid");
    }
 else 
 {
  printf("date is invalid");
 }
 }
 else
 if(mm==2)
 {
 if(yy%4==0)
 {
  if(dd>=1 && dd <=29);
  {
   printf("date is valid");
   }
   }
 else 
   if(dd>=1 && dd<=28)
   {
    printf("date is valid");
    }
    else
     {
      printf("date is invalid");
      }
      }
      }
 }
