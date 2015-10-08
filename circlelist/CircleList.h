#ifndef __CIRCLELIST_H__
#define __CIRCLELIST_H__

#include <stdio.h>
#include <stdlib.h>

#define Ldata int
#define TRUE 1
#define FALSE 0
#define List CircleList

typedef struct _node {

    Ldata data;
    struct _node *next;

}Node;

typedef struct _circleList {

    Node *tail;
    Node *cur;
    Node *before;
    int numOfData;

}CircleList;

void ListInit(CircleList *);
void HeadAdd(CircleList *, Ldata);
void TailAdd(CircleList *, Ldata);
void ShowAllData(CircleList *);
Ldata LFirst(CircleList *);
Ldata LNext(CircleList *);
Ldata DelNode(CircleList *);

#endif
