//WAP to print factorial of given number
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("factorial of %d is %d",n,fact);
    return 0;
}