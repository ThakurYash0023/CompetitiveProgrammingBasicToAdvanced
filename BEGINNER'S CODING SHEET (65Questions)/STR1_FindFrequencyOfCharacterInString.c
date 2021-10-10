//Write a Program to Find the Frequency of given Character by user in a String

#include<stdio.h>
#include<string.h>
void main()
{
    int count=0;
    char str1[100];
    printf("Enter the string : ");
    fgets(str1,100,stdin);
    printf("\n");
    char ch;
    printf("Enter the character whose frequency you want to count : ");
    scanf("%c",&ch);
    printf("\n");

    for(int i=0;i<100;i++)
    {
        if(str1[i]==ch)
            count++;
    }
    printf("The character %c is encountered %d time. ",ch,count);
}
