//WAP to print table up to given numbers
#include<stdio.h>

int main()
{
    int i=1,n;
    
    
    printf("enter the value of n  ");
    scanf("%d",&n);
    while (i<=10)
    {
        
        printf("\n%d * %d =%d",n,i,n*i);
        i++;
        
    }
    return 0;
    
}