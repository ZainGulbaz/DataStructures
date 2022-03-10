#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};

void traverse(struct Node * header){

          
           do
           {
            

                printf("%d \n",header->data);
                header=header->next;
                         
          
            
            
           } while(header!=NULL);


}

struct Node * insertAtIndex(struct Node * header, int index,int data){

 
    if(index==0)
    {
        struct Node * newNode= (struct Node *) malloc(sizeof(struct Node));
        newNode->data=data;
        newNode->prev=NULL;
        newNode->next=header;
        header = header->next->next;   
        header->prev=newNode;
        return newNode;
        
    }
    
           struct Node* tempNode= header;
    int i=0;
    while(i!=index)
    {
    tempNode=tempNode->next;
      i++;
    }
     struct Node * newNode= (struct Node *) malloc(sizeof(struct Node));
     newNode->data=data;
     newNode->next=tempNode;
     newNode->prev=tempNode->prev;
     tempNode->prev->next=newNode;
     tempNode->prev=newNode;
     return header;
     


}




int main(){

  struct Node * header = (struct Node *) malloc(sizeof(struct Node));
  struct Node * firstNode = (struct Node *) malloc(sizeof(struct Node));
  struct Node * secondNode = (struct Node *) malloc(sizeof(struct Node));

  //Header Node;
  header->data=100;
  header->prev=NULL;
  header->next=firstNode;

  //first Node
  firstNode->data=200;
  firstNode->next=secondNode;
  firstNode->prev=header;

  //second Node
  secondNode->data=300;
  secondNode->next=NULL;
  secondNode->prev=firstNode;

  
  header= insertAtIndex(header,3,700);
  traverse(header);
  
    return 0;
}