#include "Stack.h"

void StackInit ( List *pStack ) {
    ListInit ( pStack );
}

/* void Push ( List *pStack, Data data ); 
 * LinkedList.h 헤더파일 활용.
 * 노드가 꼬리에 붙어나감
 */
void Push ( List *pStack, Data data ) {
    AddDataOnHead( pStack, data );
}


Data Pop ( List *pStack ) {
    Data ret; 
    ReturnFirstData( pStack );
    ret = DeleteCurData (pStack);
    return ret;
}


Data Peek ( List *pStack ) {
    return ReturnFirstData( pStack );
}


int GetNumOfData ( List *pStack ) {
    return pStack->numOfData;
}
