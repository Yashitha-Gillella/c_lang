#include<stdio.h>
int main()
{
int num_1,num_2,num_3,num_4, prod;
printf("Enter first number : ");
scanf("%d",&num_1);
printf("Enter second number : ");
scanf("%d",&num_2);
printf("Enter third number : ");
scanf("%d",&num_3);
printf("Enter fourth number : ");
scanf("%d",&num_4);
prod=num_1*num_2*num_3*num_4;
printf("product of all numbers : %d",prod);
return 0;
}