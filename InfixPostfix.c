#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    char *arr;
};

struct Stack push(struct Stack stack, char data)
{

    stack.top += 1;
    stack.arr[stack.top] = data;
    return stack;
}

void traverse(struct Stack stack)
{
    while (stack.top != -1)
    {
        printf("%c \n", stack.arr[stack.top]);
        stack.top -= 1;
    }
}

struct Stack pop(struct Stack stack)
{

    int var = stack.arr[stack.top];
    stack.top -= 1;
    return stack;
}
int isOperator(char operator)
{
    if (operator== '+' || operator== '-' || operator== '*' || operator== '/')
    {
        return 1;
    }
    return 0;
}

int precedence(char c)
{
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
}

int main()
{

    char infix[7] = "m-n*p+q";
    char dummy[7];
    struct Stack s1;
    s1.size = 10;
    s1.arr = (char *)malloc(sizeof(char) * s1.size);
    s1.top = -1;
    int j = 0;

    for (int i = 0; i < 7; i++)
    {

        if (isOperator(infix[i]))
        {
            if (s1.top == -1)
            {
                s1 = push(s1, infix[i]);
            }
            else
            {
                while (precedence(infix[i]) <= precedence(s1.arr[s1.top]))
                {
                    dummy[j] = s1.arr[s1.top];
                    j++;
                    s1 = pop(s1);
                }

                s1 = push(s1, infix[i]);
            }
        }
        else
        {
            dummy[j] = infix[i];
            j++;
        }
    }

    while (s1.top != -1)
    {
        dummy[j] = s1.arr[s1.top];
        j++;
        s1.top -= 1;
    }

    printf("%s \n", dummy);

    return 0;
}