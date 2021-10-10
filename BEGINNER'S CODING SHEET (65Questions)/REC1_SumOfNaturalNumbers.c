 // Write a Program to Find Sum of N Natural Numbers (entered by users) using Recursion

 #include<stdio.h>

 int SumOfNatural(int N)
 {
     int sum;
     if(N==1)
     {
        return 1;
     }
     return (N+SumOfNatural(N-1));
 }

 void main()
 {
     int N;
     printf("Enter the value of N : ");
     scanf("%d",&N);
     printf("\n");
     int sum=SumOfNatural(N);
     printf("Sum of first %d numbers is %d \n",N,sum);
 }
