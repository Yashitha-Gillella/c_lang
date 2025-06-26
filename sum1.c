#include<stdio.h>
int main()
{
int a,b,sum;
float c,sum2;
printf("Enter the value of a=");
scanf("%d",&a);
printf("Enter the value of b=");
scanf("%d",&b);
printf("Enter the values of c=");
scanf("%f",&c);
sum=a+b;
sum2=b+c;
printf("The sum of a and b is=%d\n",sum);
printf("The sum of b and c is=%.3f",sum2);
return 0;
}
