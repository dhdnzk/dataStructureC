#ifndef __STACK_H__
#define __STACK_H__

#define sData int
#define TRUE 1
#define FALSE 0

#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    sData data;
    struct _node *prev;

}Node;

typedef struct _stack {
    Node *basePointer;
    Node *stackPointer;
    int numOfData;

}Stack;

void StackInit( Stack * );
void Push( Stack *, sData );
sData Pop( Stack * );
sData Peek( Stack * );
int GetNumOfData( Stack *);
#endif
