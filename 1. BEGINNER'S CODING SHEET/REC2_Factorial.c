//Write a Program to Calculate Factorial of a Number Using Recursion

#include<stdio.h>

 int factorial(int N)
 {
     if(N==0 || N==1)
     {
        return 1;
     }
     return (N*factorial(N-1));
 }

 void main()
 {
     int N;
     printf("Enter the number whose factorial you want : ");
     scanf("%d",&N);
     printf("\n");
     int fact=factorial(N);
     printf("factorial of %d is %d \n",N,fact);
 }
