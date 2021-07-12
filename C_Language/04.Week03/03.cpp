/*
03.富翁XX因為錢太多，所以想要知道定存十年的錢會有多少，
請你使用for迴圈指令撰寫一程式，讓使用者能由鍵盤輸入要存入銀行的金額，
利率是4%，如果每年的利息都繼續存入銀行(即複利)，請計算在10年後，
本金加利息一共多少錢。
*/ 

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0;  //宣告變數i=0 
	double sum=0;	//宣告倍浮點數 sum = 0 
	printf("請輸入要存入銀行的金額：");	//印出 題目要求  請輸入要存入銀行的金額：
	scanf("%lf",&sum);	//讓使用者輸入 使用 %lf 
	fflush(stdin);	//清除暫存 
	
	if(sum>0)	//如果 sum 大於 0 
	{
		for(i=1;i<=10;i++) //迴圈 for i=1 第一年 ; 十年 i<=10 ; i++ 每加一 
		{
			sum=sum*1.04;	// Sum 為使用者輸入存入金額 金額*1.04  
			printf(" %d 年後，本金加利息一共：%lf \n",i,sum);	// 印出每一年至十年 本金加利息一共多少錢 
		}
	}
	else	//若 sum 在 sum > 0 之外 
		printf("輸入錯誤。\n");	//印出 輸入錯誤。 

	system("pause");
	return 0;
 }

