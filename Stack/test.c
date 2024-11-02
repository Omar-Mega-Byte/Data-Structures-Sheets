#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    Stack s;
    createStack(&s);
    int x;
    int v;

    printf(" WELCOME \n");
    printf(" Press '1' to push an element in the stack \n");
    printf(" Press '2' to pop an element from the stack and display it \n");
    printf(" Press '3' to exit \n");
    printf("Enter your choice: ");
    scanf("%d",&x);


}
