#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAX 100

typedef char entryType;
typedef struct stack{
    int top;
    entryType items[MAX];
}Stack;

void createStack(Stack *s);
int isStackEmpty(Stack s);
int isStackFull(Stack s);
void push(entryType item , Stack*s);
entryType peek(Stack s);
entryType pop(Stack *s);
int stack_size(Stack s);
entryType firstElement(Stack s);
entryType lastItemCopy(Stack s);
void destroyStack(Stack*s);
void stackSwitch(Stack *s1,Stack *s2);


#endif // STACK_H_INCLUDED
