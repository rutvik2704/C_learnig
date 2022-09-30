//Write a program to find out the max number from given array using function
#include<stdio.h>

int main()
{
    int a[7] = {34,56,21,43,13,90,6};
    int max = a[0];
    for (int i=0;i<7;i++)
    {
        if(a[i]>max){
            max = a[i];
        }
    }
    printf("The largest(max) element is of the array %d",max);

    return 0;
}