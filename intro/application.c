#include<stdio.h>
int main()
{
char name[30],md[30],trainer[30],inst[30],fath[30],moth[30],add[50],city[30],course[30],dob[15];
long long int ph;
printf("APPLICANT  DETAILS \n");
printf("Enter name :");
scanf("%s",&name);
printf("Enter date of birth :");
scanf("%s",&dob);
printf("Enter father name :");
scanf("%s",&fath);
printf("Enter mother name :");
scanf("%s",&moth);
printf("Enter contact number :");
scanf("%lld",&ph);
printf("Enter  address :");
scanf("%s",&add);
printf("Enter city :");
scanf("%s",&city);
printf("INSTITUTE  DETAILS \n");
printf("Enter name of institute :");
scanf("%s",&inst);
printf("Enter name of managing director :");
scanf("%s",&md);
printf("Enter course details :");
scanf("%s",&course);
printf("Enter trainer name :");
scanf("%s",&trainer);
printf("--------------------------------END-----------------------------------\n");
printf("CHECK  DETAILS\n");
printf("Name  : %s\n",name);
printf("Date of birth : %s\n",dob);
printf("Father name : %s\n",fath);
printf("Mother name : %s\n",moth);
printf("Contact number : %lld\n",ph);
printf("Address : %s\n",add);
printf("City : %s\n",city);
printf("Institute name : %s\n",inst);
printf("Managing director : %s\n",md);
printf("Course : %s\n",course);
printf("Trainer name : %s",trainer);
return 0;
}
