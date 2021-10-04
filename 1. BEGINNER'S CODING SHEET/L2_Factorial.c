 //Write a Program to Find Factorial of a given number N (N is entered by user)
 #include<stdio.h>
 void main()
 {
     int n,i,fact=1; // the number which factorial you want to calculate
     printf("Enter the number\n");
     scanf("%d",&n);
     if(n==0)
     {
         printf("Factorial of %d is 1\n",n);
     }
     else
     {
         for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("The factorial of %d is %d\n",n,fact);
     }
 }
