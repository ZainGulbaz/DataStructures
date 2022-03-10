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

    stack.top = stack.top + 1;
    stack.arr[stack.top] = data;
    return stack;
}

struct Stack pop(struct Stack stack)
{
    int top = stack.top;
    stack.top = stack.top - 1;
    return stack;
}

int printStack(struct Stack stack)
{
    while (stack.top != -1)
    {
        printf("%c  %d\n", stack.arr[stack.top], stack.top);
        stack.top = stack.top - 1;
    }
    return 0;
}

int main()
{

    char exp[11] = "({}[3*2)";
    struct Stack s1;
    s1.size = 100;
    s1.top = -1;
    s1.arr = (char *)malloc(sizeof(char) * s1.size);

    for (int i = 0; i < 11; i++)
    {
        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
        {
            s1 = push(s1, exp[i]);
        }
        else if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
        {

            if (s1.top == -1)
            {
                printf("The Parenthesis are not balanced at return 0");
                return 0;
            }

            if (s1.arr[s1.top] == '(' && exp[i] == ')')
            {
                s1 = pop(s1);
            }
            else if (s1.arr[s1.top] == '{' && exp[i] == '}')
            {
                s1 = pop(s1);
            }
            else if (s1.arr[s1.top] == '[' && exp[i] == ']')
            {
                s1 = pop(s1);
            }
        }
    }
    if (s1.top == -1)
    {
        printf("The Parenthesis is balanced  %d", s1.top);
    }
    else
    {
        printf("The parenthesis is not balanced \n");
    }

    return 0;
}