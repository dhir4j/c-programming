#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    float c;
    float f;
    float x;
    char unit;

    printf("Is the value in Temp (C) or Fahrenhite (F): ");
    scanf("%c",&unit);

    

    unit = toupper(unit);
    
    if (unit == 'C')
    {
        printf("\nEnter value to convert: ");
        scanf("%f",&c);

        printf("\n%f Celcius to Fahrenhite is: %f\n",c,f = ((c*9/5)+32) );

    }
    else if (unit == 'F')
    {
        printf("\nEnter value to convert: ");
        scanf("%f",&f);

        printf("\n%f Fahrenhite to Celcius is: %f\n",f,c=((f-32)*5/9));
    }
    else{
        printf("Invalid Input\n");
    }
    
    
    return 0;
}

    
