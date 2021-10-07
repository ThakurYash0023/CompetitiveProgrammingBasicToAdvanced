//Write a Program to Convert Decimal to Binary number manually by creating user-defined functions.

#include<stdio.h>

void DTOB(int decimal)
{
    int rem,b=0,base=1;
    while(decimal>0)
    {
        rem=decimal%2;
        b=b+rem*base;
        decimal=decimal/2;
        base=base*10;
    }
    printf("The Binary Conversion of entered decimal number is %d \n",b);
}

void main()
{
    int decimal;
    printf("Enter a decimal Number : ");
    scanf("%d",&decimal);
    printf("\n");
    DTOB(decimal);
}
