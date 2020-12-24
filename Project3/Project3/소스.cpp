#include <stdio.h>
#include <string.h>
#define STUDENT 25 //ÇÐ»ý ¼ö 
int main() {
	int i;
	struct s {

		char num[6] = { '\0' };
		char name[20] = { '\0' };
		int kor;
		int eng;
		int math;
		int total;
		float avg;
		char grade[1];
	} stu[STUDENT];



	FILE* fp;
	//FILE* fp1;

	fopen_s(&fp,"input.txt", "rt");

	for (i = 0; i < STUDENT; i++) {
		fgets(stu[i].num, sizeof(stu[i].num), fp);
		fgets(stu[i].name, 20, fp);
		fscanf_s(fp, "%d", &stu[i].kor);
		fscanf_s(fp, "%d", &stu[i].eng);
		fscanf_s(fp, "%d", &stu[i].math);

		stu[i].total = stu[i].kor + stu[i].eng + stu[i].math;
		stu[i].avg = stu[i].total / 3;
		if (stu[i].avg >= 95.0) { stu[i].grade[0] = 'A'; stu[i].grade[1] = '+'; }
		else if (stu[i].avg >= 90.0) { stu[i].grade[0] = 'A'; stu[i].grade[1] = '0'; }
		else if (stu[i].avg >= 85.0) { stu[i].grade[0] = 'B'; stu[i].grade[1] = '+'; }
		else if (stu[i].avg >= 80.0) { stu[i].grade[0] = 'B'; stu[i].grade[1] = '0'; }
		else if (stu[i].avg >= 75.0) { stu[i].grade[0] = 'C'; stu[i].grade[1] = '+'; }
		else if (stu[i].avg >= 70.0) { stu[i].grade[0] = 'C'; stu[i].grade[1] = '0'; }
		else if (stu[i].avg >= 65.0) { stu[i].grade[0] = 'D'; stu[i].grade[1] = '+'; }
		else if (stu[i].avg >= 60.0) { stu[i].grade[0] = 'D'; stu[i].grade[1] = '0'; }
		else { stu[i].grade[0] = 'F'; stu[i].grade[1] = 0; }

		printf("%s", stu[i].num);
		printf("%s", stu[i].name);
		printf("%3d ", stu[i].kor);
		printf("%3d ", stu[i].eng);
		printf("%3d ", stu[i].math);
		printf("%3d ", stu[i].total);
		printf("%5.1f ", stu[i].avg);
		printf("%c%c ", stu[i].grade[0], stu[i].grade[1]);
		printf("\n");
	}
	//fclose(fp);


	fopen_s(&fp,"output3.txt", "wt"); 
	fprintf(fp, "===================================================================\n");
	fprintf(fp,"************************* * RECORD FILE * *************************\n");
	fprintf(fp, "NO            NAME            KOR. ENG. MATH. TOTAL AVERAGE GRADE \n");
	fprintf(fp, "===================================================================\n");

	for (i = 0; i < STUDENT; i++)
	{
		fprintf(fp, "%s %s %5d %5d %5d %5d %7.1f    %c%c\n", stu[i].num, stu[i].name, stu[i].kor, stu[i].eng, stu[i].math, stu[i].total, stu[i].avg, stu[i].grade[0], stu[i].grade[1]);
		fprintf(fp,"\n");
	}
	fclose(fp);
	//fclose(fp1);

}

