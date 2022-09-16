//Write a program make a summation of given number
#include<stdio.h>
int main()
{
    int n,rem,sum =0;
    printf("enter the value of n:");
    scanf("%d",&n);
    while (n != 0)
    {
        rem = n % 10;
        sum = sum +rem;
        n /= 10;
    }
    printf("sum of individual digits is %d",sum);
    return 0;
}