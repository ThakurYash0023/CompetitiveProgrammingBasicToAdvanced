//Write a Program to Find GCD or HCF of two numbers entered by user

//GCD (Greatest Common Divisor) or HCF (Highest Common Factor) of two numbers is the largest number that divides both of them.
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers whose HCF is to be found\n");
    scanf("%d%d",&a,&b);
    printf("The GCD of %d and %d is %d\n",a,b,gcd(a,b));
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
