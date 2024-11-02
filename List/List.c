#include<stdio.h>
#include "List.h"

void createList(List *l){
l->begin=0;
l->last=0;
l->size=0;
}
int isListEmpty(List l){
return (l.size)==0;
}
int isListFull(List l){
return (l.size==MAX);
}
void add(entryType item ,int pointer ,List *l){
    int i , j;
    if(isListFull(*l))
       printf("ListOverFlow! Can't add\n");
    else{
        for(i =0 ,j=l->size ; i<(l->size-pointer)+1 ; i++ , j-- ){
                l->items[j+1]=l->items[j];
        }
        l->items[pointer]=item;
        l->size++;
    }

}
entryType listGet(int poi ,List *l ){
    if(!isListEmpty(*l))
    return l->items[poi];
    }

//void traverseList(List *q,void (*f)(entryType*)){
//int i,count;
//for(i=q->front,count=0;count<q->size;count++){
//    (*f)(&q->items[i]);
//    i=(i+1)%MAX;
//}
//}
//entryType lastElement(List q){
//
//return q.items[q.rear];
//}
//entryType firstElement(List q){
//
//return q.items[q.front];
//}
