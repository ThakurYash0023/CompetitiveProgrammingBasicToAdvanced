/*  Write a C program to capitalize the first letter of each
word of a given string. Words must be separated by only one
space
Example:
Sample Input: cpp string exercises
Sample Output: Cpp String Exercises   */

#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100];
    int arr1[50];
    printf("Enter a String : ");
    fgets(str1,100,stdin);
    printf("\n");

    for(int i=0;str1[i]!='\0';i++)
    {
        if(i==0)
        {
            str1[i]=toupper(str1[i]);
        }
        if(str1[i-1]==' ')
        {
            str1[i]=toupper(str1[i]);
        }
    }
    printf("The Output String : %s",str1);
    printf("\n");
}
