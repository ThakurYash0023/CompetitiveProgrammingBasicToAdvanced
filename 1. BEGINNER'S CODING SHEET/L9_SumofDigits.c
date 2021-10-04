//Write a Program to display sum of all digits of a given Number N by user
#include<stdio.h>
void main()
{
    int N,s,d,sum=0;
    printf("Enter the digits how many digit's number you want to add\n");
    scanf("%d",&s);
    printf("Enter the number you want to add the digits\n");
    scanf("%d",&N);
    int Num=N;
    for(int i=0;i<s;i++)
    {
        d=N%10;
        N=N/10;
        sum=sum+d;
    }
    printf("The sum of digits of %d is %d\n",Num,sum);
}
