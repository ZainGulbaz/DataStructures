#include <stdio.h>
#include <stdlib.h>

struct CircularQueue{
    int f;
    int b;
    int size;
    int * arr;

};

struct CircularQueue push(struct CircularQueue cq,int var)
{
     
     if((cq.b+1)%cq.size==cq.f)
     {
         printf("Stack Overflow \n");
         return cq;
     }

       cq.f=0;  
       cq.b=(cq.b+1)%cq.size;
       cq.arr[cq.b]=var;
       return cq;

}
void printCircularQueue(struct CircularQueue cq){
     int front=cq.f;
    while(front!=cq.b+1)
    {
   printf("%d \n",cq.arr[front]);
   front++;
    }
}

int pop(struct CircularQueue* cq)
{
   int var= cq->arr[cq->b];
   cq->b=cq->b-1;
   return var;
   

}

int main(){

    
   struct CircularQueue cq;
   cq.f=-1;
   cq.b=-1;
   cq.size=4;
   cq.arr= (int*) malloc(sizeof(int)*cq.size); 
   cq=push(cq,2);
   cq=push(cq,4);
   cq=push(cq,3);
   cq=push(cq,19);
   pop(&cq);
printCircularQueue(cq);


    return 0;
}