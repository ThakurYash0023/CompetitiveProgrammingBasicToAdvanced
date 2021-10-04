//Write a Program to Calculate Power of a Number using inbuilt pow() function by taking two inputs from users as Base and exponent respectively
// Here we will learn the use of pow() to calculate the power of a number by just using the built in function
#include<stdio.h>
#include<math.h>
void main()
{
    int b,e,p;
    printf("Enter the base and exponent of a number\n");
    scanf("%d%d",&b,&e);
    p=pow(b,e);
    printf("The Power calculation of the number is %d\n",p);
}
