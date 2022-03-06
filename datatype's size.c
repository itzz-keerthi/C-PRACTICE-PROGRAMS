/*TASK
Program to print the size of different C datatypes*/
#include<stdio.h>
int main()
{   
    printf("SIZE OF VARIOUS C DATATYPES(IN BYTES)\n");
    printf("\nsize of int datatype:%ld bytes",sizeof(int));
    printf("\nsize of short datatype:%ld bytes",sizeof(short));
    printf("\nsize of long datatype:%ld bytes",sizeof(long));
    printf("\nsize of float datatype:%ld bytes",sizeof(float));
    printf("\nsize of double datatype:%ld bytes",sizeof(double));
    printf("\nsize of long double datatype:%ld bytes",sizeof(long double));
    printf("\nsize of char datatype:%ld bytes",sizeof(char));
    printf("\nsize of void datatype:%ld bytes",sizeof(void));
    
    return 0;
}
