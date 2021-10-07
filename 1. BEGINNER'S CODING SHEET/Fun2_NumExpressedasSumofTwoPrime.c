/* Write a Program to check if an integer (entered by the user)
can be expressed as the sum of two prime numbers,if yes then
print all possible combinations with the use of functions.
Example
Enter a positive integer: 34
OUTPUT:
34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17   */


#include<stdio.h>



int isPrime(int N)
{
    int flag=0;

    // check whether Number is 2 or not because 2 is prime number

    if(N==2)
    {
        flag=flag+2;
    }
    else
    {
        for(int i=2;i<N;i++)
        {
            if(N%i==0)
            {
                flag++;
                break;
            }
        }
    }
    if(flag==0|| flag==2)
        return 1;
    else
       return 0;
}

int nxtPrime(int num)
{
    do
    {
        num++;
    }
    while(!isPrime(num));
    return(num);
}

void main()
{
    int num,count,flag=0;
    printf("Enter a positive number : ");
    scanf("%d",&num);
    printf("\n");

    for(count=2;count<=(num-count);count=nxtPrime(count))
    {
        if(isPrime(num-count))
        {
            flag=1;
            printf("%d + %d = %d\n",count,num-count,num);
        }
    }
    if(flag==0)
    {
        printf("%d can not be expressed as the sum of two prime numbers \n",num);
    }
}
