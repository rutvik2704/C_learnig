//WAP to print Fibonacci series up to given numbers 
#include<stdio.h>

int main()
{
    int i,n,a=0,b=1,c;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    
    for(i=0;i<n;i++)
    {
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }
    return 0;
}