//Write a Program to Find the Length of a String entered by user

#include<stdio.h>
void main()
{
    char str1[100];
    printf("Enter a string : ");
    fgets(str1,100,stdin);
    printf("\n");
    int len=0;

    for(int i=1;str1[i]!='\0';i++)
    {
        len++;
    }

    printf("The length of the string = %d \n",len);
}
