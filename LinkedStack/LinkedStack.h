#ifndef LinkedStack_H
#define LinkedStack_H

typedef  int EntryType;

typedef struct Node{
	EntryType 	info;
	struct Node *next;
}Node;

typedef struct{
    Node *head;
    int stackSize;
    }Stack;

void CreateStack(Stack *s);

int isStackEmpty(Stack  s);

int isStackfull(Stack   s);

void Push(EntryType item, Stack *s);

EntryType Pop(Stack *s);

void ClearStack(Stack *s);

#endif  /* LinkedStack_H */
