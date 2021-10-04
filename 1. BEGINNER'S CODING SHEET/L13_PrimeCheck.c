//Write a Program to Check Whether a Number is Prime or Not

// A prime number is a natural number greater than 1, which is only divisible by 1 and itself. First few prime numbers are : 2 3 5 7 11 13 17 19 23 …..

#include<stdio.h>
void main()
{
    int N;
    printf("Enter the Number which you want to check\n");
    scanf("%d",&N);
    int flag=0;

    // check whether Number is 2 or not because 2 is prime number

    if(N==2)
    {
        flag=flag+2;
    }
    else
    {
        for(int i=2;i<N;i++)
        {
            if(N%i==0)
            {
                flag++;
                break;
            }
        }
    }
    if(flag==0|| flag==2)
        printf("The number %d is a Prime Number\n",N);
    else
        printf("The Number %d is not a Prime Number\n",N);
}
