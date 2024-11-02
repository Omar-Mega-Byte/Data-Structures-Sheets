#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"

int main()
{
    TreeType *t;
    createTree(&t);

    insertTree(&t,1);
    insertTree(&t,2);
    insertTree(&t,3);
    insertTree(&t,4);
    insertTree(&t,5);

    printf("The tree size is %d: \n",TreeSize(t));
    printf("The tree height is %d: ",TreeHeight(t));
}
