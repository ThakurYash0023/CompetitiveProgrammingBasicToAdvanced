//Write a Program that takes the array of five element and the elements of that array are accessed using pointer.

#include<stdio.h>
void main()
{
    int arr1[5];
    int *p=arr1;
    printf("Enter 5 numbers in the array : ");

    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\n");
    printf("Elements of array accessed by using pointer are : ");
    for(int j=0;j<5;j++)
    {
        printf("%d ",*(p+j));
    }
    printf("\n");
}
