#include <stdio.h>
#include <stdlib.h>
#include "list.h"
int main()
{
    List l,l2;
    entryType item;
    createList(&l);
    add(5,0,&l);
    add(33,1,&l);
    add(6,2,&l);
    add(533,3,&l);
    add(1,4,&l);
    add(51,5,&l);


    printf("%d",listGet(1,&l));
}
