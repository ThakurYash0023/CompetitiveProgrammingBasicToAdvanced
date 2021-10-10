//Write a Program that adds two matrices using Multidimensional Arrays where the number of rows r and columns c is entered by user (Value of r and c < 100)

#include<stdio.h>
void main()
{
    int r,c;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d",&r,&c);
    printf("\n");
    int a[r][c],b[r][c],sum[r][c];
    printf("Enter the element of first array in row major order : ");

    // Enter the first matrix
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the element of second array in row major order : ");
    // Enter the second matrix
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    // Applying Condition and adding
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
        printf("\n");
    }

    printf("The first array : \n");
    // Printing First matrices
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    printf("The second array : \n");
    // Printing Second Matrix
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    // Printing Resulting matrix
    printf("The summation of Arrays is given below : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}
