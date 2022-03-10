#include <stdio.h>
#include <stdlib.h>


struct Node {
  int data;
  struct Node * ptr;
};

void traverseNodes(struct Node* header){

do{

    printf("%d \n",header->data);
    header=header->ptr;

}while(header!=NULL);


}

struct Node* deleteAtIndex(struct Node* header,int index){

   struct Node* tempPtr= header;
   struct Node* nextPtr=header->ptr;
   for(int i=0;i<index;i++){
    
    
    if(i==index-1 ){

      tempPtr->ptr=nextPtr->ptr;
      nextPtr->ptr=NULL;
      free(nextPtr);

    }
  
   tempPtr=tempPtr->ptr;
   nextPtr=nextPtr->ptr;
   }
return header;

}

struct Node* deleteHeader(struct Node* header)
{
    struct Node* newHeader= header->ptr;
    header->ptr=NULL;
    free(header);
    return newHeader;
}

int main(){

struct Node* header= NULL;
header = (struct Node*) malloc(sizeof(struct Node));

struct Node* secondNode= NULL;
secondNode = (struct Node*) malloc(sizeof(struct Node));

struct Node* thirdNode= NULL;
thirdNode = (struct Node*) malloc(sizeof(struct Node));

header->data=7;
header->ptr=secondNode;

secondNode->data=9;
secondNode->ptr=thirdNode;

thirdNode->data=11;
thirdNode->ptr=NULL;


header=deleteAtIndex(header,2);
//  header=deleteHeader(header);
traverseNodes(header);
  return 0;
}