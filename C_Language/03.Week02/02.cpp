/*
02:請使用if或if-else指令撰寫一程式，讓使用者可由鍵盤輸入一個1~7之間的整數，
1~7的數字代表星期一到星期日。若輸入的是1~5，則顯示"今天要上班"；若輸入的是6，
則顯示"今天約會"；若輸入的是7，則顯示"今天上教堂"，若輸入的不是1~7，則顯示"輸入錯誤"。 
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{	
	int d;
	printf("請輸入1~7的數字：");
	scanf("%d",&d);
	
	if (d>=1 && d<=7)
	{
	if (d<6)
		printf("今天要上班。\n");
	else if (d==6)
		printf("今天約會。\n");
		else if (d==7) 
			printf("今天上教堂。\n");
	}
	
	else 
	printf("輸入錯誤。\n");
		
	system("pause");
	return 0;
 }

