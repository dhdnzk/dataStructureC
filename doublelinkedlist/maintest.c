#include "DoubleLinkedList.h"

enum {ADDONHEAD = 1, ADDONTAIL, SHOWFIRSTDATA, SHOWNEXTDATA, SHOWPREVDATA, SHOWLASTDATA, DELCURNODE, SHOWALLDATA, CLEAR, EXIT};

int main(void) {

    int data;
    int choice;
    DoubleLinkedList *L1 = (DoubleLinkedList *)malloc(sizeof(DoubleLinkedList));
    ListInit(L1);
    system("clear");    
    printf("------- 메뉴 선택 -------\n");
    printf("1. 머리에 데이터 추가.\n");
    printf("2. 꼬리에 데이터 추가.\n");
    printf("3. 첫번쨰 데이터 조회.\n");
    printf("4. 다음 데이터 조회.\n");
    printf("5. 이전 데이터 조회.\n");
    printf("6. 마지막 데이터 조회.\n");
    printf("7. 최근 조회한 정보 삭제.\n");
    printf("8. 전체 정보 출력.\n");
    printf("9. 화면 지우기.\n");
    printf("10. 프로그램 종료.\n");
    printf("-------------------------\n");
    while(TRUE) {
        while(TRUE) {
            printf(">> ");
            scanf("%d", &choice);
            if ( 1 <= choice && choice <= 10 )
                break;
        }

        switch(choice) {
            case ADDONHEAD:
                printf("입력할 수 입력 : ");
                scanf("%d", &data);
                AddDataOnHead(L1, data); 
                printf("%d 머리에 추가되었습니다.\n\n", data);
                break;

            case ADDONTAIL:
                printf("입력할 수 입력 : ");
                scanf("%d", &data);
                AddDataOnTail(L1, data);
                printf("%d 꼬리에 추가되었습니다.\n\n", data);
                break;

            case SHOWFIRSTDATA:
                printf("\n%d\n\n", ReturnFirstData(L1));
                break;

            case SHOWNEXTDATA:
                printf("\n%d\n\n", ReturnNextData(L1));
                break;

            case SHOWPREVDATA:
                printf("\n%d\n\n", ReturnPrevData(L1));
                break;

            case SHOWLASTDATA:
                printf("\n%d\n\n", ReturnLastData(L1));
                break;

            case SHOWALLDATA:
                printf("데이터 전체 출력!\n");
                ShowAllData(L1);
                break;

            case DELCURNODE:
                data = DeleteCurData(L1);
                if(data != 0)
                    printf("\n%d삭제되었습니다. \n", data );
                else
                    printf("\n");
                break;

            case CLEAR:
                system("clear");
                printf("------- 메뉴 선택 -------\n");
                printf("1. 머리에 데이터 추가.\n");
                printf("2. 꼬리에 데이터 추가.\n");
                printf("3. 첫번쨰 데이터 조회.\n");
                printf("4. 다음 데이터 조회.\n");
                printf("5. 이전 데이터 조회.\n");
                printf("6. 마지막 데이터 조회.\n");
                printf("7. 최근 조회한 정보 삭제.\n");
                printf("8. 전체 정보 출력.\n");
                printf("9. 화면 지우기.\n");
                printf("10. 프로그램 종료.\n");
                printf("-------------------------\n");
                break;

            case EXIT:
                system("clear");
                return 0;
        }
    }
}
