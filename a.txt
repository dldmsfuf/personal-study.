#include <stdio.h>
#include <string.h>
#define STUDENT 25 //학생 수 
main(){
	int i;
	struct s{
		int num[6];
		char name[20];
		int kor;
		int eng;
		int math;
		int total;
		float avg;
		char grade[1];
	} stu[STUDENT];
	
	
	
	FILE *fp;
	FILE *fp1;
	
	fp=fopen("input.txt","r");
	
	for(i=0;i<STUDENT;i++){
		fscanf(fp, "%s", &stu[i].num); 
		fgets(stu[i].name, 20, fp);
		fscanf(fp, "%d", &stu[i].kor);
		fscanf(fp, "%d", &stu[i].eng);
		fscanf(fp, "%d", &stu[i].math);
		
		stu[i].total = stu[i].kor + stu[i].eng + stu[i].math;
		stu[i].avg = stu[i].total/3;
		if(stu[i].total >= 285) {stu[i].grade[0] = 'A'; stu[i].grade[1]='+';}
		else if(stu[i].total >= 270) {stu[i].grade[0] = 'A'; stu[i].grade[1]='0';}
		else if(stu[i].total >= 255) {stu[i].grade[0] = 'B'; stu[i].grade[1]='+';}
		else if(stu[i].total >= 240) {stu[i].grade[0] = 'B'; stu[i].grade[1]='0';}
		else {stu[i].grade[0] = 'F'; stu[i].grade[1]=0;}
		
		printf("%s", stu[i].num);
		printf("%s", stu[i].name);
		printf("%3d ", stu[i].kor);
		printf("%3d ", stu[i].eng);
		printf("%3d ", stu[i].math);
		printf("%3d ", stu[i].total);
		printf("%5.1f ", stu[i].avg);
		printf("%c%c ", stu[i].grade[0],stu[i].grade[1]);
		printf("\n");
	}
	fclose(fp);
	
	
	////////////////여기서 부터 파일 출력///////////////////////
	
	fp1 = fopen("output1.txt","w");
	
	fprintf(fp1, "************************* * RECORD FILE * *************************\n");
	fprintf(fp1, "===================================================================\n");
	fprintf(fp1,"NO            NAME            KOR. ENG. MATH. TOTAL AVERAGE GRADE \n");
	fprintf(fp1, "===================================================================\n");
	
	for(i=0;i<STUDENT;i++)
	{
	fprintf(fp1,"%s %s %5d %5d %5d %5d %7.1f    %c%c\n", stu[i].num, stu[i].name, stu[i].kor, stu[i].eng, stu[i].math, stu[i].total, stu[i].avg, stu[i].grade[0],stu[i].grade[1]);
	fprintf(fp1, "-----------------------------------------------------------------\n");
	}
	fclose(fp1);
	
}