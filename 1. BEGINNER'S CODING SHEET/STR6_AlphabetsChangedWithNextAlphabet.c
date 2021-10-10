/*  Write a C program to change every letter in a given string
with the letter following it in the alphabet (ie. a becomes b, p
becomes q, z becomes a).
Example:
Sample Input: Abcdef3
Sample Output: Bcdefg3   */

#include<stdio.h>
void main()
{
    char str1[100];
    printf("Enter a string : ");
    scanf("%s",str1);
    printf("\n");

    for(int i=0;str1[i]!='\0';i++)
{
    if(str1[i]>=65 && str1[i]<90)
        str1[i]=str1[i]+1;
    else if(str1[i]>=97 &&str1[i]<122)
        str1[i]=str1[i]+1;
    else if(str1[i]==90)
        str1[i]=str1[i]-25;
    else if(str1[i]==122)
        str1[i]=str1[i]-25;
}
    printf("The output string : %s",str1);
    printf("\n");
}
