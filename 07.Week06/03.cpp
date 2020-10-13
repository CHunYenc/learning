/*HW7-3.請試寫一個函數void num(int)，讓主程式選單中選擇本題後，
會先讓使用者在主程式中輸入一個介於10~100的數字n，如果超過此範圍會產生錯誤訊息，
若符合10~100的數字，則主程式會呼叫num(n)，然後num()函數會列出此數之所有正因數。 
【說明】此題目所說之因數均為正因數，不考慮負因數的情況。

[範例一]請輸入一個10~100的數字：100
100的所有因數為1 2 4 5 10 20 25 50 100

[範例二]請輸入一個10~100的數字：11
11的所有因數為1 11
*/
#include <stdio.h>
#include <stdlib.h>
void num();
void num(int a);
int main()
{
	num();
		
	system("pause");
	return 0;
}

void num()
{
	int a=0;
	printf("請輸入一個介於10~100的數字n：");
	scanf("%d",&a);
	fflush(stdin);
	
	if(a<10 || a>100)
	{
		printf("錯誤訊息。\n");		
	}
	else
	{	
		num(a);	
	}
}
void num(int a)
{
	printf("%d 的因數有 ",a); 
		for(int i=1;i<=a;i++)
		if (a%i == 0)
        {
            printf("%d ",i);
        }	
}
