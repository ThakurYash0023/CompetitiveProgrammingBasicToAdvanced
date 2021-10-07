//Write a Program to Convert Binary Number to Decimal manually by creating user-defined functions.

#include<stdio.h>

void BTOD(int binary)
{
    int decimal=0,rem,weight=1;
    while(binary!=0)
    {
        rem=binary%10;
        decimal=decimal+rem*weight;
        binary=binary/10;
        weight=weight*2;
    }
    printf("The decimal conversion of entered Binary number is %d\n",decimal);
}

void main()
{
    int binary;
    printf("Enter a binary number : ");
    scanf("%d",&binary);
    printf("\n");
    BTOD(binary);


}
