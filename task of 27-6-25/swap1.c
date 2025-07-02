#include<stdio.h>
int main()
{
int num1,num2,temp;
printf("Enter number 1:");
scanf("%d",&num1);
printf("Enter number 2:");
scanf("%d",&num2);
temp=num1;
num1=num2;
num2=temp;
printf("num1 value after swapping:%d\n",num1);
printf("num2 value after swapping:%d",num2);
return 0;
}