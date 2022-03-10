#include <stdio.h>
#include <stdlib.h>

struct CircularQ {
    int size;
    int f;
    int b;
    int * arr;
};

void push(struct CircularQ* cq, int data)
{
    if((cq->b+1)%cq->size == cq->f)
    {
        printf("Stack Overflow\n");
    }
    else {
    cq->b=(cq->b+1)%cq->size;
    cq->arr[cq->b]=data;
    }
}

void printCQ(struct CircularQ cq)
{
   do
    {
    cq.f=(cq.f+1)%cq.size;
    printf("%d \n",cq.arr[cq.f]);
    
    } while(cq.f!=cq.b);
}
 int pop(struct CircularQ* cq){
     cq->f=(cq->f+1)%cq->size;
     return cq->arr[cq->f];
 }

int main(){

   struct CircularQ cq;
   cq.size=6;
   cq.f=cq.size-1;
   cq.b=cq.f;
   cq.arr=(int* ) malloc(sizeof(int)*cq.size);
   push(&cq,2);
   push(&cq,3);
   push(&cq,4);
   push(&cq,5);
   push(&cq,6);
   pop(&cq);


   printCQ(cq);




    return 0;
}