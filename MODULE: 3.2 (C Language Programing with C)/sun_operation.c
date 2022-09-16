/*WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo)*/
 #include <stdio.h>
  int main()
 {
    int a ,b ,sun,sub,mul,div,mod;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    sun = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    printf ("\nthis is Addition %d",sun);
    printf ("\nthis is subtraction %d",sub);
    printf ("\nthis is multiplication %d",mul);
    printf ("\nthis is division %d",div);
    printf ("\nthis is modulo %d",mod);
    return 0;

 }