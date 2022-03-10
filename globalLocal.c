#include <stdio.h>

int a=2;

int ans(){
    return a;
}

int main(){
    
    int a=3;
    printf("%d",ans());

    return 0;
}

//The C language gives the preference to the local variables