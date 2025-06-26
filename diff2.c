#include<stdio.h>
int main()
{
int num_1,num_2,num_3,num_4,diff;
printf("Enter first number(positive) : ");
scanf("%d",&num_1);
printf("Enter second number(negative) : ");
scanf("%d",&num_2);
printf("Enter third number(negative) : ");
scanf("%d",&num_3);
printf("Enter fourth number(positive) : ");
scanf("%d",&num_4);
diff=num_1-num_2-num_3-num_4;
printf("difference of all numbers : %d",diff);
return 0;
}