/*
05:請使用rand()亂數函式指令撰寫一程式，
讓此程式可以產生n組亂數組成的序號(n由使用者從鍵盤的輸入值決定)，
每一組序號由10個字元組成(例如: Tx8Qop9NUW)，
其中的每個字元只能是英文大寫字母、英文小寫字母及0~9的數字組合而成，
不可以有其他非英文或數字的字元符號。
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n,a;	//宣告n,a
	printf("請輸入你要產生幾組的序號：");	//印出 請輸入你要產生幾組的序號： 
	scanf("%d",&n);	//輸入後的值 填入n 
	fflush(stdin);	//清除暫存 
	
	srand(time(0));	// 亂數參考點為 time 
	for(int i=1;i<=n;i++)	//產生迴圈  == 使用者輸入幾組的數量 
	{
		int z=1;	//宣告z=1 
		printf("第 %d 組 \n",i);	//印出 產生幾組	
		while(z<=10)	//Z==亂碼 要產生題目要求的十個亂碼 
		{
			a=rand()%127+1;	//a亂數的範圍  
			if((48<=a && a<=57) || (65<=a && a<=90) || (97<=a && a<=122)) //如果 ASCII碼 數字、大寫英文、小寫英文 
			{
				printf("%c",a);	//輸出 ASCII 產生的 字母或數字 
			z++; //z++ 讓他一個一個字母印 不會超過10個字母 
			}
		}

	printf("\n");	//換行 
	}
	
	system("pause");	
	return 0;
 }

