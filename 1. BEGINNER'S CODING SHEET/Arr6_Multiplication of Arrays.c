/* Write a Program takes two matrices of order r1*c1 and r2*c2 respectively. Then,
the program multiplies these two matrices (if possible) and displays it on the screen.  */


#include<stdio.h>
void main()
{
    int r1,c1;
    printf("Enter the number of rows and columns for first matrix : ");
    scanf("%d%d",&r1,&c1);
    printf("\n");
    int r2,c2;
    printf("Enter the number of rows and columns for second matrix : ");
    scanf("%d%d",&r2,&c2);
    printf("\n");
    int a[r1][c1],b[r2][c2],mul[r1][c2];

    printf("Enter the element of first array in row major order : ");
    // Enter the first matrix
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the element of second array in row major order : ");
    // Enter the second matrix
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    // Applying Condition and adding
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<r2;k++)
            {
                mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }
        }
        printf("\n");
    }

    printf("The first array : \n");
    // Printing First matrices
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    printf("The second array : \n");
    // Printing Second Matrix
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    // Printing Resulting matrix
    printf("The Multiplication of Arrays is given below : \n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}
