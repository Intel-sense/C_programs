#include<stdio.h>
void main()
{
char day[20];
int date,month,year;
printf("Enter day followed by date in dd-mm-yyyy");
scanf("%s %d-%d-%d",day,&date,&month,&year);
printf("day %s \n",day);
printf("date %d \n",date);
printf("month %d \n",month);
printf("year %d \n",year);
}

