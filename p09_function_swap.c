#include <stdio.h>


void welcome(char name[]){
    printf("\nHello %s, Welcome to our Swap program",name);
}   

int swap(int a, int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;

    printf("\nAfter Swaping a: %d & b: %d\n",a,b);
}

int add(int a, int b){
    return a+b;
}


int main(int argc, char const *argv[])
{
    char name[] = "dhir4j";
    welcome(name);

    int a,b,c;
    printf("\nEnter a: ");
    scanf("%d",&a);

    printf("\nEnter b: ");
    scanf("%d",&b);

    swap(a,b);
    
    c = add(a,b);
    printf("a + b = %d\n",c);

    return 0;
}
