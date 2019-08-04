/* 
HW2-8. 試撰寫一程式，要求使用者輸入天數，並將此數值轉換成幾個星期又幾天。
例如，將 18 天轉換成 2 個星期又 4 天，
並用以下的形式輸出其結果：【18 days are 2 weeks, 4 days.】  
*/
 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int d;					//宣告 d 變數 
	printf("請輸入天數："); //印出 請輸入天數 
	scanf("%d",&d);			//使用者輸入天數 
	fflush(stdin);			//將暫存器清空 

	printf("%d days are %d weeks, %d days.",d,d/7,d%7);		//印出  使用者輸入數值 及 轉換幾個星期又幾天 
	
	system("pause");
	return 0;
 }

