#include<stdio.h>
int main()
{
    int i, count=0;
    char str[100], ch;
    printf("Enter the String: ");
    gets(str);
    printf("Enter any character (present in string) to : ");
    scanf("%c", &ch);
    for(i=0; str[i]!='\0'; i++)
    {
        if(ch==str[i])
            count++;
    }
    printf("\nFrequency of %c = %d", ch, count);
    printf("\n %c occurs %d times in %s", ch, count, str);
    return 0;
}