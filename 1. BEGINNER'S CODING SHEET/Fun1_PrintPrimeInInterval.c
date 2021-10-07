//Write a Program to Display Prime Numbers Between Two Intervals (entered by the user) Using Functions

#include<stdio.h>

void primeInterval(int l,int u)
{
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
void main()
{
    int l,u;
    printf("Enter the Interval Limits : ");
    scanf("%d%d",&l,&u);
    printf("\n");
    primeInterval(l,u);
}
