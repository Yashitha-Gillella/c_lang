#include<stdio.h>
int main()
{
float num1,num2,sum;
printf("Enter number 1: ");
scanf("%f",&num1);
printf("Enter number 2: ");
scanf("%f",&num2);
sum=num1+num2;
printf("First number=%.2f\n",num1);
printf("Second number=%.2f\n",num2);
printf("Sum of two numbers=%.2f",sum);
return 0;
}