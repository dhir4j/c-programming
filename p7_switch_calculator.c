#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a;
    float b;
    float c;
    char op;
    

    printf("Enter operator (+ - * /): ");
    scanf("%c",&op);

    printf("\nEnter a: ");
    scanf("%f",&a);

    printf("\nEnter b: ");
    scanf("%f",&b);

    switch (op)
    {
    case '+':
        printf("a + b = %f\n",c=a+b);
        break;

    case '-':
        printf("a - b = %f\n",c=a-b);
        break;

    case '*':
        printf("a * b = %f\n",c=a*b);
        break;

    case '/':
        printf("a / b = %f\n",c=a/b);
        break;
    default:
        printf("Invalid Input\n");
        break;
    }
    return 0;
}
