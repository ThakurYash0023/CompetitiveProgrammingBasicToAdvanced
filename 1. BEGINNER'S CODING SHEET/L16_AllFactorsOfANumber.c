//Write a Program to Display all Factors of a Number entered by User

//Factors : The all numbers by which N is divisible

#include<stdio.h>
void main()
{
    int N;
    printf("Enter the Number\n");
    scanf("%d",&N);
    printf("The factors are : ");
    for(int i=1;i<=N;i++)
    {
        if(N%i==0)
            printf("%d ",i);
    }
    printf("\n");
}
