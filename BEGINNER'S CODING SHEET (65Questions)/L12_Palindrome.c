// Write a Program to Check Whether a Number N entered by user is Palindrome or Not
#include<stdio.h>
#include<math.h>
void main()
{
    int N,count=0,r;
    printf("Enter the number which you want to check\n");
    scanf("%d",&N);
    int Num=N;
    int Num1=N;
    int flag=0;

    // Here we will calculate the digits in Number

    while(N!=0)
    {
        N=N/10;
        count++;
    }

    // Now first we have to reverse the Number

    int arrR[count];   // It will store the reverse of the number
    int arrNum[count];   // It will store the reverse of reversed number means It will store the Number in Array
    for(int i=0;i<count;i++)
    {
        r=Num%10;
        Num=Num/10;
        arrR[i]=r;
    }

    // Now we have to reverse this reversed number to get the original number in array form

    for(int i=0;i<count;i++)
    {
        arrNum[i]=arrR[count-i-1];
    }

    // Now we have to compare both the arrays

    for(int i=0;i<count;i++)
    {
        if(arrNum[i]!=arrR[i])
        {
            flag++;
            break;
        }
    }

    if(flag==0)
        printf("The Number %d is a Palindrome\n",Num1);
    else
        printf("The Number %d is not a Palindrome\n",Num1);
}
