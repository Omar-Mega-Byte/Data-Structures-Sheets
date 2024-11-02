#include<stdio.h>
#include "Stack.h"

void createStack(Stack *s)
{
    s->top=-1;
}
int isStackEmpty(Stack s)
{
    return s.top==-1;
}
int isStackFull(Stack s)
{
    return s.top==MAX-1;
}
void push(entryType item, Stack *s)
{
    if(isStackFull(*s))
        printf("StackOverFlow! Can't push\n");
    else
        s->items[++s->top]=item;
}
int stack_size(Stack s)
{
    return s.top+1;
}
entryType pop(Stack *s)
{
    if(isStackEmpty(*s))
        printf("StackUnderFlow! Can't pop\n");
    else
    {
        return s->items[s->top--];
    }
}
entryType peek(const Stack s)
{
    if(isStackEmpty(s))
        printf("StackUnderFlow! Can't peek\n");
    else
    {
        return s.items[s.top];
    }
}
entryType firstElement(Stack s)
{
    return s.items[0];
}
entryType lastItemCopy(Stack s)
{
    return s.items[s.top];
}
void destroyStack(Stack*s)
{
    while(!isStackEmpty(*s))
        s->items[s->top--];
}
void stackSwitch(Stack *s1,Stack *s2)
{
    Stack temp;
    entryType item;
    for(int top=0; top<stack_size(*s1); top++)
    {
        temp.items[temp.top]=s1->items[s1->top];
    }
    for(int top=0; top<stack_size(*s2); top++)
    {
        s1->items[s1->top]=s2->items[s2->top];
    }
    for(int top=0; top<stack_size(temp); top++)
    {
        s2->items[s2->top]=temp.items[temp.top];
    }
}
