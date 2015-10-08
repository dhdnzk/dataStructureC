#ifndef __STACK_H__
#define __STACK_H__

#include <stdio.h>
#include <stdlib.h>
#include "DoubleLinkedList.h"

#define Data Ldata  
#define List DoubleLinkedList

void Push( List *, Data );
Data Pop( List * );
Data Peek( List * );
int NumOfData( List * );

#endif
