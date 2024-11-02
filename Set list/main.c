#include <stdio.h>
#include <stdlib.h>
#include "SetList.h"
int main()
{
    ListType *l;
    createList(&l);
    entryType num,item;

    Insert(&l,1,0);
    Insert(&l,2,1);
    Insert(&l,3,2);
    Insert(&l,4,3);
    Insert(&l,5,4);
    Insert(&l,6,5);


    printf("%d",Retrieve(&l,0));
    printf("%d",Retrieve(&l,0));
    printf("%d",Retrieve(&l,0));
    printf("%d",Retrieve(&l,0));
    printf("%d",Retrieve(&l,0));
    printf("%d",Retrieve(&l,0));
}
