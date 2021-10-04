//Write a Program to Calculate Power of a Number without using inbuilt pow() function by taking two inputs from users as Base and exponent respectively
// Here we will calculate the power of a number without using built in function

#include<stdio.h>
void main()
{
    int b,e,p=1;
    printf("Enter the base and the exponent of a number \n");
    scanf("%d%d",&b,&e);
    for(int i=0;i<e;i++)
    {
        p=p*b;
    }
    printf("The power of the number is %d\n",p);
}
