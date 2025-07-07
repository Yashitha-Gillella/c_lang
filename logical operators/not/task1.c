#include<stdio.h>
int main()
{
int n1,n2,n;
printf("Enter number 1:");
scanf("%d",&n1);
printf("Enter number 2:");
scanf("%d",&n2);
n=(n1<n2);
printf("The statement n(n1<n2) is:%d\n",n);
printf("not of n is:%d",!n);
return 0;
} 