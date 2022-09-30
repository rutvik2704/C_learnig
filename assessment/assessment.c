#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,flag;
    int  ch,consonants,vowels,digits;
    char s1[100] ;
    char s2[100];
    int  count=0;
    char  cha;
    printf("Main Menu\n");
    printf("   1.reverse a string\n");
    printf("   2.Concatenation\n");
    printf("   3.Palindrome\n");
    printf("   4. Copy a string\n");
    printf("   5.Length of the string\n");
    printf("   6.Frequency of character in s string\n");
    printf("   7.Find number of vowels and consonants\n");
    printf("   8.Find number of blank spaces and digits\n");
    printf("   9.exit\n");
    
    printf("enter the string:");
    gets(s1);
    printf("enter another string (enter any value if your choice is 2,4):- ");
    gets(s2);
    printf("Enter your choice: ");
    scanf("%d", &ch);
    
   
    
   

    switch(ch)
    {
    case 1:
    strrev(s1);
    break;
    
    case 2:
    strcat(s1,s2);
    puts(s1);
    break;

    case 3:
     l = strlen(s1);
    
    for(i=0;i < l ;i++){
        if(s1[i] != s1[l-i-1]){
            flag = 1;
            break;
           }
        }
    
    if (flag==1) {
        printf("%s is not a palindrome", s1);
    }    
    else {
        printf("%s is a palindrome", s1);
    }
    break;

    case 4:
    strcpy(s1,s2);
    printf("%s",s1);
    break;
    
    case 5:
    l = strlen(s1);
    printf("%d",l);
    break;

    case 6: 
    printf("Enter any character (present in string) to : ");
    scanf("%c", &cha);
    for(i=0; s1[i]!='\0'; i++)
    {
        if(ch==s1[i])
            count++;
    }
    printf("\nFrequency of %c = %d", cha, count);
    break;
    
    case 7:
    vowels =  0 ;
    consonants=0;
    for (i = 0; s1[i] != '\0'; i++) {
         cha = s1[i];
        if (cha == 'a' || cha == 'e'
            || cha == 'i' || cha == 'o'
            || cha == 'u' || cha == 'A'
            || cha == 'E' || cha == 'I'
            || cha == 'O' || cha == 'U'){
            vowels++;
            }
        else if (cha == ' '){
            continue;}
 
        else if(cha>='a' && cha<='z') {
            consonants++;}
    }
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    break;

    case 8:
    digits = 0;
    count = 0;
    for (i = 0; s1[i] != '\0'; i++) {
         cha = s1[i];
        if (cha == ' ')
            count++;
        else if (cha>='0' && cha<='9')
            digits++;
    }
    printf("\nspaces: %d", count);
    printf("\ndigits: %d", digits);
    break;


    case 9:
    break;

    default:
     printf("enter correct value");
           break;

    } 
    return 0;
}