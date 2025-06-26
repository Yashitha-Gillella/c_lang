#include<stdio.h>
void main()
{
float total,perc,art,fees,roll;
int phy,che,math,comp,eng;
printf("Enter roll number:");
scanf("%f",&roll);
printf("Enter total:");
scanf("%f",&total);
printf("Enter percentage:");
scanf("%f",&perc);
printf("Enter fees:");
scanf("%f",&fees);
printf("Enter art marks:");
scanf("%f",&art);
printf("Enter physics marks:");
scanf("%d",&phy);
printf("Enter chemistry marks:");
scanf("%d",&che);
printf("Enter mathematics marks:");
scanf("%d",&math);
printf("Enter computer marks:");
scanf("%d",&comp);
printf("Enter english marks:");
scanf("%d",&eng);
printf("Roll Number:%.3f\n",roll);
printf("Total:%.2f\n",total);
printf("percentage:%.2f\n",perc);
printf("Fees:%.3f\n",fees);
printf("Art marks:%.1f\n",art);
printf("Physics marks:%d\n",phy);
printf("chemistry marks:%d\n",che);
printf("Mathematics marks:%d\n",math);
printf("Computer marks:%d\n",comp);
printf("English marks:%d\n",eng);
}