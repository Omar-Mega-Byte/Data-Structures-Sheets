#ifndef STACK_H_INCLUDED

#define STACK_H_INCLUDED

typedef struct
{
    int day;
    int month;
    int year;
} dob;
union Data
{
    int salary;
    dob date;
};
typedef struct
{
    int id;
    union Data data;
} Type;
typedef struct node
{
    Type info;
    struct node *next;
} Node;

typedef struct stack
{
    Node *head;
} Stack;

void createStack(Stack *s);
int isStackEmpty(Stack s);
int isStackFull(Stack s);
void push(Type item, Stack *s);
Type pop(Stack *s);
Type peek(Stack s);

#endif // STACK_H_INCLUDED

#include "linked_stack.h"
#include <stddef.h>

void createStack(Stack *s)
{
    s->head = NULL;
}

int isStackEmpty(Stack s)
{
    return s.head == NULL;
}

int isStackFull(Stack s)
{
    return 0;
}

void push(Type item, Stack *l)
{
    Node *p = (Node *)malloc(sizeof(Node));
    p->info = item;
    p->next = l->head;
    l->head = p;
}

Type pop(Stack *l)
{
    Type item;
    Node  *tmp;
    tmp = l->head;

    item = l->head->info; //item = tmp->info
    l->head = l->head->next; //l->head = tmp->next;
    free(tmp);
    return item;
}

Type peek(Stack s)
{
    return s.head->info;
}
