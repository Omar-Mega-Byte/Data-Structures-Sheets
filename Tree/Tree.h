#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED


typedef int EntryType;

typedef struct Node{
    EntryType info;
    struct Node *right;
    struct Node *left;
    int height;
}NodeType;

typedef NodeType *TreeType;

void createTree(TreeType *t);

int emptyTree(TreeType t);

int fullTree(TreeType t);

void InOrder1(TreeType t, void(*pvisit)(EntryType*));

void Inorder(TreeType t,void(*pvisit)(EntryType*));

void Preorder(TreeType t,void(*pvisit)(EntryType*));

void Postorder(TreeType t,void(*pvisit)(EntryType*));

int TreeSize(TreeType t);

int TreeHeight(TreeType t);

void ClearTree(TreeType *t);

void insertTree(TreeType *t , EntryType item);

int DeleteTree(TreeType *t , EntryType k);

#endif // TREE_H_INCLUDED
