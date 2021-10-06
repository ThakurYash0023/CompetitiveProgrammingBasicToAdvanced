/* Hollow Rectangular star
* * * * *
*       *
* * * * *     */

#include<stdio.h>
void main()
{
    int r,c;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("\n");
    printf("Enter the number of columns : ");
    scanf("%d",&c);
    printf("\n");
    printf("The Hollow Rectangular Star \n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0 || i==(r-1))
            {
                printf(" * ");
            }
            else
            {
                if(j==0 || j==(c-1))
                {
                    printf(" * ");
                }
                else
                    printf("   ");
            }
        }
        printf("\n");
    }
}
