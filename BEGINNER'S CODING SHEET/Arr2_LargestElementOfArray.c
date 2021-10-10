//Write a Program that takes n element from user and displays the largest element of an array

#include<stdio.h>
void main()
{
    int N,largest;
    printf("Enter how many numbers you want store ? ");
    scanf("%d",&N);
    printf("\n");
    int arr1[N];
    printf("Enter the numbers in array : ");

    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr1[i]);
    }
    largest=arr1[0];
    for(int j=0;j<N;j++)
    {
        if(largest<arr1[j])
            largest=arr1[j];
    }
    printf("\nThe largest element in the array is %d \n",largest);
}
