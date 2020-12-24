#include<stdio.h>
#include<string.h>
#define MAX_NUM 100
typedef struct{
char name[30];
char number[30];
}User;
void insert(User* ptr, int* num);
int deleted(User* ptr, int* num);
void printAll(User* ptr, int* num);
int search(User* ptr, int* num);

int main(void){
int input;
User user[MAX_NUM];
int person = 0;
while (1){
   printf("***** Menu ***** \n");
   printf("1. Insert \n");
   printf("2.Delete\n");
   printf("3. Search\n");
   printf("4.Print All\n");
   printf("5. Exit\n");
   printf("Choose the item:");
   scanf("%d",&input);
   if(input==1) {
      printf("\n[INSERT]\n");
      insert(user,&person);
   }
   else if(input==2){
      printf("\n[Delete]\n");
      deleted(user,&person);
   }
   else if(input==3){   
      printf("\n[Search]\n");
      search(user,&person);
   }
   else if(input==4){
      printf("\n[Print All]\n");
      printAll(user,&person);
   }
      else if(input==5){
      printf("\n[Exit]\n");
      return 0;
   }
   else  
      printf("\n error! ReTry!\n\n");

       }  //<<------ 괄호가 빠져서 삽입함
   
   return 0;
}
     
void insert(User* ptr, int* num){   //<---  3. 이 왜 ?
 if(*num < MAX_NUM){
   printf("Input Name:");
   scanf("%s",ptr[*num].name);
   printf("Input Tel Number:");
   scanf("%s",ptr[*num].number);
   (*num)++;
   printf("Data Inserted \n\n");
}
else 
   printf("Data Full \n\n");
  }  //<<------ 괄호가 빠져서 삽입함 

int deleted(User* ptr, int* num){
  char name[30];
  int i,j;

  if(*num>0){
   printf("Input Name:");
   scanf("%s",name);
   
   for(i=0;i<MAX_NUM;i++){
      if(strcmp(name,ptr[i].name)==0){
         (*num)--;
         printf("Data Deleted \n\n");
         if (i != MAX_NUM-1){
            for(j=i;j<MAX_NUM;j++){
               strcpy(ptr[j].name,ptr[j+1].name);
               strcpy(ptr[j].number,ptr[j+1].number);
            }
            *ptr[MAX_NUM-1].name=NULL;
            *ptr[MAX_NUM-1].number=NULL;
         }
         else{
            *ptr[MAX_NUM-1].name=NULL;
            *ptr[MAX_NUM-1].number=NULL;  //<----소문자 num으로 되어 있어서 대문자로 변경함
         }
         return 0;
      }
                }

      printf("Not Found\n\n");
      return 0;
   }
   else{
      printf("No Data\n\n");
      return 0;
   }
}
int search(User* ptr, int* num){
char name[30];
int i;
   
if(*num>0){
   printf("Input Name:");
   scanf("%s",name);
   for(i=0;i<MAX_NUM;i++){
      if(!strcmp(name,ptr[i].name)){

         printf("Name:%s",ptr[i].name);
         printf("Tel: %s\n",ptr[i].number);
         printf("Data Found\n\n");
         return 0;
      }
   }
   printf("Not Found \n\n");
   return 0;
}
else {
   printf("No Data\n\n");
   return 0;
}
}

void printAll(User* ptr, int* num){
int i=0;
   
if(*num>0){
   for(i=0;i<*num;i++){
      printf("Name: %s",ptr[i].name);
      printf("Tel: %s\n",ptr[i].number);
   }
   printf("Data Print \n\n");
}
else {
   printf("No Data\n\n");
}
}