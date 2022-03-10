//There are three data types in C lang int,float and char
// unsigned if the int is positive only
//signed the int could be both positive and negative
//short and long
//short for small integer
//long for long int and float
//short int 2 bytes
//long int 4 bytes
#include <stdio.h>

int main(){

    int a=7;  //4 bytes
    float b=2.9; //4bytes
    char c='c'; //1 byte
    printf("Number %d  Float %f Character %c \n",a,b,c);
    printf("The size Taken by char is %c \n",sizeof(char));

    return 0;
}