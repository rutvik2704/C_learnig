//WAP to reverse a string and check that the string is palindrome or not #include <stdio.h>
#include <string.h>
#include <stdio.h>
  
int main()
{
   char inputArray[100], reversedArray[100];
 
   printf("Enter the string for palindrome check \n");
   scanf("%s", inputArray);
   /* Copy input string and reverse it*/
   strcpy(reversedArray, inputArray);
   /* reverse string */
   strrev(reversedArray);
   /* Compare reversed string with inpit string */
   if(strcmp(inputArray, reversedArray) == 0 )
      printf("%s is a palindrome.\n", inputArray);
   else
      printf("%s is not a palindrome.\n", inputArray);
       
   
   return 0;
}