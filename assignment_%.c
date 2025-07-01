#include<stdio.h>
int main()
{
int a,b;
printf("Enter value of a:");
scanf("%d",&a);
printf("Enter value of b:");
scanf("%d",&b);
a%=b;
printf("Value of a after division(remainder):%d",a);
return 0;
}