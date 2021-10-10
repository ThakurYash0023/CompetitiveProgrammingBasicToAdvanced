//Write a Program to Calculate Sum of first N Natural Numbers (here value of N is Entered by user)
#include<stdio.h>
void main()
{
    int n,sum=0;  // how many numbers you want to add
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of first %d natural numbers is %d\n",n,sum);
}
