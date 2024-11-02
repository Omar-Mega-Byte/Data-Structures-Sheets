#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define MAX 4

typedef int entryType;
typedef struct queue{
    int front;
    int rear;
    int size;
    entryType items[MAX];
}Queue;

void createQueue(Queue *q);
void enQueue(entryType item , Queue *q);
entryType deQueue(Queue *q);
int isQueueEmpty(Queue q);
int isQueueFull(Queue q);
entryType lastElement(Queue q);
entryType firstElement(Queue q);
int queueSize(Queue q);
void destroyQueue(Queue *q);
void queueCopy(Queue q1,Queue *q2);
void traverseQueue(Queue *q,void (*f)(entryType*));
#endif //QUEUE_H_INCLUDED
