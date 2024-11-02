#include <stdio.h>
#include "Queue.h"
int main()
{
    Queue q,q2;
    int item;
    createQueue(&q);createQueue(&q2);
    enQueue(1,&q);
    enQueue(2,&q);
    enQueue(3,&q);
    enQueue(4,&q);

    enQueue(5,&q2);
    enQueue(6,&q2);
    enQueue(7,&q2);
    enQueue(8,&q2);

    isPresent(&q , 3);

    while (!isQueueEmpty(q2)) {
        printf("%d ", deQueue(&q2));
    }
 }
