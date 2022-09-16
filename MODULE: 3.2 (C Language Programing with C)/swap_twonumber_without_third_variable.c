//WAP to swap two numbers without using third variable
#include <stdio.h>
int main()
{
    int x,y;

    printf("enter the value of x:");
    scanf("%d",&x);  //5
    printf("enter the value of y:");
    scanf("%d",&y);  //2
    x = x + y; //5+2=7
    y = x - y; //7-2=5
    x = x - y; //7-5=2
    printf("\n swap value of x:%d",x);//2
    printf("\n swap value of y:%d",y);//5
    return 0;

}