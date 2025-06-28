//fahrenheit to celsius and viceversa
#include<stdio.h>
int main()
{
float c1,f1,c2,f2;
printf("Enter a celsius value:");
scanf("%f",&c1);                                                                    
printf("Enter a fahrenheit value:");
scanf("%f",&f1);
f2=(c1*9/5)+32;
c2=(f1-32)*(5.0/9);
printf("Intial celsius value:%.2f\n",c1);
printf("Intial fahrenheit value:%.2f\n",f1);
printf("The celsius value converted to fahreheit:%.2f\n",f2);
printf("The fahrenheit value converted to celsius value:%.2f\n",c2);
return 0;
}