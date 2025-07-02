#include<stdio.h>
int main()
{
float len,wid,area,peri;
printf("Enter length of rectangle:");
scanf("%f",&len);
printf("Enter width of rectangle:");
scanf("%f",&wid);
area=len*wid;
peri=2*(len+wid);
printf("Area of rectangle:%.2f\n",area);
printf("Perimeter of rectangle:%.2f",peri);
return 0;
}