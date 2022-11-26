#include <stdio.h>

int even_odd(int a);//function prototype

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a : ");
    scanf("%d",&a);
    even_odd(a);
    return 0;
}

int even_odd(int a){
    if (a % 2 == 0){
        printf("\nIts is a Even Number");
    }
    else{
        printf("\nIts is a Odd Number");
    }
}

