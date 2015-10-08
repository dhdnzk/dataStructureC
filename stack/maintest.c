#include "Stack.h"

enum { PUSH = 1, POP, PEEK, SHOWNUMOFDATA, CLS, EXIT };
int main(void) {

    int data;
    int choice;
    Stack *S1 = (Stack *)malloc(sizeof(Stack));
    StackInit(S1);

    system("clear");
    printf("------- Select Menu -------\n");
    printf("1. Push data \n");
    printf("2. Pop data.\n");
    printf("3. Peek data.\n");
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

            case PUSH:
                printf("Data : ");
                scanf("%d", &data);
                Push(S1, data);
                printf("%d Pushed!\n", data);
                break;

            case POP:
                data = Pop(S1);
                printf("%d Poped!\n", data);
                printf("NumOfData : %d\n", GetNumOfData(S1));
                break;

            case PEEK:
                data = Peek(S1);
                printf("%d Peeked!\n", data);
                printf("NumOfData : %d\n", GetNumOfData(S1));
                break;

            case SHOWNUMOFDATA:
                printf("NumOfData : %d\n", GetNumOfData(S1));
                break;

            case CLS:
                system("clear");
                printf("------- Select Menu -------\n");
                printf("1. Push data \n");
                printf("2. Pop data.\n");
                printf("3. Peek data.\n");
                printf("4. Show amount of data.\n");
                printf("5. Clear screen.\n");
                printf("6. EXIT.\n");
                printf("---------------------------\n");
                break;

            case EXIT:
                return 0;
        }
        printf("\n");
    }
}
