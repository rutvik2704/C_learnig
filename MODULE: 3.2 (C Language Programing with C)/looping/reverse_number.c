//WAP to print number in reverse order 
#include<stdio.h>

int main()
{
    int n,rev = 0;
    printf("enter the value of n:");
    scanf("%d",&n);
    while (n != 0)
    {
        rev = rev * 10;
        rev = rev + n % 10;
        n = n / 10;
    }
    printf("reverse of number is = %d\n",rev);
    
    return 0;
}