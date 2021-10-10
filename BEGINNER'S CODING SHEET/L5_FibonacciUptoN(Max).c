/* Write a Program to Display Fibonacci Series upto
certain number n (n is entered by user)
Example: n=100
Output:
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, */

#include<stdio.h>
void main()
{
    int a,b,n,sum=0;
    printf("Enter first and second term and the maximum value from there you want to print series\n");
    scanf("%d%d%d",&a,&b,&n);
    printf("%d %d ",a,b);
    for(int i=0;i<n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        if(sum>n)
        {
            break;
        }
        printf("%d ",sum);
    }
}
