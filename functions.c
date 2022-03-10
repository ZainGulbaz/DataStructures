#include <stdio.h>


int sum(int a,int b){
    return a+b;
}
int product(int a, int b){
    return a*b;
}

int main()
{
    int c = product(2,3);
    printf("%d \n",c);
    return 0;
}