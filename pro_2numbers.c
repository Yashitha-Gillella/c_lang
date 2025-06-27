#include<stdio.h>
int main()
{
float num1,num2,pro;
printf("Enter number 1: ");
scanf("%f",&num1);
printf("Enter number 2: ");
scanf("%f",&num2);
pro=num1*num2;
printf("First number=%.2f\n",num1);
printf("Second number=%.2f\n",num2);
printf("Sum of two numbers=%.2f",pro);
return 0;
}