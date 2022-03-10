#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverse(struct Node *stackTop)
{

    struct Node *tempTop = stackTop;

    do
    {

        printf("%d \n", tempTop->data);
        tempTop = tempTop->next;

    } while (tempTop != NULL);
}

int isFull()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct Node *stackTop)
{
    if (stackTop == NULL)
        ;
    {
        return 1;
    }
    return 0;
}

struct Node *push(struct Node *header, int data)

{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = header;
    return newNode;
}

int main()
{

    struct Node *Node1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *Node2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *Node3 = (struct Node *)malloc(sizeof(struct Node));

    Node1->data = 7;
    Node1->next = Node2;

    Node2->data = 9;
    Node2->next = Node3;

    Node3->data = 2;
    Node3->next = NULL;

    struct Node *topHeader = push(Node1, 11);
    topHeader = push(topHeader, 15);
    topHeader = push(topHeader, 323);

    traverse(topHeader);

    return 0;
}