//Inverted Full pyramid

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of row : ");
    scanf("%d",&n);
    printf("\n");
    printf("Inverted Full Pyramid \n\n");
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=(2*n-1);j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
