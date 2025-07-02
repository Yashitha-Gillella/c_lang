#include<stdio.h>
int main()
{
int divd,divs;
float quo,rem;
printf("Dividend: ");
scanf("%d",&divd);
printf("Divisor: ");
scanf("%d",&divs);
quo=divd/divs;
rem=divd%divs;
printf("Quotient of division  is: %.2f\n",quo);
printf("Reminder of division is: %.2f",rem);
return 0;
}