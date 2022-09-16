//WAP to find simple interest (SI = principle * time * rate / 100 )
#include<stdio.h>
int main()
{
    float si,pr,time,rate;
    printf("enter the value of principle(amount):");
    scanf("%f",&pr);

    printf("enter the value of time:");
    scanf("%f",&time);

    printf("enter the value of rate:");
    scanf("%f",&rate);

    si = pr * time * rate /100 ;

    printf("simple interest : %2f",si);

    return 0;

}