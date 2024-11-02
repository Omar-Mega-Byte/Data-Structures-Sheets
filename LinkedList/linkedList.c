#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void createList(ListType* l) {
    l->head = NULL;
    l->listSize = 0;
}

int isListEmpty(ListType l) {
    return (l.head == NULL);
}

int isListFull(ListType l){
    return 0;
}

int listSize(ListType* l) {

    return l->listSize;
}

void Insert(ListType* l, entryType item, int pos) {
    Node* p = (Node*)malloc(sizeof(Node));
    p->info = item;

    if (pos == 0 || l->head == NULL) {
        p->next = l->head;
        l->head = p;
    } else {
        Node* q;
        int i;
        for (q = l->head, i = 0; i < pos - 1; i++) {
            q = q->next;
        }
        p->next = q->next;
        q->next = p;
    }
    l->listSize++;
}


entryType Retrieve(ListType* l, int pos) {
    int i;
    Node* q;
    Node* tmp;
    entryType item;
    if (pos == 0) {
        item = l->head->info;
        tmp = l->head;
        l->head = l->head->next;
        free(tmp);
        l->listSize--;
        return item;

    } else {
        for (q = l->head, i = 0; i < pos - 1; i++) {
            q = q->next;
        }
        item = q->next->info;
        tmp = q->next;
        q->next = tmp->next;
        free(tmp);
        l->listSize--;
        return item;

    }
}

int count (ListType *l , entryType num){

int i,c=0;
Node* q;

for(i=0, q=l->head; i<l->listSize-1 ; i++ ){
    q=q->next;
    if(q->info == num)
        c++;
}
return c ;
}

void JoinList(ListType* l, ListType* l2) {
    if (l == NULL || l2 == NULL) {
        return;
    }

    if (l->head == NULL) {
        return;
    }

    if (l2->head == NULL) {
        l2->head = l->head;
        return;
    }

    struct Node* current = l2->head;
    while (current->next != NULL) {
        current = current->next;
        l2->listSize++;
    }

    current->next = l->head;
}

int getNth (ListType *l ,int index ){
    Node* q;

    if(index<l->listSize && index >=0){
        q=l->head;
        for(int i = 0 ; i<index ; i++){
            q=q->next;
        }
        return q->info;
    }else{
        return -1;
    }
}

entryType pop(ListType *l){
    int i;
    Node* q;
    Node* tmp;
    entryType item;

        item = l->head->info;
        tmp = l->head;
        l->head = l->head->next;
        free(tmp);
        l->listSize--;
        return item;
}

void isPresent(ListType *l,int pos){
    int i;
    Node* q;
    Node* p = (Node*)malloc(sizeof(Node));
    Node* tmp;
    entryType item;
    q = l->head;
        for ( i = 0; i < pos - 1; i++) {
            q = q->next;
        }
    item = q->next->info;
    tmp = q->next;
    q->next = tmp->next;
    free(tmp);
    l->listSize--;


    p->info = item;
    p->next = l->head;
    l->head = p;
    l->listSize++;
}

void RemoveDuplicates(ListType *l){
    Node* q = l->head;
    while (q->next != NULL) {
        if (q->info == q->next->info) {
            Node* temp = q->next;
            q->next = q->next->next;
            free(temp);
        } else {
            q = q->next;
        }
    }
}

void Reverse(Node** l) {
    Node *prev = NULL;
    Node *q = *l, *next = NULL;
    while (q != NULL) {
        next = q->next;
        q->next = prev;
        prev = q;
        q = next;
    }
    *l = prev;
}

