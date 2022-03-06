/*TASK
Program to print the size of variables*/
#include<stdio.h>
int main()
{   
    int a=5,b[10],c[10][3];
    float d;
    char e='a',f[5];
    double g;
    printf("SIZE OF VARIOUS VARIABLES(IN BYTES)\n");
    printf("\nsize of a:%ld bytes",sizeof(a));
    printf("\nsize of b:%ld bytes",sizeof(b));
    printf("\nsize of c:%ld bytes",sizeof(c));
    printf("\nsize of d:%ld bytes",sizeof(d));
    printf("\nsize of e:%ld bytes",sizeof(e));
    printf("\nsize of f:%ld bytes",sizeof(f));
    printf("\nsize of g:%ld bytes",sizeof(g));
    return 0;
}
