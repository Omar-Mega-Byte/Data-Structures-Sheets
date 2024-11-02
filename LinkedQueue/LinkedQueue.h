#ifndef LinkedQueue_H
#define LinkedQueue_H

typedef  int EntryType;

typedef struct Node {
	EntryType 	info;
	struct Node *next;
}Node;

typedef struct{
	Node 	*front;

	Node	*rear;

} QueueType;

void CreateQueue(QueueType *q);

int QueueEmpty(QueueType q);

int QueueFull(QueueType q);

void enQueue(EntryType item, QueueType *q);

EntryType deQueue (QueueType *q);

void ClearQueue(QueueType *q);

#endif  /* LinkedQueue_H */
