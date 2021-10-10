/* Write a Program to Find Size of int, float, double and char
in your computer */

// Here we will learn the sizeof() function

#include<stdio.h>
void main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;
    printf("\nSize of int: %d bytes",sizeof(intType));
    printf("\nSize of float: %d bytes",sizeof(floatType));
    printf("\nSize of double: %d bytes",sizeof(doubleType));
    printf("\nSize of char: %d bytes\n",sizeof(charType));
}
