//Write a Program that calculates the standard deviation of 10 data using arrays

#include<stdio.h>
#include<math.h>

float calculateSD(float arr1[])
{
    float sum=0,sd=0.0,mean;
    for(int i=0;i<10;i++)
    {
        sum=sum+arr1[i];
    }
    mean=sum/10;

    for(int j=0;j<10;j++)
    {
        sd=sd+pow(arr1[j]-mean,2);
    }
    return sqrt(sd/10);
}

void main()
{
    float arr1[10];
    printf("Enter 10 numbers : ");
    for(int i=0;i<10;i++)
    {
        scanf("%f",&arr1[i]);
    }
    printf("\n");
    printf("The standard deviation of numbers = %f \n",calculateSD(arr1));
}
