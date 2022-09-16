//Write a program you have to make a summation of first and last Digit.
#include<stdio.h>
int main()
{
    int n,sum =0,first,last;
    printf("enter the value of n:");
    scanf("%d",&n);
    
        last = n % 10;
       while (n>=10)
       {
        n /= 10;
       }
       
        first = n;
        sum = first + last;

    printf("sum of individual digits is %d",sum);
    return 0;
}