#include <stdio.h>
#include <memory.h> 
#include <string.h>  
int main(void) {
char A[50][50]={{'\0'},};
char A1[50][50]={{'\0'},};
int B[5][5]={{0,}};
char BB[5][8]={{'\0'},};
int C[5][5]={{0,}};
int D[5]={0,};


char AA[8]={"ㅋㅋ"};
int a,b,c,d,e,f,g,h,i=0,j=0,aa,k,l,x,y;

while(1) {

printf("1:성적 구하기.\n2:별 만들기.\n3:종료\n");
printf("원하는 작업의 번호를 입력하시오.");
scanf("%d",&a);

switch (a) {

case 1: 

	while(1) {

	int sw1=0;
	printf("1:총점 구하기.\n2:평균 구하기.\n3:전체 보기\n4:상위 메뉴로 가기\n5:종료\n");
	printf("원하는 작업의 번호를 입력하시오.");
	scanf("%d",&b);

	switch (b) {

	case 1: 
	printf("총점 프로그램\n");
	printf("당신의 국어,수학,영어 성적을 입력하시오.\n");
	scanf("%d %d %d",&f,&g,&h);

	i=f+g+h;
	j=i/3;
	printf("총점:%d\n",i);
	
	break;
	case 2: 
	printf("평균 프로그램\n");
	printf("당신의 국어,수학,영어 성적을 입력하시오.\n");
	scanf("%d %d %d",&f,&g,&h);

	i=f+g+h;
	j=i/3;
	printf("평균:%d\n",j);
	break;


	case 3:        

	for(f=1;f<5;f++) {
	i=0;
	j=0;
            for(a=0;a<=4;a++) {
   
	     printf("%d반: 당신의 이름, 국어, 영어, 수학 성적을 입력하세요\n",f);

		scanf("%s %d %d %d", &BB[a][8],&B[a][0], &B[a][1], &B[a][2]);
 		
		B[a][3]= B[a][0] + B[a][1] + B[a][2];

		B[a][4]=B[a][3]/3; 
		i=i+B[a][3];
		j=j+B[a][4];
		D[a]=B[a][4];

         //  printf("%s의 총점: %d , 평균 : %d\n", BB[a], B[a][3], B[a][4] );
                 
         }
	
	C[f][0]=i;
	C[f][1]=j/5;
for(i=0;i<=4;i++) {

for(c=0;c<=3;c++) {

if(D[c]>D[c+1]) {
b=D[c];
D[c]=D[c+1];
D[c+1]=b;
}
}
}
C[f][2]=D[0];
C[f][3]=D[4];
}


        
	  /* 
	for(a=0;a<=4;a++) {
	   printf("%s",  BB[a]);

       		 for(i=0;i<=4;i++){
                    printf("%3d", B[a][i]);
 		 
		 }
		   printf("\n");
              }*/
	
            
        //while(getchar() != '\n'){}
	/*printf("조회하고자 하는 사람의 이름을 입력하세요.");
	scanf("%s",&AA);
  

	for(a=0;a<5;a++){
        
	      if( strcmp( BB[a], AA ) == 0) { printf("\n국어:%d\n수학:%d\n영어:%d\n총점:%d\n평균:%d\n",B[a][0],B[a][1],B[a][2],B[a][3],B[a][4]);                                   
		  
	          }
        }
	printf("조회하고자하는 반이 몇반인지 입력하세요.");
	scanf("%d",&x);
	printf("총점:%d\n평균:%d\n최고 점수:%d\n최저 점수:%d\n",C[x][0],C[x][1],C[x][2],C[x][3]);*/
	for(k=1;k<=5;k++) {

		printf("\n%d반\n총점:%d\n평균:%d\n최고 점수:%d\n최저 점수:%d\n",k,C[k][0],C[k][1],C[k][2],C[k][3]);
	}
	
	break;
	
	case 4:   sw1=1;
	break;

	case 5:printf("서브에서 종료합니다."); exit(0);
        break;
        }

	if(sw1==1){printf("상위메뉴로 갑니다.\n");   break;}	

	}

break;
case 2: 
	while(1) {
 	printf("\n별 만들기\n\n1:직각삼각형 만들기\n2:정삼각형 만들기\n3:정사각형 만들기\n4:모래시계 만들기\n5:마름모 만들기\n6:상위 메뉴로 가기\n7:종료\n");
	printf("원하는 작업의 번호를 입력하시오.");
	scanf("%d",&aa);

	switch (aa) {

	case 1:
		printf("원하는 직각삼각형의 크기를 입력하세요.");
		scanf("%d",&a);

		for(b=0;b<a;b++) {
		for(c=0;c<=b;c++) {
		A[b][c]='*';
		}

		}
		for(b=0;b<a;b++) {
		for(c=0;c<a;c++) {
		printf("%c",A[b][c]);
		}
		printf("\n");
		}
	break;
	case 2:
		printf("원하는 정삼각형의 크기를 입력하세요.");
		scanf("%d",&aa);

		k=aa/2;

		j=k;


		for(b=0;b<(aa/2)+1;b++) {

		for(c=k;c<=j;c++) {

		A[b][c]='*';

		}
		k=k-1;
		j=j+1;
		}

		for(b=0;b<aa;b++) {
		for(c=0;c<aa;c++) {
		printf("%c",A[b][c]);
		}
		printf("\n");
		}
	break;
	case 3:
		printf("원하는 정사각형의 크기를 입력하세요");
		scanf("%d",&a);

		for(i=0;i<a;i++) {
		for(k=0;k<a;k++) {

		A[i][k]='*';

		}


		for(i=0;i<a;i++) {
		for(k=0;k<a;k++) {

		printf("%3c",A[i][k]);
		}
		}
		printf("\n");
		}
	break;
	case 4: 
		printf("원하는 모래시계의 크기를 입력하세요.");
		scanf("%d",&a);

		k=a/2;
		j=k;
		e=1;
		f=a-1;

		for(l=0;l<(a/2)+1;l++) {

		for(h=l;h<=f;h++) {
		A[l][h]='*';
		}
		f=f-1;
		e=e+1;
		}
		x=l-1;

		for(b=x;b<=2*(a/2);b++) {

		for(c=k;c<=j;c++) {

		A[b][c]='*';
		}

		k=k-1; 
		j=j+1;
		}

		for(x=0;x<a;x++) {
		for(y=0;y<a;y++) {
		printf("%c",A[x][y]);
		}
		printf("\n");
		}
	break;
	case 5:
		printf("원하는 마름모의 크기를 입력하세요.");
		scanf("%d",&a);

		k=a/2;
		j=k;
		e=1;
		f=a-1;
      
		for(b=0;b<(a/2)+1;b++) {

		for(c=k;c<=j;c++) {

		A[b][c]='*';
		}

		k=k-1; 
		j=j+1;
		}

		for(l=a/2+1;l<a;l++) {

		for(h=e;h<f;h++) {
		A[l][h]='*';
		}
		f=f-1;
		e=e+1;
		}
		for(x=0;x<a;x++) {
		for(y=0;y<a;y++) {
		printf("%c",A[x][y]);
		}
		printf("\n");
		}
		printf("\n 복사를 진행하겠습니다... ");

     		system("pause");


		memcpy(A1 ,A ,sizeof(A));
		for(x=0;x<a;x++) {
		for(y=0;y<a;y++) {
		printf("%c",A1[x][y]);
		}
		printf("\n");
		}
	break;
	case 6:
		printf("상위 메뉴로 갑니다.\n");
	break;

	case 7:
	printf("서브에서 종료합니다.");
	exit(0);
	break;
	}
	break;
	}
break;	
case 3: printf("메인에서 종료합니다.");
 exit(0);
break;
}

}


}