 /* Inverted Half pyramid
* * * * * *
* * * * *
* * * *
* * *
* *
*              */

#include<stdio.h>
void main()
{
    int h;
    printf("Enter the height of the pyramid : ");
    scanf("%d",&h);
    printf("Inverted Half Pyramid\n\n");
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<h-i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
