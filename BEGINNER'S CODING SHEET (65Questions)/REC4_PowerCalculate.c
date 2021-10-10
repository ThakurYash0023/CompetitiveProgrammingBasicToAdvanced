//Write a Program that calculates the power of a number using recursion where base and exponent is entered by the user.

#include<stdio.h>

int power(int b,int e)
{
    if(e==0)
        return 1;
    return (b*power(b,e-1));
}

void main()
{
    int b,e;
    printf("Enter the base and exponent of number : ");
    scanf("%d%d",&b,&e);
    printf("\n");
    printf("The power of the number is %d \n",power(b,e));
}
