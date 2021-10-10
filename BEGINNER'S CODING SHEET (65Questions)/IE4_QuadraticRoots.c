/* Write a Program which accepts coefficients of a
quadratic equation from the user and displays the roots
(both real and complex roots depending upon the
discriminant). */

// the general quadratic equation form is Y=ax2+bx+c
// so the coefficients are a,b,c

// Here we will learn about sqrt() as well

/*The term b2-4ac is known as the discriminant of a quadratic equation. The discriminant tells the nature of the roots.

If discriminant is greater than 0, the roots are real and different.
If discriminant is equal to 0, the roots are real and equal.
If discriminant is less than 0, the roots are complex and different.*/

#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    double r1,r2,discriminant,realPart,imaginary;
    printf("Enter the coefficient in the order of a b c\n");
    scanf("%d%d%d",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if(discriminant>0)
    {
        r1=(-b+sqrt(discriminant))/2*a;
        r2=(-b-sqrt(discriminant))/2*a;
        printf("\nroots of quadratic equation are %.2f and %.2f\n",r1,r2);
    }
    else if(discriminant==0)
    {
        r1=(-b+sqrt(discriminant))/2*a;
        r2=(-b-sqrt(discriminant))/2*a;
        // Here we can also calculate by this type "r1=r2=-b/2*a"
        printf("\nroots of quadratic equation are %.2f and %.2f\n",r1,r2);
    }
    else
    {
       realPart= -b/2*a;
       imaginary= sqrt(-discriminant)/2*a;
       printf("Roots are complex That's are\n");
       printf("%.2f + %.2f i\n",realPart,imaginary);
       printf("%.2f - %.2f i\n",realPart,imaginary);
    }


}
