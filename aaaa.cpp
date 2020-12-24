#include<stdio.h> 
#include<time.h> 
#include<conio.h> 
#include<Windows.h> 
#include<stdlib.h> 
#include<string.h> 
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "user32.lib")//MessageBoxA  이거 사용 할때 선언해야

#define SIZE 200 

char* salloc(int len); 
void input_data(char *buf, char *who); 
char* search_question(char *input, int teach); 
void print_answer(char *output); 
void teach_answer(char *buf); 
void next_line(FILE *file, int line); 
char* nfgets(char *buf, int max, FILE *file);  
void log_save(char* input, char* output, char* user_name);  
int filtering(char *input); 
void textcolor(int color_number); 

void main() { 
MessageBoxA(NULL, "사용방법 : 자신의 이름을 정하고 하고싶은 말을 마음껏 치세요. \n심심이를 가르치고 싶다면 \"/t 질문\" 형식으로 써주세요. \n+)대화를 종료하고 싶다면 \"잘가\"를 입력해 주세요\n제작자 : 전현성, 문호현, 김수민, 박상원", "심심이 설명서", MB_OK); 

   
int i, j, k; 
char *buf; 
int teach; 
char *input; 
char *output; 
char user_name[20]; 
buf = salloc(SIZE); 

srand((unsigned)time(NULL)); 
input_data(user_name, "당신의 이름"); 

while (true) { 
teach = 0; 

input_data(buf, user_name);  
input = salloc(strlen(buf) + 1); 
strcpy(input, buf); 

if (filtering(input) == 1) { 
   free(input); 
   continue; } 

if (!strcmp("잘가", input)) { 
     MessageBoxA(NULL, "심심이를 종료합니다. \n제작자 : 전현성, 문호현, 김수민, 박상원", "심심이 : 잘가~ 또와~~", MB_OK); 
     break; } 

if (!strncmp(input, "/t ", 3)) { 
      input = input + 3; 
       teach = 1; 
   } 

  strcpy(buf, search_question(input, teach)); 
  output = salloc(strlen(buf) + 1); 
  strcpy(output, buf); 

  if (strcmp(output, "")) { 
          if (teach == 1) { 
                printf("이미 심심이가 알고있는 질문입니다.\n\n"); 
                input = input - 3; 
          } 
           else { 
                  log_save(input, output,user_name);
           }
           print_answer(output);  
    } 
    else { printf("심심이가 모르는 말입니다. 가르쳐 주세요\n\n"); 
           teach_answer(input); 
            if (teach == 1) input = input - 3; 
     } 

      free(input); 
      free(output); 
   } 
} 


char* salloc(int len) { 
     return (char*)malloc(sizeof(char)*len);
 } 

void input_data(char *buf, char *who) { 
     fflush(stdin); 
     while (true) { 
            textcolor(10); printf("%s : ", who); 
            textcolor(7); nfgets(buf, SIZE, stdin); 
            printf("\n"); 
        
            if (strcmp(buf, "")) break; 
       } 
    } 

char* search_question(char *input, int teach) { 
       FILE *fp; 
       int output_num, random, check = 0, i; 
       char *buf; 
       char *similar; 
       buf = salloc(SIZE); 
       similar = salloc(SIZE); 

       if ((fp = fopen("question.txt", "r")) == NULL) return ""; 
    
       for (i = 0; i < 2; i++) { 
           while (!feof(fp)) { 
                  fscanf(fp, "%d", &output_num);  
                  nfgets(buf, SIZE, fp);
          
                  if (i == 0 && !strcmp(input, buf)) check = 1;

                  if (i == 1 && strlen(buf) > 3 && strstr(input, buf) != NULL) { 
                      check = 1; 
                      if (teach == 0) printf("\n원하는 대답이 아닐경우 \"/t 질문\" 을 통해 가르쳐 주세요.\n\n"); 
                  } 
  
                if (check == 1) 
                 { 

                    random = rand() % output_num;  
                    next_line(fp, random); 
                    nfgets(buf, SIZE, fp); 
                    fclose(fp); 
                   return buf; 
                 } 
                 next_line(fp, output_num + 1); 
          } 
          if (teach == 1) break; 
          rewind(fp); 
 } 
fclose(fp); 
return ""; 

} 

void print_answer(char *output) { 
     textcolor(14); 
     printf("┌─Simsim──────────────────────────────────┐\n"); 
     printf(" %s\n", output); 
     printf("└──────────────────────────────────────┘\n\n"); 
     textcolor(7); 
} 


void teach_answer(char *input) { 
       char buf[SIZE]; 
       int num, i; 
       FILE *fp; 
       fp = fopen("question.txt", "a"); 

      textcolor(12); printf("가르칠 대답의 갯수를 입력해 주세요( 0 입력시 스킵 )"); 
      textcolor(7); 
      scanf("%s", &buf); 
      num = atoi(buf); 

      if (num == 0) { 
           fclose(fp); 
           return; 
      } 
      fprintf(fp, "%d%s\n", num, input); 
      for (i = 0; i < num; i++) { 
          input_data(buf, "TEACH"); 
          fprintf(fp, "%s\n", buf); 
      } 
      fprintf(fp, " \n");

      fclose(fp); 
} 

void next_line(FILE *file, int line) { 
       int i; 
       for (i = 0; i < line; i++) { 
               while (!feof(file)) 
                 { 
                   if (fgetc(file) == '\n') break; 
                 } 
       } 
} 

char* nfgets(char *buf, int max, FILE *file) { 
           fgets(buf, max, file); 
           buf[strlen(buf) - 1] = '\0'; 
           return buf; 
} 

void log_save(char* input, char* output, char* user_name){ 
       FILE *fp; 
       fp = fopen("log.txt", "a"); 
       fprintf(fp, "%s : %s \n심심이 : %s\n", user_name, input, output); 
       fclose(fp); 
} 


int filtering(char *input) { 
     int i, j; 
     if (strstr(input, "신발") != NULL || strstr(input, "강아지") != NULL) { 
            for (i = 0; i < 5; i++) {    //<-----------------{                 } 
                         MessageBoxA(NULL, "욕하지마세요.\n심심이한테 왜욕하세요?\n안하실거죠??", "욕하지맙시다!", MB_OK); 
                for (j = 0; j < 2; j++){ 
                         MessageBoxA(NULL, "욕하지마세요.\n심심이한테 왜욕하세요?\n진짜진짜진짜안하실거죠??", "욕하지맙시다!", MB_OK); 
                } 
        } 
     return 1; 
  } 
    return 0; 
 } 

 void textcolor(int color_number) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number); }

