#include<stdio.h>
int main()
{
int a,b,c,d,st1,st2;
printf("Enter a value:");
scanf("%d",&a);
printf("Enter b value:");
scanf("%d",&b);
printf("Enter c value:");
scanf("%d",&c);
printf("Enter d value:");
scanf("%d",&d);
st1=a<b;
st2=c>d;
printf("St1 is:%d\n",st1);
printf("St2 is:%d\n",st2);
printf("St1 && st2:%d\n",(st1)&&(st2));
return 0;
}