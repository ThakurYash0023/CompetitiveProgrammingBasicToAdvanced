/* Solid Rectangular star
* * * * *
* * * * *
* * * * *  */

#include<stdio.h>
void main()
{
    int r,c;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("\n");
    printf("Enter the Number of columns : ");
    scanf("%d",&c);
    printf("\n");
    printf("The Solid Rectangular Star\n\n");
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
