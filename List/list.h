#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#define MAX 8

typedef int entryType;
typedef struct list{
    int pointer;
    int begin;
    int last;
    int size;
    entryType items[MAX];
}List;

void createList(List *l);
void add(entryType item ,int pointer ,List *l);
entryType listGet(int pointer,List *l);
int isListEmpty(List l);
int isListFull(List l);
entryType lastElement(List l);
entryType firstElement(List l);
int ListSize(List l);

#endif //LIST_H_INCLUDED
