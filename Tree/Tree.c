#include<stdio.h>
#include<stdlib.h>
#include "Tree.h"

void createTree(TreeType *t){
*t=NULL;
}

int emptyTree(TreeType t){
return (t==NULL);
}

int fullTree(TreeType t){
return 0;
}

void Inorder(TreeType t,void(*pvisit)(EntryType*)){
if(t){
Inorder(t->left,pvisit);
(*pvisit)(&(t->info));
Inorder(t->right,pvisit);
}
}

void Preorder(TreeType t,void(*pvisit)(EntryType*)){
if(t){
(*pvisit)(&(t->info));
Inorder(t->left,pvisit);
Inorder(t->right,pvisit);
}
}

void postorder(TreeType t,void(*pvisit)(EntryType*)){
if(t){
Inorder(t->left,pvisit);
Inorder(t->right,pvisit);
(*pvisit)(&(t->info));
}
}

int TreeSize(TreeType t){
    if(!t)
        return 0;
    return(1+TreeSize(t->left)+TreeSize(t->right));
}

int TreeHeight(TreeType t){
    if(!t)
        return 0;
    int a = TreeHeight(t->left);
    int b = TreeHeight(t->right);
    return (a>b) ? 1+a : 1+b ;
}

void ClearTree(TreeType *t){
    if(*t){
        ClearTree(&(*t)->left);
        ClearTree(&(*t)->right);
        free(*t);
        *t=NULL;
    }
}

void insertTree(TreeType *t , EntryType item){
    NodeType*p=(TreeType*)
        malloc(sizeof(TreeType));
    p->info=item;
    p->left=NULL;
    p->right=NULL;
    if (!(*t)) //if(t == NULL)
        *t= p;

    else{
        NodeType *pre,*cur;
        cur=*t;
    while(cur){
         pre=cur;
         if(item<cur->info)
            cur=cur->left;
         else
            cur=cur->right;
        }
         if(item <pre->info)
             pre->left=p;
         else
             pre->right=p;
}
}

int DeleteTree(TreeType *t,EntryType k){
   int found=0;	  NodeType *q=*t;
   NodeType *r=NULL;
    while(q && !(found=(k==q->info))){
        r=q;
        if(k<q->info)
        q=q->left;
      else
        q=q->right;
    }
   if (found){if(!r)//Case of deleting the root
         DeleteNode(t);
      else if((k< r->info))
              DeleteNode(&r->left);
           else
              DeleteNode(&r->right);
   }
   return found;
}

void DeleteNode(TreeType *pt){
   NodeType *q=*pt;
   if(!(q)->left) *pt=(q)->right;
   else
     if(!(q)->right) *pt=(q)->left;
   else{
     q=(q)->left;    NodeType *r=NULL;
	while(q->right){
      r=q;     q=q->right;}
 	(*pt)->info=q->info;
     if(r)
        r->right=q->left;
       else
        (*pt)->left=q->left;
	}

   free(q);
}

