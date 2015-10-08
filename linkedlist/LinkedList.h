#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int Ldata;

typedef struct _node {
    Ldata data;
    struct _node *next;
}Node;

typedef struct linkedList {
    Node *head;
    Node *tail;
    Node *cur;
    Node *before;
    int numOfData;
    int(*Comp)(Ldata, Ldata);
}List;

void ListInit(List *pList);
void LInsert(List *pList, Ldata);
void ShowAllData(List *pList);
Ldata LRemove(List *pList, Ldata data);
Ldata LRemoveAll(List *pList, Ldata data);
Ldata NumOfData(List *pList);

#endif
