#include <stdio.h>
#include <stdlib.h>
#include "SetList.h"

void createList(ListType* l){
l->head=NULL;
l->listSize = 0;
}

int isEmpty(ListType* l){
return (!l);
}

int isFull(ListType* l){
return 0;
}

int getSize(ListType l){
return l.listSize;
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

entryType Retrieve(ListType *l, int pos){
    entryType item;
if(pos == 0){
    Node *tmp=l->head;
     item = l->head->info;
    l->head=l->head->next;
    free(tmp);
}else{
Node *q=l->head;
for(int i = 0 ; i<pos-1 ; i++){
    q=q->next;
}
 item=q->next->info;
Node*tmp=q->next;
q->next=tmp->next;
free(tmp);
}
l->listSize--;
return item;
}
