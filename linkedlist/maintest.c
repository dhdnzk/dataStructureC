#include "LinkedList.h"

int main(void) {

    List *L1 = (List*)malloc(sizeof(List));
    Ldata number;

    ListInit(L1);
       
    while(TRUE) {

        printf("Insert nuber : ");
        scanf("%d", &number);

        if(number < 1)
            break;
        LInsert(L1, number);
    }

    printf("\n¿¿ ¿¿¿ ¿¿ ¿¿!");
    printf("\n¿¿ ¿¿¿ ¿ : %d\n", NumOfData(L1));
    ShowAllData(L1);

    while(TRUE) {
       
        int select;
        int number;
        printf("\nSelect delete type\n");
        printf("(1:one by one, 2:all of same number) : ");
        
        scanf("%d", &select);
        if(select != 1 && select != 2) {
            printf("\nWrong number.\n select again. ");
            continue; 
        }
        
        while(1) {
            printf("\nInsert the number to delete : ");
            scanf("%d", &number);
            if(number < 1)
                break;

            switch(select) {
                case 1:
                    if(LRemove(L1, number) != 0) 
                        printf("%d ¿¿¿¿¿.\n", number);
                    else
                        printf("¿¿¿ ¿¿¿¿ ¿¿¿¿.\n");

                    break;

                case 2:
                    if(LRemoveAll(L1, number) != 0) 
                        printf("%d ¿¿ ¿¿¿¿¿.\n", number);
                    else
                        printf("¿¿¿ ¿¿¿¿ ¿¿¿¿.\n");

                    break;
            }
        }
        break;
    }

    printf("¿¿¿¿ ¿¿¿ ¿¿ ¿¿!\n");
    printf("¿¿ ¿¿¿ ¿: %d\n", NumOfData(L1));
    ShowAllData(L1);
    return 0;
}
