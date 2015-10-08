#include "CircleList.h"

void ListInit ( CircleList *pList ) {

    pList->tail = NULL;
    pList->cur = NULL;
    pList->before = NULL;
    pList->numOfData = 0;
}

void HeadAdd ( CircleList *pList, Ldata data ) {

    Node *newNode = (Node *)malloc( sizeof(Node) );
    newNode->data = data;

    if ( pList->tail == NULL ) {

        pList->tail = newNode;
        newNode->next = newNode;

    }
    else {
        newNode->next = pList->tail->next;
        pList->tail->next = newNode;
    }
    ( pList->numOfData )++;
}

void TailAdd ( CircleList *pList, Ldata data ) {

    Node *newNode = (Node *)malloc( sizeof(Node) );
    newNode->data = data;
    
    if ( pList->tail == NULL ) {
        pList->tail = newNode;
        newNode->next = newNode;
    }
    else {
        newNode->next = pList->tail->next;
        pList->tail->next = newNode;
        pList->tail = newNode;
    }
    ( pList->numOfData )++;
}

void ShowAllData ( CircleList *pList ) {

    if ( pList->tail == NULL ) {
        printf ( "there is no data.\n" );
        return;
    }
    printf ( "%d ", LFirst(pList) );
    while ( pList->cur != pList->tail ) {
        printf ( "%d ", LNext(pList) );
    }
    printf("\n");
}

Ldata LFirst(CircleList *pList) {
    if ( pList->tail == NULL ) {
        printf("There is no data to show.\n\n");
        return 0;
    }
    pList->cur = pList->tail->next;
    pList->before = pList->tail;
    return pList->cur->data;
}

Ldata LNext(CircleList *pList) {
    if ( pList->tail == NULL ) {
        printf("There is no data to show.\n\n");
        return 0;
    }
    else if ( pList->tail == pList->tail->next ) {
        return LFirst(pList);
    }
    else {
    pList->before = pList->cur;
    pList->cur = pList->cur->next;

    return pList->cur->data;
    }
}

Ldata DelNode ( CircleList *pList ) {
    Ldata ret;
    if ( pList->tail == NULL ) {
        printf( "There is no data to delete.\n" );
        return 0;
    }
    else if ( pList->tail == pList->tail->next ) {
        ret = pList->tail->data;
        free ( pList->cur );
        pList->tail = NULL;
        pList->before = NULL;
        pList->cur = NULL;
        ( pList->numOfData )--;
        return ret;
    }
    else {
        if ( pList->cur == pList->tail )
            pList->tail = pList->before;

        pList->before->next = pList->cur->next;
        ret = pList->cur->data;
        free ( pList->cur );
        pList->cur = pList->before;
        ( pList->numOfData )--;
        return ret;
    }
}

