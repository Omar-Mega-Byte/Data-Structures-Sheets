#ifndef AVL_H
#define AVL_H

typedef int EntryType;

typedef struct {
    EntryType info;
    struct AVLNodeType *right;
    struct AVLNodeType *left;
    int height;
} AVLNodeType;

typedef AVLNodeType *TreeType;

void RotateRight(TreeType *n);
void DoubleRotateFromRight(TreeType *n);

#endif /* AVL_H */

