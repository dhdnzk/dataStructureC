#include "queue.h"
#include "DoubleLinkedList_type01.h"

void QueueInit( Queue *pQ ) {
    ListInit(pQ);
}

void EnQueue( Queue *pQ, Qdata data ) {
    AddDataOnTail ( pQ, data);
}

Qdata DeQueue( Queue *pQ ) {
    ReturnFirstData( pQ );
    return DeleteCurData ( pQ );
}

Qdata QPeek( Queue *pQ ) {
    return ReturnFirstData( pQ ); 
}

int GetNumOfData( Queue *pQ ) {
    return pQ->numOfData;
}
