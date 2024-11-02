#include <stdio.h>
#include <stdlib.h>
#include "linkedStack.h"
int main()
{
    Stack *s;
    CreateStack(&s);

    Push(1,&s);
    Push(2,&s);
    Push(3,&s);
    Push(4,&s);

    printf("%d",Pop(&s));
    printf("%d",Pop(&s));
    printf("%d",Pop(&s));
    printf("%d",Pop(&s));

}
