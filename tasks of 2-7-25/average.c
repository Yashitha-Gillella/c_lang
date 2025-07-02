#include<stdio.h>
int main()
{
float n1,n2,n3,n4,n5,s,avg;
printf("Enter number 1:");
scanf("%f",&n1);
printf("Enter number 2:");
scanf("%f",&n2);
printf("Enter number 3:");
scanf("%f",&n3);
printf("Enter number 4:");
scanf("%f",&n4);
printf("Enter number 5:");
scanf("%f",&n5);
s=n1+n2+n3+n4+n5;
avg=s/5.0;
printf("Average of 5 numbers is: %.2f",avg);
return 0;
}
