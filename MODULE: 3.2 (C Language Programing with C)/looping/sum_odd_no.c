//Sum of odd numbers
#include <stdio.h>  
int main()  
{  
    int i, n, sum=0;  
    printf("Enter any number: ");  
    scanf("%d", &n);  
    for(i=1; i<=n; i++)  
    {  
        if(i % 2 != 0)
        sum += i;  
    }  
    printf("Sum of all odd numbers from 0 to %d: %d", n, sum);  
    return 0;  
}  