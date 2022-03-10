#include <stdlib.h>
#include <stdio.h>

struct Queue{
    
    int size;
    int front;
    int back;
    int * arr;
};

struct Queue insert(struct Queue  queue,int data)
{
      queue.front=0;
      queue.back=queue.back+1;
      queue.arr[queue.back]=data;
      return queue; 
}

struct Queue dequeue(struct Queue queue)
{
    for(int i=0 ; i<queue.back+1;i++)
    {
        queue.arr[i]=queue.arr[i+1];
    }   

    queue.back=queue.back-1;
    return queue;       
}

void printQueue(struct Queue queue){
    
    for(int i=0; i<queue.back+1;i++)
    {
        printf("%d \n",queue.arr[i]);
    }

}

struct Queue initQueue(struct Queue q){
    q.size=5;
    q.front=-1;
    q.back=-1;
    q.arr= (int *) malloc(sizeof(int)*q.size);
    return q;
}

int main (){

    struct Queue q;
    q=initQueue(q);
  
    q=insert(q,2);
    q=insert(q,6);
    q=insert(q,10);
    q=insert(q,22);
    q=dequeue(q);
    q=dequeue(q);
    printQueue(q);

    return 0;
    
}