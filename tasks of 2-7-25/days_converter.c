#include<stdio.h>
int main()
{
	int days,mon_rem,week_rem,weeks,months,years,days_rem;
	printf("Enter the number of days:");
	scanf("%d",&days);
	years=days/365;
	mon_rem=days%365;
	months=mon_rem/30;
	week_rem=mon_rem%30;
	weeks=week_rem/7;
	days_rem=week_rem%7;
	printf("Number of years:%d\n",years);
	printf("Number of months:%d\n",months);
	printf("Number of weeks:%d\n",weeks);
	printf("total number of days:%d\n",days_rem);
	return 0;
}