//Write a Program to Find the Number of Vowels, Consonants, Digits and White Spaces in a String

#include<stdio.h>
void main()
{
    int vowel=0,consonant=0,digit=0,whs=0;
    char str1[100];
    printf("Enter the string : ");
    fgets(str1,100,stdin);
    printf("\n");
    int l=strlen(str1);

    for(int i=0;i<l;i++)
    {
        if(str1[i]=='a' ||str1[i]=='e' ||str1[i]=='i' ||str1[i]=='o' ||str1[i]=='u' )
            vowel++;
        else if(str1[i]==1 ||str1[i]==2 ||str1[i]==2 ||str1[i]==4 ||str1[i]==5 ||str1[i]==6 ||str1[i]==7 ||str1[i]==8 ||str1[i]==9 ||str1[i]==0 )
            digit++;
        else if (str1[i]==' ')
            whs++;
        else
            consonant++;
    }
    printf("vowels are = %d\n",vowel);
    printf("consonants are = %d\n",consonant);
    printf("Digits are = %d\n",digit);
    printf("white spaces are = %d\n",whs);
}
