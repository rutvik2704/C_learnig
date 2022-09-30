//Write a program of structure employee that provides the following information -print and display empno, empname, address and age
#include<stdio.h>
#include<string.h>

struct Emp
{
    int emp_no;
    char emp_name[20];
    char address[20];
    int age;
};

int main()
{
    struct Emp e1 = {101,"rutvik","surat",20};
    printf("%d %s %s % d\n",e1.emp_no,e1.emp_name,e1.address,e1.age);
    return 0;
}