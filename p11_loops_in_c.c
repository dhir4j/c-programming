#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{   
    
    //for loop
    int num1, num2, result;
    printf("Enter a number which you want multiplication table of: \n");
    scanf("%d",&num1);

    printf("Enter max number for your multiplication table: \n");
    scanf("%d",&num2);

    for(int i=1; i<=num2; i++)
    {
        printf("%d * %d = %d\n",num1,i,result=num1*i);
    }



    //do while
    int i1 = 0;
    do
    {
        printf("i1 = %d\n",i1);
        i1++;
    } while (i1<=num2);



    //while

    char name[100];
    printf("Enter Name: \n");
    fgets(name, 100, stdin);
    name[strlen(name)-1] = '\0';
    while (strlen(name)==0)
    {
        printf("You did'nt enter name\n");
        printf("Enter Name: \n");
        fgets(name, 100, stdin);
        name[strlen(name)-1] = '\0';
    }
    printf("Hello %s\n",name);
    
    return 0;

    
}
