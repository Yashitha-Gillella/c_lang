#include<stdio.h>
int main()
{
int num1,num2,stmt;
printf("Enter value of num1:");
scanf("%d",&num1);
printf("Enter value of num2:");
scanf("%d",&num2);
stmt=(num1<=num2);
printf("The statement stmt(num1<=num2) is:%d\n",stmt);
printf("not of stmt is:%d",!stmt);
return 0;
} 