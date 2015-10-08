#include "BinaryTree.h"

int main(void) {

    BTreeNode *N1 = MakeBTreeNode();
    BTreeNode *N2 = MakeBTreeNode();
    BTreeNode *N3 = MakeBTreeNode();
    BTreeNode *N4 = MakeBTreeNode();
    BTreeNode *N5 = MakeBTreeNode();

    SetData(N1, 1);
    SetData(N2, 2);
    SetData(N3, 3);
    SetData(N4, 4);
    SetData(N5, 5);

    MakeLeftSubTree(N1, N2);
    MakeRightSubTree(N1, N3);
    MakeLeftSubTree(N3, N4);
    MakeRightSubTree(N3, N5);

    printf ( "1의 오른쪽의 왼쪽 : %d\n", GetData( GetLeftSubTree( GetRightSubTree( N1 ) ) ) );
    printf ( "1의 오른쪽의 오른쪽 : %d\n", GetData( GetRightSubTree( GetRightSubTree( N1 ) ) ) );

    printf ( "N1 후위순회.\n" );
    Traverse(N1);

    printf ( "\n\nN3 후위순회.\n" );
    Traverse(N3);

    
    return 0;
}
