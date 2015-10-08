#include "CircleList.h"

enum {CLEARSCREEN = 0, HEADADD, TAILADD, LFIRST, LNEXT, SHOWALLDATA, DELNODE, EXIT};


int main(void) {

    CircleList *L1 = (CircleList *)malloc(sizeof(CircleList));
    ListInit(L1);
    int choice;
    int data;
    
    system("clear");
    while(TRUE) {

        while(TRUE) {
        printf("Select Menu\n");
        printf("0 : Clear screen ");
        printf("1 : Add on head ");
        printf("2 : Add on tail ");
        printf("3 : Show First data ");
        printf("4 : Show next data ");
        printf("5 : Show all data ");
        printf("6 : Delete data ");
        printf("7 : Exit\n");
        printf("select : ");
        scanf("%d", &choice);
        if(0 <= choice && choice <= 7)
            break;
        }

        switch(choice) {
            case CLEARSCREEN:
                system("clear");    
                break;
            case HEADADD:
                printf("Add on head.\n");
                printf("Insert number : ");
                scanf("%d", &data);
                if(data < 1)
                    break;
                HeadAdd(L1, data);
                printf("%d add completed!\n\n", data);
                break;

            case TAILADD:
                printf("Add on tail.\n");
                printf("Insert number : ");
                scanf("%d", &data);
                if(data < 1)
                    break;
                TailAdd(L1, data);
                printf("%d add Completed!\n\n", data);
                break;

            case LFIRST:
                printf("Sort first data.\n");
                printf("\n%d\n\n", LFirst(L1));
                break;

            case LNEXT:
                printf("Sort next data.\n");
                printf("\n%d\n\n", LNext(L1));
                break;

            case SHOWALLDATA:
                printf("\n");
                ShowAllData(L1);
                printf("\n");
                break;

            case DELNODE:
                printf("Do you want to delete? (y:1 / n:2) : ");
                scanf("%d", &choice);
                if(choice == 1) 
                    printf("%d deleted.\n", DelNode(L1));
                else
                    printf("Cancled.\n");
                break;

            case EXIT:
                return 0; 
        }
    }
}
