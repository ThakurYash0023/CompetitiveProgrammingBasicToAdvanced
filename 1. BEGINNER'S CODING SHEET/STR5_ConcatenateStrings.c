//Write a Program to Concatenate (join) Two Strings entered by user


#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100];
    char str2[100];
    printf("Enter first string : ");
    scanf("%s",str1);
    printf("\nEnter second string : ");
    scanf("%s",str2);
    strcat(str1,str2);
    printf("\nThe concatenated string : %s",str1);
    printf("\n");
}


/*
#include <stdio.h>
#include<string.h>
int main()
{
  char s1[20]; // declaration of char array
  char s2[20]; // declaration of char array
printf("Enter the first string : ");
scanf("%s", s1);
printf("\nEnter the second string :");
scanf("%s",s2);
strcat(s1,s2);
printf("The concatenated string is : %s",s1);
    return 0;
}
*/
