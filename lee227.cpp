#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

#define true 1
#define false 0

typedef char element;
typedef struct QNode {
   element name[10];
   element phonenumber[20];
   int service;
   struct QNode *rink;
} QNode;

typedef struct {
   QNode *front, *rear;
} LQueueType;

LQueueType * createLinkedQueue()
{
   LQueueType *LQ;
   LQ=(LQueueType *)malloc(sizeof(LQueueType));
   LQ->front=NULL;
   LQ->rear=NULL;
   return LQ;
}

int isEmpty(LQueueType *LQ)
{
   if(LQ->front==NULL) {
      printf("\n Linked Queue is empty!\n");
      return 1;
   }
   else return 0;
}
void enQueue(LQueueType *LQ, QNode *item)
{
   if (LQ->front==NULL) {
      LQ->front=item;
      LQ->rear=item;
   }
   else {
      LQ->rear->rink=item;
      LQ->rear=item;
   }
}
void deQueue(LQueueType *LQ, QNode *obj)
{
   QNode *old=LQ->front;
   
   if(!isEmpty(LQ))
   {
      *obj=*old;
      LQ->front=LQ->front->rink;
      if (LQ->front==NULL)
         LQ->rear=NULL;
      free(old);
   }
}
void main(void)
{
   LQueueType *LQ1=createLinkedQueue();
   QNode *newNode;
   int iCount=0;
   int select=0;
   bool flag=true;
   while (flag) {
      printf("항목을 선택해주세요. 1.서비스 요청 등록   2. 대기번호 출력   3. 서비스 처리   4. 종료\n");
      scanf("%d",&select);
      QNode old;
      switch (select)
      {
         case 1:
            newNode=(QNode *)malloc(sizeof(QNode));
            printf("이름 입력 :");
            char name[10];
            scanf("%s",name);
            strcpy(newNode->name,name);
            printf("전화번호 입력:");
            char num[20];
            scanf("%s",num);
            strcpy(newNode->phonenumber,num);
            printf("서비스 요청 품목(냉장고 : 1, TV : 2, 핸드폰 : 3 중 하나 입력) : ");
            scanf("%d",&newNode->service);
            enQueue(LQ1,newNode);
            printf("\n\n");
            iCount++;
            break;
         case 2:
            printf("대기번호: %d\n",iCount);
            break;
         case 3:
            deQueue(LQ1,&old);
            switch(old.service)
            {
               case 1:
                  printf("이름 : %s 전화번호 : %s 서비스 요청 품목 : 냉장고\n", old.name, old.phonenumber);
                  break;
               case 2:
                  printf("이름 : %s 전화번호 : %s 서비스 요청 품목 : TV\n", old.name, old.phonenumber);
                  break;
               case 3:
                  printf("이름 : %s 전화번호 : %s 서비스 요청 품목 : 핸드폰\n", old.name, old.phonenumber);
                  break;
            }
            iCount--;
            break;
         default:
            flag=false;
            break;
      }
   }
}