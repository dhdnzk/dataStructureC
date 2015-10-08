#include "queue.h"
#include "DoubleLinkedList.h"

enum { ENQUEUE = 1, DEQUEUE, QPEEK, GETNUMOFDATA, CLS, EXIT };

int main(void) {

    Qdata data;
    int choice;
    Queue *Q1 = (Queue *)malloc(sizeof(Queue));
    QueueInit(Q1);

    system("clear");
    printf("------- Select Menu -------\n");
    printf("1. Enqueue data \n");
    printf("2. Dequeue data.\n");
    printf("3. Qpeek data.\n");
    printf("4. Show amount of data.\n");
    printf("5. Clear screen.\n");
    printf("6. EXIT.\n");
    printf("---------------------------\n");

    while(TRUE) {
        while(TRUE) {
            printf(">> ");
            scanf("%d", &choice);

            if(1 <= choice && choice <= 6)
                break;
        }

        switch(choice) {

            case ENQUEUE:
                printf("Data : ");
                scanf("%d", &data);
                EnQueue(Q1, data);
                printf("%d Enqueued!\n", data);
                break;

            case DEQUEUE:
                data = DeQueue(Q1);
                printf("%d Dequeued!\n", data);
                printf("NumOfData : %d\n", GetNumOfData(Q1));
                break;

            case QPEEK:
                data = QPeek(Q1);
                printf("%d QPeeked!\n", data);
                printf("NumOfData : %d\n", GetNumOfData(Q1));
                break;

            case GETNUMOFDATA:
                printf("NumOfData : %d\n", GetNumOfData(Q1));
                break;

            case CLS:
                system("clear");
                printf("------- Select Menu -------\n");
                printf("1. Enqueue data \n");
                printf("2. Dequeue data.\n");
                printf("3. Qpeek data.\n");
                printf("4. Show amount of data.\n");
                printf("5. Clear screen.\n");
                printf("6. EXIT.\n");
                printf("---------------------------\n");
                break;

            case EXIT:
                system("clear");
                return 0;
        }
        printf("\n");
    }
}
