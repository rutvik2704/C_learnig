//WAP to find area of circle, rectangle and triangle 
#include<stdio.h>
int main()
{
    float ci,r,pi=3.14,re,l,b,tr,h;
    printf("enter the value of r:");
    scanf("%f",&r);
    ci = pi * r * r;
    printf("\n area of circle:%f",ci);
    printf("\nenter the value of l :");
    scanf("%f",&l);
    printf("\nenter the value of b :");
    scanf("%f",&b);
    re = l * b;
    printf("\narea of rectangle:%f",re);
    printf("\nenter the value of h :");
    scanf("%f",&h);
    tr = 0.5 * b * h;
    printf("\narea of triangle:%f",tr);
    return 0;
}