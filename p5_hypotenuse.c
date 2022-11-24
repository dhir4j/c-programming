#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double a;
    double b;
    double c;

    printf("\nEnter value of a: ");
    scanf("%lf",&a);

    printf("\nEnter value of b: ");
    scanf("%lf",&b);

    c = sqrt(a*a+b*b);
    printf("\nGiven a = %lf, b = %lf",a,b);
    printf("\nHypotenuse i.e c = %.3lf\n",c);
    return 0;
}
