//Write a Program to Find LCM of two numbers entered by user

/* LCM (Least Common Multiple) of two numbers is the smallest number which can be divided by both numbers.

For example, LCM of 15 and 20 is 60, and LCM of 5 and 7 is 35.

A simple solution is to find all prime factors of both numbers, then find union of all factors present in both numbers. Finally, return the product of elements in union.*/

#include<stdio.h>
void main()
{
    int a,b,g,lcm;
    printf("Enter two numbers whose LCM you want to calculate\n");
    scanf("%d%d",&a,&b);
    g=gcd(a,b);
    lcm=a*b/g;
    printf("The LCM of %d and %d is %d\n",a,b,lcm);
}
int gcd(int a, int b)
{
    // Every thing divides 0
    if(a==0)
        return b;
    if(b==0)
        return a;
    // base case
    if(a==b)
        return a;
    // when a is greater than b
    if(a>b)
        return gcd(a-b,a);
    return gcd(a,b-a);
}
