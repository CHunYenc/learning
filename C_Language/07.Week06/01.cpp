/*
HW7-1.請試寫一個函數void kitty(int)，讓主程式選單中選擇本題後，
會先讓使用者在主程式中輸入一個介於3~9的數字n，如果超過此範圍會產生錯誤訊息，
若符合3~9的數字，則主程式會呼叫kitty(n)，然後kitty()函數會自動產生n行的”Hello Kitty”字樣，
執行完成後，使用者按任意健會返回主選單，讓使用者繼續選擇要執行的其它題目。
*/ 

#include <stdio.h>
#include <stdlib.h>
void kitty();
void kitty(int a);
int main()
{	
	kitty();
	
	system("pause");
	return 0;
}

void kitty()
{
	int a;
	printf("請輸入一個介於3~9的數字n：\n");
	scanf("%d",&a);
	fflush(stdin);
	
	if(a>=10 || a<=2)
	{
		printf("不在範圍內，請重新輸入。\n");
	}
	else
	{ 
		kitty(a);
	} 
}
void kitty(int a)
{
	for(int i=1;i<=a;i++)
		{
			printf("Hello Kitty \n");
		}
}
