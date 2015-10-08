#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

#include <stdio.h>
#include <stdlib.h>
#define BTdata int

typedef struct _bTreeNode {
    struct _bTreeNode *left;
    struct _bTreeNode *right;
    BTdata data;
}BTreeNode;

BTreeNode* MakeBTreeNode( void );
void SetData( BTreeNode *, BTdata );
BTdata GetData( BTreeNode * );
void MakeLeftSubTree( BTreeNode *, BTreeNode * );
void MakeRightSubTree( BTreeNode *, BTreeNode * );
BTreeNode* GetLeftSubTree( BTreeNode * );
BTreeNode* GetRightSubTree( BTreeNode * );
void Traverse( BTreeNode * );

#endif
