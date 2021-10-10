//Write a Program to Check whether a year entered by user is Leap Year or not

/* A leap year is exactly divisible by 4 except for century years (years ending with 00).
 The century year is a leap year only if it is perfectly divisible by 400.

For example,

1999 is not a leap year
2000 is a leap year
2004 is a leap year */

#include<stdio.h>
void main()
{
    int year;
    printf("Enter the year which you want to check\n");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("Year %d is Leap Year\n",year);
    }
    else if(year%100==0)   // Here we are using 100's case because some years are century years not divisible by 400 but divisible by 4
        // to avoid those case we are using this case
    {
        printf("Year %d is not a leap Year",year);
    }
    else if(year%4==0)
    {
        printf("Year %d is a Leap Year\n",year);
    }
    else
    {
        printf("Year %d is not a leap year\n",year);
    }
}
