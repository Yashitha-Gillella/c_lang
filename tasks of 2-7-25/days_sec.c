#include<stdio.h>
int main()
{
int days,hours,min,sec;
printf("Enter number of days:");
scanf("%d",&days);
hours=days*24;
min=days*24*60;
sec=days*24*60*60;
printf("Number of days:%d\n",days);
printf("Number of hours:%d\n",hours);
printf("Number of minutes:%d\n",min);
printf("Number of seconds:%d\n",sec);
return 0;
}