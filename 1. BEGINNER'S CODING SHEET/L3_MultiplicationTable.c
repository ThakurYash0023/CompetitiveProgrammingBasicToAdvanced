//Write a Program to Generate Multiplication Table of a number (entered by the user) using a for loop.
#include<stdio.h>
void main()
{
    int n,i,table;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        table=n*i;
        printf("%d * %d = %d",n,i,table);
        printf("\n");
    }
}
