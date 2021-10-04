//Write a Program to Find Largest Number Among Three Numbers entered by users
#include<stdio.h>
void main()
{
    int a,b,c;   // are three variables to store three integers
    printf("Enter three integers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)
    {
        printf("\n%d is the largest number among all three\n",a);
    }
    else if(b>=a&&b>=c)
    {
        printf("\n%d is the largest number among all three\n",b);
    }
    else
    {
        printf("\n%d is the largest number among all three\n",c);
    }
}
