//Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age 
#include<stdio.h>
#include<string.h>

struct Emp
{
    int emp_no;
    char emp_name[200];
    char address[200];
    int age;
};

int main()
{
    struct Emp e1 = {101,"rutvik","surat",20};
    struct Emp e2 = {102,"jenish","surat",22};
    struct Emp e3 = {103,"jaydeep","surat",23};
    struct Emp e4 = {104,"chaitanya","surat",25};
    struct Emp e5 = {105,"vivet","surat",19};
    printf("%d %s %s % d\n",e1.emp_no,e1.emp_name,e1.address,e1.age);
    printf("%d %s %s % d\n",e2.emp_no,e2.emp_name,e2.address,e2.age);
    printf("%d %s %s % d\n",e3.emp_no,e3.emp_name,e3.address,e3.age);
    printf("%d %s %s % d\n",e4.emp_no,e4.emp_name,e4.address,e4.age);
    printf("%d %s %s % d\n",e5.emp_no,e5.emp_name,e5.address,e5.age);
    return 0;
}