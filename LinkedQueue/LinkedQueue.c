#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"

void CreateQueue(QueueType *q){
		q->front= NULL;
		q->rear = NULL;
	}

int QueueEmpty(QueueType q){
		return (q.front == NULL);
    }

int QueueFull(QueueType q){
		return 0;
    }

void Enqueue(EntryType item, QueueType *q){
		Node *p = (Node *)malloc(sizeof(Node));
		p->info = item;
        p-> next = NULL;

		if (!q->rear)
            q->front = p;
		else
            q->rear->next=p;
        q->rear=p;
}

EntryType deQueue (QueueType *q){
		EntryType item = q->front->info;
		Node *p = q->front;
	 q-> front=q->front->next;
	  free(p);
	if (!q->front) 	q->rear = NULL;
	return item;
}

void ClearQueue(QueueType *q){
		Node *p;
		while(q->front){
			p=q->front;
			q->front=q->front->next;
			free(p);
		}
		q->rear = NULL;
 }

int isPresent(QueueType *q, EntryType item) {
    Node *tmp = q->front;
    Node *prev = NULL;
    int status = 0;

    while (tmp != NULL) {
        if (tmp->info == item) {
            status = 1;
            break;
        }
        prev = tmp;
        tmp = tmp->next;
    }

    if (status == 1) {
        if (prev != NULL) {
            prev->next = tmp->next;
            tmp->next = q->front;
            q->front = tmp;
        }
    }

    return status;
}
