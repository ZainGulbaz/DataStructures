#include <stdio.h>
#include <stdlib.h>


struct Stack{
        int size;
        int top;
        int* arr;

};


int peek(struct Stack stack,int index)
{
    if(stack.top-index<0)
    {
        printf("Stack Overflow");
        return -1;
    }
    return stack.arr[stack.top-index];

}

int main(){

     struct Stack s1;
     s1.size=4;
     s1.arr= (int *) malloc(sizeof(int)*s1.size);
     s1.arr[0]=7;
     s1.arr[1]=9;
     s1.arr[2]=2;
     s1.top=2;
     
     printf("%d \n",peek(s1,1));





    return 0;
}