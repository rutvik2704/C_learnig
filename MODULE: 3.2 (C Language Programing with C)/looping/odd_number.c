//How many odd numbers are there
#include <stdio.h>  
int main()  
{  
    int i, n, sum=0;  
    printf("Enter any number: ");  
    scanf("%d", &n);  
    for(i=1; i<=n; i++)  
    {  
        if(i % 2 != 0){
        
            printf("this are odd number:%d\n",i);
            sum = n / 2;
        }
         //i=sum;
    }  
    printf("This are odd numbers from 0 to %d:%d", n,sum);  
    return 0;  
}  