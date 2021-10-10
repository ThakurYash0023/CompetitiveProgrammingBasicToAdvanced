// Write a program to swap two numbers
#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter two integers\n");
    scanf("%d%d",&a,&b);
    printf("The numbers you have entered are a=%d, b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("The numbers after swapping are a=%d, b=%d\n",a,b);
}
