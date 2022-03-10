#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node* ptr;
};

void Traverse(struct Node* header){

struct Node* tempPtr=header;  
do
{
    printf("%d \n",tempPtr->data);
    tempPtr=tempPtr->ptr;
    
}while(header!=NULL);
}

//Insertion at the head Node
struct Node* InsertAtHead(struct Node* header,int data)
{
       struct Node* tempNode= NULL;
       tempNode=(struct Node*) malloc(sizeof(tempNode));

       tempNode->data=data;
       tempNode->ptr=header;
       header=tempNode;
       return header;     


}

//Insertion between the nodes
struct Node* insertAtIndex(struct Node* header,int index,int data){
   int i=0;
   struct Node* tempPtr=header;
   struct Node* newNode= (struct Node*) malloc(sizeof(struct Node));
   while(i<index-1){
      tempPtr=tempPtr->ptr;
      i++;   

   }
     newNode->data=data;
     newNode->ptr=tempPtr->ptr;
     tempPtr->ptr=newNode;


return header;
}



int main(){
     
  struct Node* header=NULL;
  header= (struct Node*) malloc(sizeof(struct Node));

  struct Node* node1=NULL;
  node1= (struct Node*) malloc(sizeof(struct Node));

  struct Node* node2=NULL;
  node2= (struct Node*) malloc(sizeof(struct Node));

  struct Node* node3=NULL;
  node3= (struct Node*) malloc(sizeof(struct Node));

  //Header Node Initiallization
  header->data=12;
  header->ptr= node1;

  //First Node Initiallization
  node1->data=13;
  node1->ptr=node2;

  //Second Node Initiallization
  node2->data=14;
  node2->ptr=node3;

  //Third Node initiallization
  node3->data=15;
  node3->ptr=NULL;   
  
//   header=InsertAtHead(header,11);
    header=insertAtIndex(header,0,100);
    Traverse(header);



    return 0;
}