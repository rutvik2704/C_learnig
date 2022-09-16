//WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
    int day, year;
    //convert years into days
    printf("enter the years:");
    scanf("%d",&year);
    day = year *365;
    printf("years %d into day %d",year,day);
    //convert days into years
    printf("\nenter the days:");
    scanf("%d",&day);
    year = day / 365;
    printf("days %d into year %d",day,year);


}
