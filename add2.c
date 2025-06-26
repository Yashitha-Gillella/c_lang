#include<stdio.h>
int main()
{
int num_1,num_2,num_3,num_4,sum;
printf("Enter first number(negative) : ");
scanf("%d",&num_1);
printf("Enter second number(negative) : ");
scanf("%d",&num_2);
printf("Enter third number(positive) : ");
scanf("%d",&num_3);
printf("Enter fourth number(positive) : ");
scanf("%d",&num_4);
sum=num_1+num_2+num_3+num_4;
printf("sum of all numbers : %d",sum);
return 0;
}