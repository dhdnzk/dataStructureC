#include "Stack.h"

void StackInit( Stack *pStack ) {
    pStack->basePointer = (Node *)malloc(sizeof(Node));
    pStack->stackPointer = pStack->basePointer;
    pStack->numOfData = 0;
}

int GetNumOfData( Stack *pStack) {
    return pStack->numOfData;
}

void Push( Stack *pStack, sData data ) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = pStack->stackPointer;
    pStack->stackPointer = newNode;
    ( pStack->numOfData )++;
}

sData Pop( Stack *pStack ) {
    sData ret;
    Node *tmp;
    if ( pStack->numOfData == 0 ) {
        printf("There is no data to pop.\n");
        return NULL;
    }
    ret = pStack->stackPointer->data;
    tmp = pStack->stackPointer;
    pStack->stackPointer = pStack->stackPointer->prev;
    free(tmp);
    ( pStack->numOfData )--;     
    return ret;
}

sData Peek( Stack *pStack ) {
    if ( pStack->numOfData  == 0 ) {
        printf("There is no data.\n");
        return NULL;
    }
    return pStack->stackPointer->data;
}

