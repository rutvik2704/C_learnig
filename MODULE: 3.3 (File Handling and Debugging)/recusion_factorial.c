//WAP to find factorial using recursion
#include<stdio.h>
int Fact(int n)
{
    if (n==1 ||n==0){
        return 1;
    }
    else{
        return n*Fact(n-1);
    }
}
int main()
{
    int f = Fact(5);
    printf("Factotrial is %d\n",f);
    return 0;
}