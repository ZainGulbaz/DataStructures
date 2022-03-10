#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *b = NULL;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *push(struct Node *Lastnode, int data)
{
    struct Node *Newnode = (struct Node *)malloc(sizeof(struct Node));
    Newnode->data = data;
    Newnode->next = NULL;
    if (f == NULL && b == NULL)
    {
        f = Newnode;
        b = Newnode;
        return Newnode;
    }
    else
    {
        Lastnode->next = Newnode;
        b = Newnode;
        return Newnode;
    }
}

void traverse()
{
    while (b->next != f)
    {
        printf("%d \n", f->data);
        f = f->next;
    }
}
int pop()
{
    if (f == NULL)
    {
        printf("Queue Underflow \n");
        return -1;
    }

    struct Node *newFront = f;
    int val = f->data;
    f = newFront->next;
    return val;
}

int peek(int val)
{

    int count = 0;
    while (f != NULL)
    {
        if (f->data == val)
        {
            return count;
        }
        else
        {
            f = f->next;
            count++;
        }
    }
}

int main()
{

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode = push(newNode, 2);
    newNode = push(newNode, 3);
    newNode = push(newNode, 4);
    newNode = push(newNode, 7);
    printf("%d \n", peek(4));

    return 0;
}