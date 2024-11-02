#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"
int main()
{
    QueueType *q;
    CreateQueue(&q);
Enqueue(1,&q);
Enqueue(2,&q);
Enqueue(3,&q);
Enqueue(4,&q);
Enqueue(5,&q);
Enqueue(6,&q);

isPresent(&q,4);

printf("%d\n",deQueue(&q));
printf("%d\n",deQueue(&q));
printf("%d\n",deQueue(&q));
printf("%d\n",deQueue(&q));
printf("%d\n",deQueue(&q));
printf("%d\n",deQueue(&q));
}
