#include<stdio.h>
#include "Queue.h"

void createQueue(Queue *q){
q->front=0;
q->rear=MAX-1;
q->size=0;
}
int isQueueEmpty(Queue q){
return (q.size)==0;
}
int isQueueFull(Queue q){
return (q.size==MAX);
}
void enQueue(entryType item , Queue *q){
    if(isQueueFull(*q))
       printf("QueueOverFlow! Can't EnQueue\n");
    else{
        q->rear=(q->rear+1)%MAX;
        q->items[q->rear]=item;
        q->size++;
    }

}
entryType deQueue(Queue *q){
    if(isQueueEmpty(*q))
       printf("QueueUnderFlow! Can't DeQueue\n");
    else{
        entryType item = q->items[q->front];
        q->front=(q->front+1)%MAX;
        q->size--;
    return item;
    }
}
void traverseQueue(Queue *q,void (*f)(entryType*)){
int i,count;
for(i=q->front,count=0;count<q->size;count++){
    (*f)(&q->items[i]);
    i=(i+1)%MAX;
}
}
entryType lastElement(Queue q){

return q.items[q.rear];
}
entryType firstElement(Queue q){

return q.items[q.front];
}
void destroyQueue(Queue *q){
while((q->size)!=0){
    q->front=(q->front+1)%MAX;
    q->size--;
}
}
void queueCopy(Queue q1,Queue *q2){
    while (!isQueueEmpty(*q2)) {
        entryType item = q2->items[q2->front];
        q2->front=(q2->front+1)%MAX;
        q2->size--;
    }

    while (!isQueueEmpty(q1)) {

        q2->rear=(q2->rear+1)%MAX;
        q2->items[q2->rear]=deQueue(&q1);
        q2->size++;
    }
}
int isPresent(Queue *q, entryType item) {
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
int queueSize(Queue q){

    return q.size;
}
