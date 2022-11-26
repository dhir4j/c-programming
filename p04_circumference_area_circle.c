#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    const float PI = 3.14159;
    float radius;
    float circumference;
    float area;

    printf("Enter Radius: ");
    scanf("%f",&radius);

    circumference = 2*PI*radius;
    area = PI*radius*radius;
    printf("The Circumference of the circle is : %.2f\n",circumference);    
    printf("The Area of the circle is : %.2f\n",area);       

    return 0;
}
