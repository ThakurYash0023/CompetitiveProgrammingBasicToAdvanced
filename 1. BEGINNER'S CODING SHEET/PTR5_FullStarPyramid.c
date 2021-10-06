/* Full Pyramid Star Pattern
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *       */

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("\n");
    printf("Full Pyramid Star Pattern \n\n");
    for(int i=1;i<=n;i++)
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
