#include "LinkedList.h"

void ListInit(List *pList) {

    pList->head = (Node*)malloc(sizeof(Node)); 
    pList->tail = pList->head;
    pList->tail->next = NULL;
    pList->numOfData = 0;
    pList->Comp = NULL;
}

void LInsert(List *pList, Ldata data) {

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = pList->tail->next;
    pList->tail->next = newNode; 
    pList->tail = newNode;
    (pList->numOfData)++;
}

Ldata LRemoveAll(List *pList, Ldata data) {

    pList->before = pList->head;
    pList->cur = pList->head->next;
    Ldata ret = 0;

    while(pList->before->next != NULL) {

        if(pList->cur->data == data) {
             ret = pList->cur->data;
             pList->before->next = pList->cur->next;
             free(pList->cur);
             pList->cur = pList->before->next;
             (pList->numOfData)--;
        }
        else {
            pList->before = pList->cur;
            pList->cur = pList->cur->next;
        }
    }
    return ret;
} 
   

Ldata LRemove(List *pList, Ldata data) {

    pList->before = pList->head;
    pList->cur = pList->head->next;

    while(pList->before->next != NULL) {

        Ldata ret;
        if(pList->cur->data == data) {
             ret = pList->cur->data;
             pList->before->next = pList->cur->next;
             free(pList->cur);
             pList->cur = pList->before;
             (pList->numOfData)--;
             return ret;
        }
        else {
            pList->before = pList->before->next;
            pList->cur = pList->cur->next;
        }
    }
    return 0;
} 

void ShowAllData(List *pList) {

    pList->cur = pList->head;
    
    while(pList->cur->next != NULL) {
        pList->cur = pList->cur->next;
        printf("%d ", pList->cur->data);
    }
    printf("\n");
}

Ldata NumOfData(List *pList) {
    return pList->numOfData;
}
