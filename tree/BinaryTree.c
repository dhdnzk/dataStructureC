#include "BinaryTree.h"

BTreeNode* MakeBTreeNode( void ) {
    BTreeNode *node = (BTreeNode *)malloc( sizeof(BTreeNode) );
    node->left = NULL;
    node->right = NULL;
    return node;
}

void SetData( BTreeNode *Node, BTdata data) {
    Node->data = data;
}

BTdata GetData( BTreeNode *Node ) {
    return Node->data;
}

void MakeLeftSubTree( BTreeNode *MainNode, BTreeNode *SubNode ) {
    if ( MainNode->left != NULL )
        free ( MainNode->left );
    MainNode->left = SubNode;
}

void MakeRightSubTree( BTreeNode *MainNode, BTreeNode *SubNode ) {
    if ( MainNode->right != NULL ) 
        free ( MainNode->right );
    MainNode->right = SubNode;
}

BTreeNode* GetLeftSubTree( BTreeNode *Node ) {
    return Node->left;
}

BTreeNode* GetRightSubTree( BTreeNode *Node ) {
    return Node->right;
}

void Traverse( BTreeNode *Node) {
    if ( Node == NULL )
        return;
    Traverse ( Node->left );
    Traverse ( Node->right );
    printf( "%d\n", Node->data );
}
