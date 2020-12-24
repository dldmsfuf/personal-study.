#include <iostream>
using namespace std;

int main()
{
	int a[10];
	int b[10];
	for (int j = 0; j < 10; j++)
		cin >> a[j]; // 10개 입력
	int i, k, q = 0;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < i; k++)
		{
			if (a[i] == a[k])
				break;
            // 중복 숫자가 발견될 경우 break에서 루프에 빠져나옴
		}

			b[q] == a[i];
			q++;
        // 중복숫자가 발견되지 않을 경우, 새로운 b배열에 새롭게 입력된 숫자를 저장
	}

	for (i = 0; i < q; i++)
	{
		cout << b[i] << " ";
        // 마지막으로 b배열에 저장된 겹치지 않는 정수를 출력
	}

	return 0;
}