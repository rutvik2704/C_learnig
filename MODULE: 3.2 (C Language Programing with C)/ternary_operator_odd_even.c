//WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
    int a;
    printf("enter the value");
    scanf("%d",&a);

    (a % 2 == 0 ) ? printf("you are even no"):printf("you are odd no");
    //(a >= 18) ? printf("you are eligible") : printf("you are not eligible");
    return 0;
}