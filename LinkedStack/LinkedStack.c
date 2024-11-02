#include <stdio.h>
#include <stdlib.h>
#include "LinkedStack.h"

void CreateStack(Stack *s){
		s->head = NULL ;
        s->stackSize=0;
}

int StackEmpty(Stack    s){
		return (s.head==NULL);
}

int Stackfull(Stack    s){
		return (0);
}

void Push(EntryType item, Stack *s){
		Node *p = (Node *)malloc(sizeof(Node));
		p->info = item;
        p-> next = s->head;
       s->head= p;
       (s->stackSize)++;
}

EntryType Pop(Stack *s){
		 EntryType item = s->head->info;
		 Node *p = s->head;
	     s->head= s->head->next;
	     free(p);
        (s->stackSize)--;
	     return item;


}

void ClearStack(Stack *s){
		Node *q;
		while(s->head){
			q = s->head;
			s = s->head->next;
			free (q);
		}
		(s->stackSize=0);
 }
