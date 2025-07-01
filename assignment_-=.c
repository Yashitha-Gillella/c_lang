#include<stdio.h>
int main()
{
int a,b;
printf("Enter value of a:");
scanf("%d",&a);
printf("Enter value of b:");
scanf("%d",&b);
b-=a;
printf("Value of b after sub:%d",b);
return 0;
}