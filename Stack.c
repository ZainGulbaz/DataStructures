#include <stdio.h>
#include <stdlib.h>


struct Stack{
    int size;
    int top;
    int *arr;
};

struct Stack  initStack(struct Stack stack, int size){
    stack.size=size;
    stack.top=-1;
    stack.arr=(int *) malloc(size*sizeof(int));
    return stack;

}

struct Stack push(struct Stack stack,int data)
{
     stack.top=stack.top+1;
     stack.arr[stack.top]=data;
     return stack;

}

int pop (struct Stack s1){
    
    int var=s1.arr[s1.top];
    s1.top=s1.top-1;
    printf("%d \n",s1.top);
    return var;


}

void printStack(struct Stack stack){

    for(int i=0; i<=stack.top;i++)
    {
        printf("%d \n",stack.arr[i]);
    }
}

int main(){
 
   int size=6;
   struct Stack s1=initStack(s1,6);

   s1=push(s1,2);
   s1=push(s1,3);
   s1=push(s1,4);
   s1=push(s1,5);
   int data=pop(s1);
  
   printStack(s1);
   printf("%d \n",s1.top);

   




    return 0;
}