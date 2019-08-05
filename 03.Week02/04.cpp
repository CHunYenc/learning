/*
04:請使用if或if-else指令寫一個程式，能讓使用者可由鍵盤輸入數值1~12，
程式中須包含以下的月份判斷，當使用者輸入一個數字後，
程式會印出相對月份之英文字，若超出範圍則印出錯誤訊息。
例如：
     輸入：   1           2          3      …       12
     輸出：JANUARY    FEBRUARY     MARCH    …    DECEMBER

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("請輸入鍵盤 1 ~ 12 ：");
	scanf("%d", &a);
	fflush(stdin);

	if (a <= 12 && a > 0)
	{
		if (a == 1)
			printf("JANUARY\n");
		else if (a == 2)
			printf("FEBRUARY\n");
		else if (a == 3)
			printf("MARCH\n");
		else if (a == 4)
			printf("APRIL\n");
		else if (a == 5)
			printf("MAY\n");
		else if (a == 6)
			printf("JUNE\n");
		else if (a == 7)
			printf("JULY\n");
		else if (a == 8)
			printf("AUGUST\n");
		else if (a == 9)
			printf("SEPTEMBER\n");
		else if (a == 10)
			printf("OCTOBER\n");
		else if (a == 11)
			printf("NOVEMBER\n");
		else if (a == 12)
			printf("DECEMBER\n");
	}

	else
		printf("錯誤訊息。\n");

	system("pause");
	return 0;
}
