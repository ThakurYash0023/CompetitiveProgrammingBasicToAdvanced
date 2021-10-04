//Write a Program to check whether a number entered by the user is an Armstrong number or not.
#include<stdio.h>
void main()
{
    int N,d,mul=0;
    printf("Enter the Number you want to check\n\n");
    scanf("%d",&N);
    int Num=N;
    int Num1=N;
    int count=0;
    while(N!=0)
    {
        N=N/10;
        count++;
    }
    // printf("Counting is %d\n",count);
    for(int i=0;i<count;i++)
    {
        d=Num%10;
        Num=Num/10;
        mul=mul+pow(d,count);
        // printf("mul %d\n",mul);
    }
    // printf("Multiplication is %d\n",mul);
    printf("\n");
    if(mul==Num1)
        printf("The number %d is Armstrong\n",Num1);
    else
        printf("The number %d is not an Armstrong\n",Num1);
}
