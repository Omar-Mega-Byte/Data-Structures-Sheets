#ifndef LinkedList_H
#define LinkedList_H

typedef int entryType;

typedef struct {
    struct {
        char street[30];
        char city[15];
        char zipCode[11];
    }homeAddress;
    struct {
        int day;
        int month;
        int year;
    }dateOfBirth;
    struct {
        char name[20];
        char address[50];
        char phone[11];
    }company;
} Entry;

typedef struct Node {
    entryType info;
    struct Node* next;
    struct Node* prev;
} Node;

typedef struct {
    Node* head;
    int listSize;
} ListType;

void createList(ListType* l);

int isEmpty(ListType* l);

int isEmpty(ListType* l);

int size(ListType* l);

void Insert(ListType *l, entryType item, int pos);

entryType Retrieve(ListType *l, int pos);

int count (ListType *l , entryType num);

void JoinList (ListType *l , ListType *l2);

int getNth (ListType *l ,int index );

entryType pop(ListType *l);

void isPresent(ListType *l,int pos);

void RemoveDuplicates(ListType *l);

void Reverse(Node** head_ref);

#endif  /* LinkedList_H */
