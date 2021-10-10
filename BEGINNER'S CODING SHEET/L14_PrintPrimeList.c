/* Write a Program to Display Prime Numbers Between Two Intervals (entered by user)

Example:
Enter two numbers: 0 20
Prime numbers between 0 and 20 are:
2 3 5 7 11 13 17 19 */

#include<stdio.h>
void main()
{
    int l,u;   // lower limit and Upper Limit
    printf("Enter the positive Limits of Interval\n");
    scanf("%d%d",&l,&u);
    printf("Prime numbers are : ");

    if(u==2)   // condition for upper limit if u==2 then prime number is only 2
        printf("%d ",u);
    else
    {
        for(int i=l;i<=u;i++)
        {
            if(i==2)     // condition for lower limit if l==2 then one prime number will be 2
                printf("%d ",i);
            if(i>=3)
            {
                for(int j=2;j<i;j++)
                {
                    if(i%j==0)
                    {
                        break;
                    }
                    else
                    {
                        if(j==(i-1))
                            printf("%d ",i);
                    }
                }
            }
        }
    }
    printf("\n");
}
