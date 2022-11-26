#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your Age: ");
    scanf("%d",&age);

    if (age < 18)
    {
        printf("You are under 18\n");
    }
    else if (age >= 18)
    {
        printf("You are Adult\n");
    }
    
    return 0;
}
