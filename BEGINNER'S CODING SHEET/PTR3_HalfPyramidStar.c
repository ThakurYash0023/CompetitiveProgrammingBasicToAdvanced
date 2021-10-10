/* Half Pyramid Star Pattern
*
* *
* * *
* * * *
* * * * *      */

#include<stdio.h>
void main()
{
    int h;
    printf("Enter the height : ");
    scanf("%d",&h);
    printf("\n");
    printf("Half Pyramid Star Pattern \n\n");
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
