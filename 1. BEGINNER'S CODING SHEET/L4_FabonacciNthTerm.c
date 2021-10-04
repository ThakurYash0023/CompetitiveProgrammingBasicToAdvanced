//Write a Program to Display Fibonacci Series up to nth term (n is entered by user)
#include<stdio.h>
void main()
{
    int a,b,n,i,sum;
    printf("Enter the first , second term and n how many terms you want\n");
    scanf("%d%d%d",&a,&b,&n);
    printf("%d %d ",a,b);
    for(i=0;i<n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
}
