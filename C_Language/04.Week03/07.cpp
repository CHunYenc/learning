/*
07.風趣的XX想使用for迴圈指令撰寫一程式，讓使用者能由鍵盤輸入一個長度大於1000(公尺)的正整數N，

假設xx每天會剪去這條繩子一半的長度，請撰寫程式計算問需要花費幾天的時間，繩子的長度會短於5公尺？
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sum = 0, d = 0;

	printf("請輸入一個長度大於1000(m)的正整數 N :");
	scanf("%d", &sum);
	fflush(stdin);

	if (sum > 1000)
	{
		for (d = 1; d > 0; d++)
		{
			sum = sum / 2;
			printf("第 %d 天變成 %d (m)，繩子的長度所以在 %d 天會短於5公尺 \n", d, sum, d);

			if (sum < 5)
			{
				break;
			}
		}
	}
	else
		printf("輸入錯誤 \n");

	system("pause");
	return 0;
}
