#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stdio.h>
#include <stdlib.h>
#include "DoubleLinkedList_type01.h"
#define Qdata Ldata 
#define Queue DoubleLinkedList

void QueueInit( Queue * );
void EnQueue( Queue *, Qdata );
Qdata DeQueue( Queue * );
Qdata QPeek( Queue * );
int GetNumOfData( Queue * );

#endif
