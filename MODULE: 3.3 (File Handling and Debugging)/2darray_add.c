//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],sum[10][10],sub[10][10],mul[10][10],i,j,r,c;
    printf("Number of rows of matrices to be subtracted : ");
    scanf("%d", &r);

    printf("Number of columns matrices to be subtracted : ");
    scanf("%d", &c);

    printf("Elements of first matrix : \n");

    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
         printf("Enter element a%d%d: ", i + 1, j + 1);
         scanf("%d", &a[i][j]);
        }
    }
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
         printf("%d\t",a[i][j]);         
        }
        printf("\n");
    }
    printf("\n----------------------------------------------------------------\n");
    printf("Elements of second matrix : \n");

    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
         printf("Enter element a%d%d: ", i + 1, j + 1);
         scanf("%d", &b[i][j]);
        }
    }
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
         printf("%d\t",b[i][j]);         
        }
        printf("\n");
    }
    printf("\n--------------------------------------------------------------------\n");
    printf("Addition of two matrices:\n");
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j] = a[i][j] + b[i][j];
         printf("%d\t",sum[i][j]);         
        }
        printf("\n");
    }
    printf("Subtraction of two matrices:\n");
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            sub[i][j] = a[i][j] - b[i][j];
         printf("%d\t",sub[i][j]);         
        }
        printf("\n");
    }

    return 0;
}