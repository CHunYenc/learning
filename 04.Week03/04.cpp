/*
04.有一位才華出眾的XX想知道,如果輸入任意一個大於10的正整數偶數n,
則計算出的12-22+32-42+52-62+72-82+92-102+............-n2結果是多少，
請你使用for指令幫xx完成能計算出這一個結果的程式(禁用速算公式, 僅可使用迴圈指令)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, i, sum = 0;
	printf("輸入任意一個大於10的正整數偶數n：");
	scanf("%d", &a);
	fflush(stdin);

	if (a > 10 && a % 2 == 0)
	{
		printf(" - 迴圈運算模式\n");
		for (i = 1; i <= a; i++)
		{
			if (i % 2 == 0)
				sum = sum - (i * i);
			else
				sum = sum + (i * i);
			printf("12-22+32-42+52-62+72-82+92-102+............-n2 結果為 %d \n", sum);
		}
		printf(" - 迴圈運算模式\n");
		printf("最後答案：12-22+32-42+52-62+72-82+92-102+............-n2 結果為 %d \n", sum);
	}

	else
		printf("輸入錯誤。\n");
	system("pause");
	return 0;
}
