//Write a Program that takes a matrix of order r*c from the user and computes the transpose of the matrix.

#include<stdio.h>
void main()
{
    int r,c;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d",&r,&c);
    printf("\n");
    int arr1[r][c],T[c][r];
    printf("Enter the elements in array : ");

    // Taking elements of array from user
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }

    printf("The Array You entered : \n");
    // printing your input array
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    // Applying Condition
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            T[i][j]=arr1[j][i];
        }
        printf("\n");
    }

    printf("The Transpose of the given matrix is : \n");
    // Printing Transpose of the input array
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",T[i][j]);
        }
        printf("\n");
    }
}
