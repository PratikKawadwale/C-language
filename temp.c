#include<stdio.h>
void main()
{
float f,c,k;
printf("enter temperature in fahrenheit=");
scanf("%f",&f);
c=5/9*(f-32);
printf("celcius=%f",c);
k=c+273.15;
printf("kelvin = %f",k);
}

