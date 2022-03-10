#include <stdio.h>
#include <stdlib.h>

//Insertion
struct Node
{

    int data;
    struct Node *pointer;
};

//Traverse
void traverse(struct Node *header)
{

    do
    {
        printf("%d \n", header->data);
        header = header->pointer;
    } while (header != NULL);
}

int main()
{

    struct Node *header = NULL;
    struct Node *secondNode = NULL;
    struct Node *thirdNode = NULL;
    struct Node *tailNode = NULL;

    header = (struct Node *)malloc(sizeof(struct Node));
    secondNode = (struct Node *)malloc(sizeof(struct Node));
    thirdNode = (struct Node *)malloc(sizeof(struct Node));
    tailNode = (struct Node *)malloc(sizeof(struct Node));

    //Header
    header->data = 12;
    header->pointer = secondNode;

    //Second Node
    secondNode->data = 15;
    secondNode->pointer = thirdNode;

    //Third Node
    thirdNode->data = 28;
    thirdNode->pointer = tailNode;

    //tail Node
    tailNode->data = 99;
    tailNode->pointer = NULL;

    traverse(header);

    return 0;
}