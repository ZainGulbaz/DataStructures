#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node* ptr;
};

void traverse(struct Node * header){
     
      int i=0;
      while(i<6)
      {
          printf("%d \n",header->data);
          i++;
          header=header->ptr;
      }

}

int main(){


    struct Node* header = (struct Node*) malloc(sizeof(struct Node));
    struct Node* firstNode = (struct Node*) malloc(sizeof(struct Node));
    struct Node* secondNode = (struct Node*) malloc(sizeof(struct Node));

    header->data=3;
    header->ptr=firstNode;

    firstNode->data=4;
    firstNode->ptr=secondNode;

    secondNode->data=5;
    secondNode->ptr=header;
    
    traverse(header);

    return 0;
}