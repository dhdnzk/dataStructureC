#include "DoubleLinkedList.h"

void ListInit(DoubleLinkedList *pList) {
    pList->head = (Node *)malloc(sizeof(Node));
    pList->tail = (Node *)malloc(sizeof(Node));
    pList->cur = NULL;
    pList->numOfData = 0;
    pList->head->prev = NULL;
    pList->tail->next = NULL;
    pList->head->next = pList->tail;
    pList->tail->prev = pList->head;
}

void AddDataOnHead(DoubleLinkedList *pList, Ldata data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = pList->head;
    newNode->next = pList->head->next;
    newNode->prev->next = newNode;
    newNode->next->prev = newNode;
    pList->cur = newNode;
    ( pList->numOfData )++;
}

void AddDataOnTail(DoubleLinkedList *pList, Ldata data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = pList->tail;
    newNode->prev = pList->tail->prev;
    newNode->next->prev = newNode;
    newNode->prev->next = newNode;
    pList->cur = newNode;
    ( pList->numOfData )++;
}

Ldata ReturnFirstData(DoubleLinkedList *pList) {
    if ( pList->numOfData == 0 ) {
        printf("There is no data to show\n");
        return 0;
    }
    pList->cur = pList->head->next;
    return pList->cur->data;
}

Ldata ReturnNextData(DoubleLinkedList *pList) {
    if ( pList->numOfData == 0 ) {
        printf("There is no data to show!\n");
        return 0;
    }
    else if ( pList->cur->next == pList->tail ){
        printf("End of List!\n");
        return 0;
    }
    pList->cur = pList->cur->next;
    return pList->cur->data;
}

Ldata ReturnPrevData(DoubleLinkedList *pList) {
    if ( pList->numOfData == 0 ) {
        printf("There is no data to show!\n");
        return 0;
    }
    else if (pList->cur->prev == pList->head ) {
        printf("First of List!\n");
        return 0;
    }
    pList->cur = pList->cur->prev;
    return pList->cur->data;
}

Ldata ReturnLastData(DoubleLinkedList *pList) {
    if ( pList->numOfData == 0 ) {
        printf("There is no data to show!\n");
        return 0;
    }
    pList->cur = pList->tail->prev;
    return pList->cur->data;
}

Ldata DeleteCurData(DoubleLinkedList *pList) {
    if ( pList->numOfData == 0 ) {
        printf("There is no data to delete!\n");
        return 0;
    }
    else if ( pList->cur == NULL) {
        printf("There isn't referenced data!\n");
        return 0;
    }
    else {
        Ldata ret;
        ret = pList->cur->data;
        pList->cur->prev->next = pList->cur->next;
        pList->cur->next->prev = pList->cur->prev;
        free( pList->cur );
        (pList->numOfData )--;
        pList->cur = NULL;
        return ret;
    }
}

void ShowAllData(DoubleLinkedList *pList) {
    pList->cur = pList->head->next; 
    int i;

    printf("\n");
    for (i = 0; i < pList->numOfData; i++) {
        printf("%d ", pList->cur->data);
        pList->cur = pList->cur->next;
    }
    pList->cur = NULL;
    printf("\n\n");
}
