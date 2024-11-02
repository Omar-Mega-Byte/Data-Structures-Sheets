#include "AVL.h"

void RotateRight(TreeType *n) {
    AVLNodeType *p = (*n)->left;
    (*n)->left = p->right;
    (*n)->height = (p->right) ? p->right->height + 1 : 0;
    p->right = *n;
    p->height = ((*n)->left) ? (*n)->left->height + 1 : 0;
    *n = p;
}

void DoubleRotateFromRight(TreeType *n) {
    RotateRight(&(*n)->right);
    RotateLeft(n);
}

