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
