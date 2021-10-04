// check whether a number is odd or even
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Number %d is Even\n",num);
    }
    else
    {
        printf("Number %d is Odd\n",num);
    }
}
