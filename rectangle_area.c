#include<stdio.h>
int main()
{
float length,breadth,area;
printf("Enter length of ractangle:");
scanf("%f",&length);
printf("Enter breadth of ractangle:");
scanf("%f",&breadth);
area=length*breadth;
printf("length of rectangle=%.2f\n",length);
printf("breadth of rectangle=%.2f\n",breadth);
printf("area of rectangle=%.2f",area);
return 0;
}