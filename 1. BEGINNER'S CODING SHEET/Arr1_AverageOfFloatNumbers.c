/*  Write a Program that takes N elements (max. value of N is 100 and N is the float number specified by user) from user,
stores data in an array and Calculates the average of those numbers. */

#include<stdio.h>
void main()
{
    int N;
    float sum=0,avg;
    printf("How many elements you want to store in array : ");
    scanf("%d",&N);
    printf("\n");
    float arr1[N];
    printf("Enter the numbers : ");

    for(int i=0;i<N;i++)
    {
        scanf("%f",&arr1[i]);
    }

    for(int j=0;j<N;j++)
    {
        sum=sum+arr1[j];
    }
    avg=sum/N;
    printf("\nThe average of elements stored in array is %.2f \n",avg);

}
