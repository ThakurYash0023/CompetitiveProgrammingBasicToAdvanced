//Write a Program to Check Whether a Character is Vowel or Consonant.
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("Character you entered is %c and It is vowel\n",ch);
    }
    else
    {
        printf("Character you entered is %c and It is consonant\n",ch);
    }
}
