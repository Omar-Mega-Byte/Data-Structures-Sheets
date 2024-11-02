#include <stdio.h>
#include <stdlib.h>
#include "CircularLinkedList.h"

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

    if (l->head == NULL || pos == 0) {
        if (l->head == NULL) {
            p->next = p;
            l->head = p;
        } else {
            p->next = l->head;
            Node* temp = l->head;
            while (temp->next != l->head) {
                temp = temp->next;
            }
            temp->next = p;
            l->head = p;
        }
    } else {
        Node* q = l->head;
        int i;
        for (i = 0; i < pos - 1; i++) {
            q = q->next;
        }
        p->next = q->next;
        q->next = p;
    }
    l->listSize++;
}

entryType Retrieve(ListType* l, int pos) {
    int i;
    Node* q = l->head;
    Node* tmp;
    entryType item;

    if (pos == 0) {
        // Retrieve and remove the first node
        item = l->head->info;
        tmp = l->head;
        if (l->head->next == l->head) {
            l->head = NULL;
        } else {
            while (q->next != l->head) {
                q = q->next;
            }
            l->head = tmp->next;
            q->next = l->head;
        }
        free(tmp);
    } else {
        for (i = 0; i < pos - 1; i++) {
            q = q->next;
        }
        item = q->next->info;
        tmp = q->next;
        q->next = tmp->next;
        free(tmp);
    }

    l->listSize--;
    return item;
}




