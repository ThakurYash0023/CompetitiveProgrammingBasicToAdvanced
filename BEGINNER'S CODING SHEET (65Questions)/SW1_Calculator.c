//Write a Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using Switch case The program should takes an arithmetic operator
//(+, -,* , /) and two operands from a user and performs the operation on those two operands depending upon the operator entered by the user.

#include<stdio.h>
void main()
{
    int a,b; // these are the operands on which the operations will be performed
    char ch;
    printf("Enter the integer Operands\n");
    scanf("%d%d",&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("Enter + for sum, - for subtraction, * for multiplication and / for division\n");
    scanf("%s",&ch);
    switch(ch)
    {
        case "+":
            {
                printf("The summation of Numbers %d and %d is : %d\n",a,b,a+b);
                break;
            }
        case "-":
            {
               printf("The subtraction of Numbers %d and %d is : %d\n",a,b,a-b);
                break;
            }
        case "*":
            {
                printf("The Multiplication of Numbers %d and %d is : %d\n",a,b,a*b);
                break;
            }
        case "/":
            {
                printf("The quotient after division of Numbers %d and %d is : %d\n",a,b,a/b);
                break;
            }
        default: printf("You have entered wrong choice. Please make choice again correctly\n");
    }
}
