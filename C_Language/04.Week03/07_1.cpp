/*
07.風趣的xx想使用for迴圈指令撰寫一程式，讓使用者能由鍵盤輸入一個長度大於1000(公尺)的正整數N，

假設xx每天會剪去這條繩子一半的長度，請撰寫程式計算問需要花費幾天的時間，繩子的長度會短於5公尺？

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0, i = 0, sum = 0;

	printf("使用者能由鍵盤輸入一個長度大於1000(公尺)的正整數N :");
	scanf("%d", &n);
	fflush(stdin);

	if (n > 1000)
	{
		for (i = n; i > 5; sum++)
		{
			i = i / 2;
			printf("第 %d 天 , 長度 %d (m) \n", sum + 1, i);
		}
	}

	else
		printf("輸入錯誤 ~ \n");

	system("pause");
	return 0;
}
