/*1
  10
  101
  1010
  10101*/
  #include<stdio.h>
  int main(){
    int n,i,j;
    printf("enter the value of n:");
    scanf("%d ",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
    return 0;
  }