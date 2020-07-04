#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Size 100

struct Stack
{
    int top;
    char arr[Size];
}stack;

int isEmpty()
{
    if(stack.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if(stack.top == Size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void push()
{
    if(isFull())
    {
       
        printf("The  Stack is full");
        exit(0);
    }
    else
    {
        stack.top++;
    }
}

void pop()
{
    if(isEmpty())
    {
        printf("The brackets are Unbalanced ");
        exit(0);
    }
    else
    {
        stack.top--;
    }
}

int main()
{
    char brackets[Size], chk;
    int i;
    stack.top = -1;

    printf("Enter the brackets: \n");
    scanf("%s", &brackets);

    for(i=0;i<strlen(brackets);i++)
    {
        if(brackets[i] == '(')
        {
            push();
        }
        else if
        (brackets[i] == ')')
        {
            pop();
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
    }

    if(isEmpty())
    {
        printf("The brackets are Balanced");
    }
    else
    {
        printf("The brackets are Unbalanced");
    }

    return 0;
}