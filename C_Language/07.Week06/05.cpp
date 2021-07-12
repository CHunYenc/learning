/*
HW7-5.試寫一個函數double square(double x)，讓主程式選單中選擇本題後，
會先讓使用者在主程式中輸入一個浮點數的數字x，則主程式會呼叫square (x)，
然後square ()函數會計算出x的平方結果，並傳回到主程式由主程式顯示出X的平方結果。
(此題要能算出包含小數的平方結果)
*/
#include <stdio.h>
#include <stdlib.h>
double square();
double square(double a);
int main()
{
	square();
	
	system("pause");
	return 0;
}

double square()
{
	double a;
	printf("請輸入一個浮點數的數字x：");
	scanf("%lf",&a);
	fflush(stdin);
	if(a<1)
	{
		printf("%lf \n",square(a));
	}
	else
	{
		printf("輸入錯誤，請輸入浮點數。\n");
	}
}

double square(double a)
{
	return a*a;
}
