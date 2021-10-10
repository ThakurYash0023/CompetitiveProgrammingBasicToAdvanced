/*   Write a C program to find the largest word in a given
String.
Example:
Sample Input: C is a general-purpose programming language.
Sample Output: programming   */

#include<stdio.h>
#include<string.h>
void main()
{
    int i,j=0,k=0,m=0,n=0,max,min;
    char str[100],str1[50][50];  //2d string to store words of a string
    printf("Enter a String : ");
    fgets(str,100,stdin);
    printf("\n");

    // convert a sentence to 2 D string of words
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            str1[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            str1[k][j]=str[i];
            j++;
        }
    }
    str1[k][j]='\0';
    max=strlen(str1[0]);
    min=strlen(str1[0]);

    // find the position of largest and smallest location by calculating the length of each word
    for(i=0;i<=k;i++)
    {
        if(max<strlen(str1[i]))
        {
            m=i;
        }
        if(min>strlen(str1[i]))
        {
            n=i;
        }
    }
    printf("Largest Word in the string = %s \n",str1[m]);
    printf("smallest Word in the string = %s \n",str1[n]);
}
