//Write a C program to check if a given string is a Palindrome or not.

#include<stdio.h>
void main()
{
    int flag=0;
    char str1[100];
    printf("Enter a string : ");
    scanf("%s",str1);
    printf("\n");
    int l=strlen(str1);

    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]!=str1[l-i-1])
        {
            flag++;
            break;
        }
    }
    if(flag!=0)
        printf("String is not a Palindrome. \n");
    else
        printf("String is a Palindrome. \n");
}
