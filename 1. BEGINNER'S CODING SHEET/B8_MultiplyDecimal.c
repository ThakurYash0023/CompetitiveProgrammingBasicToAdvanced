// Write a Program to Multiply two decimal Numbers entered by User

// Here we will learn about the data type and their mathematics operations
#include<stdio.h>>
void main()
{
    float a,b;
    float mul;
    printf("Enter two decimal number\n");
    scanf("%f%f",&a,&b);
    mul=a*b;
    printf("\nThe multiplication of two number is = %0.4f\n",mul);  //%0.4f means print 4 digits after decimal
}
