/* Hollow Full Pyramid Star
     *
    * *
   *   *
  *     *
 *       *
***********      */


#include<stdio.h>

void main() {
    int space, n, star=0;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("\n");
    printf("Hollow Full Pyramid \n\n");

    /* printing one row in every iteration */
    for(int i = 0; i < n-1; i++)
    {
        /* Printing spaces */
        for(space = 1; space < n-i; space++)
        {
            printf(" ");
        }
        /* Printing stars */
        for (star = 0; star <= 2*i; star++)
        {
            if(star==0 || star==2*i)
                printf("*");
            else
                printf(" ");
        }
        /* move to next row */
        printf("\n");
    }

    /* print last row */
    for(i=0; i<2*n-1; i++)
    {
        printf("*");
    }
}
