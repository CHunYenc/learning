/*
03:請使用if或if-else指令設計一程式，使用者依序輸入自己的身高與體重資料，
並計算他的BMI指數後，判斷使用者是否過重或過輕。本題目輸入的身高數值，
以公尺為單位，BMI的公式為BMI=體重/(身高)^2，即體重除以身高的平方。若BMI值小於17，
則輸出【您的BMI值為xxx，您過輕了】，若BMI值大於24，則輸出【您的BMI值為xxx，您過重了】，
若BMI值為其他值，則輸出【您的BMI值為xxx，您很健康】 (註:BMI需保留至小數點後2位) 
範例1:
請輸入您的身高與體重資料：1.67　90.1
您的BMI值為32.31，您過重了 
範例2:
請輸入您的身高與體重資料：1.67　40.1
您的BMI值為14.38，您過輕了 
範例3:
請輸入您的身高與體重資料：1.67　50.1
您的BMI值為17.96，您很健康
*/ 

#include <stdio.h>
#include <stdlib.h>
int main()
{
	double a,b,c;
	printf("請輸入你的身高,體重資料：");
	scanf("%lf,%lf",&a,&b);
	fflush(stdin);
		
	if ((b/a)/a<17)
		printf("您的BMI值為 %.2lf，您過輕了。\n",(b/a)/a);
	else if (b/a/a>24)
		printf("您的BMI值為 %.2lf，您過重了。\n",(b/a)/a);
		else
			printf("您的BMI值為 %.2lf，您很健康。\n",(b/a)/a);
	

	system("pause");
	return 0;
 }

