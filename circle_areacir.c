#include<stdio.h>
int main()
{
int rad;
float cir,area;
printf("Enter radius of circle:");
scanf("%d",&rad);
area=3.14*rad*rad;
cir=2*3.14*rad;
printf("Radius of circle=%d\n",rad);
printf("Area of cicle=%.2f\n",area);
printf("Circumference of circle=%.2f",cir);
return 0;
}