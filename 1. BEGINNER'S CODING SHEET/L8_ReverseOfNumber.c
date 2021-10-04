// Write a Program to Reverse a given Number N by user
#include<stdio.h>
void main()
{
    int N,s,d;
    printf("Enter the digits how many digit number you want\n");
    scanf("%d",&s);
    printf("Enter the number you want to reverse\n");
    scanf("%d",&N);
    printf("Reversed Number is : ");
    for(int i=0;i<s;i++)
    {
        d=N%10;
        N=N/10;
        printf("%d",d);
    }
    printf("\n");
}
