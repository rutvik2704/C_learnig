/*WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice */
#include<stdio.h>

int main()
{
    int a[6];
    int i,j,temp;
    printf("Enter elements of array:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Unsorted Order of the array:\n");
    for (i=0;i<6;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nsorted order of the ascending order:\n");
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf(" %d ",a[i]);
    }
    printf("\nsorted order of the Descending order:\n");
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf(" %d ",a[i]);
    }
    return 0;
}