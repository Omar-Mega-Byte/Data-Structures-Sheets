#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"

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
    p->next = NULL;
    p->prev = NULL;

    if (pos == 0) {
        p->next = l->head;
        if (l->head != NULL) {
            l->head->prev = p;
        }
        l->head = p;
    } else {
        Node* q;
        int i;
        for (q = l->head, i = 0; i < pos - 1 && q != NULL; i++) {
            q = q->next;
        }
        if (q != NULL) {
            p->next = q->next;
            p->prev = q;
            if (q->next != NULL) {
                q->next->prev = p;
            }
            q->next = p;
        }
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
        if (l->head != NULL) {
            l->head->prev = NULL;
        }
        free(tmp);
    } else {
        for (q = l->head, i = 0; i < pos - 1 && q != NULL; i++) {
            q = q->next;
        }

        if (q != NULL && q->next != NULL) {
            item = q->next->info;
            tmp = q->next;
            q->next = tmp->next;
            if (tmp->next != NULL) {
                tmp->next->prev = q;
            }
            free(tmp);
        }
    }

    l->listSize--;
    return item;
}


zzz
