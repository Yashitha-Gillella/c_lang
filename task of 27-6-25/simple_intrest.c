#include<stdio.h>
int main()
{
int p,t;
float r,si;
printf("Enter principle amount:");
scanf("%d",&p);
printf("Enter time period:");
scanf("%d",&t);
printf("Enter rate of interest:");
scanf("%f",&r);
si=(p*t*r)/100.0;
printf("Principle:%d\n",p);
printf("Time period:%d\n",t);
printf("Rate of interest:%.2f\n",r);
printf("Simple Interest:%.2f",si);
return 0;
}