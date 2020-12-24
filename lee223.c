#include <stdio.h>

#define MAX_NAME_LEN    20 
#define MAX_PN_LEN        30 
typedef struct
{
    char name[MAX_NAME_LEN];
    char pn[MAX_PN_LEN];
    int pay; 
}employee;

int main()
{
    employee arr[3] = { 0 };
    int i = 0;

    for (i = 0; i < 3; i++)
    {
        printf("%d 번째 종업원 정보를 입력하세요.\n", i + 1);
        printf("종업원 이름:");
        scanf_s("%s", arr[i].name,MAX_NAME_LEN);
        printf("주민등록번호:");
        scanf_s("%s", arr[i].pn,MAX_PN_LEN);
        printf("급여:");
        scanf_s("%d", &arr[i].pay);
    }

    for (i = 0; i < 3; i++)
    {
        printf("====  %d 번째 종업원 정보  ====\n", i + 1);
        printf("종업원 이름:%s\n", arr[i].name);
        printf("주민등록번호:%s\n", arr[i].pn);
        printf("급여:%d\n", arr[i].pay);
    }

    return 0;
}