/* Write a C program to count all the words in a given
string.Words must be separated by only one space
Example:
Sample Input: Siddharth Singh
Sample Output: number of words -> 2   */

#include<stdio.h>
void main()
{
    char str1[100];
    printf("Enter a string : ");
    fgets(str1,100,stdin);
    printf("\n");
    int count=0;

    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]==' ')
            count++;
    }
    printf("Words in the string is %d ",++count);
    printf("\n");
}
