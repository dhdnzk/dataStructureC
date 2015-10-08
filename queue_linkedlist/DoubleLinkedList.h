#ifndef __DOUBLELINKEDLIST_TYPE01_H__
#define __DOUBLELINKEDLIST_TYPE01_H__

#define TRUE 1
#define FALSE 0
#define Ldata int

#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    Ldata data;
    struct _node *prev;
    struct _node *next;
}Node;

typedef struct _doublelinkedlist {

   Node *head;
   Node *tail;
   Node *cur;
   int numOfData;

}DoubleLinkedList;

void ListInit(DoubleLinkedList *);
void AddDataOnHead(DoubleLinkedList *, Ldata);
void AddDataOnTail(DoubleLinkedList *, Ldata);
Ldata ReturnFirstData(DoubleLinkedList *);
Ldata ReturnNextData(DoubleLinkedList *);
Ldata ReturnPrevData(DoubleLinkedList *);
Ldata ReturnLastData(DoubleLinkedList *);
Ldata DeleteCurData(DoubleLinkedList *);
void ShowAllData(DoubleLinkedList *);

#endif
