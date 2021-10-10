/* Write a program where the user is asked to enter two
integers (divisor and dividend) and the quotient and the
remainder of their division is computed.(Both divisor and
dividend should be integers.) */

#include<stdio.h>
void main()
{
    int a,b; // a and b are two variables to store the integers
    int q,r;
    printf("Enter two integers\n");
    scanf("%d%d",&a,&b);
    q=a/b;
    r=a%b;
    printf("Quotient of numbers is %d\n",q);
    printf("Remainder of division is %d\n",r);
}
