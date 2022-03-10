#include <stdio.h>
//pointers store the address of other variables
int main(){
 int a=99;


printf("%d \n",a);

int* ptr=NULL;
ptr=&a;

*ptr=8231;

printf("%d",a);


    return 0;
}