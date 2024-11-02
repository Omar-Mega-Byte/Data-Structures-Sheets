#ifndef SetList_H
#define SetList_H

typedef int entryType;

typedef struct Node {
    entryType info;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
    int listSize;
} ListType;

void createList(ListType* l);

int isEmpty(ListType* l);

int isFull(ListType* l);

int size(ListType* l);

void Insert(ListType *l, entryType item, int pos);

entryType Retrieve(ListType *l, int pos);


#endif  /* SetList_H */


