//WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);

    if(year % 4 == 0)
    {
        printf("This is leap year");
    }
    else{
        printf("This is not leap year");
    }
}