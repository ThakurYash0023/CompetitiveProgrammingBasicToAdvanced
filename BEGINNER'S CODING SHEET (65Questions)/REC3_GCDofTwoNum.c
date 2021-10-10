//Write a Program to Find G.C.D of two numbers entered by user Using Recursion

#include<stdio.h>

gcd(int num1,int num2)
{
    if(num1==0)
        return num2;
    if(num2==0)
        return num1;
    if(num1==num2)
        return num1;
    if(num1>num2)
        return gcd(num1-num2,num2);
    return gcd(num1,num2-num1);
}

void main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    printf("\n");
    printf("The GCD of %d and %d = %d \n",num1,num2,gcd(num1,num2));
}
