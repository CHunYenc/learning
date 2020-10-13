/*
HW8-4.請宣告一個一維陣列的變數score，用來儲存5位同學的程式設計成績，
請你設計一程式，讓使用者可以由鍵盤輸入5位同學的程式設計成績，
並計算這5位學生程式的加總總分、平均分數、最高分、最低分，
以及低於平均分數的學生人數。
[學號最後三碼為011~020、031~040、051~060、071~080、091~100、111~120、131~140、151~160的同學作答]
*/ 

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int score[5],low=0,i=0,j=0,a=0,sum=0,max=0,min=0;	//宣告變數 score 陣列, low=0,i=0,j=0,a=0,sum=0,max=0,min=0
	double average=0;	//宣告倍浮點數 average 
	
	for(i=0;i<5;i++)	//迴圈 
	{	
		printf("請輸入同學 %d 位的成績：",i+1);	//輸出 請輸入同學 %d 位的成績：
		scanf("%d",&score[i]);	//讓使用者輸入
		fflush(stdin);	//清除暫存 
		if(i==0)	//如果 
		{
			max=score[0];	//先成為陣列 
			min=score[0];	//先成為陣列 
		}
		else	//否則 
		{
			if(score[i]>max)	//判斷 score 陣列是否大於max 
				max=score[i];	//大於 就成為max 
			if(score[i]<max)	//判斷 score 陣列是否小於max 
				min=score[i];	//小於 就成為min 
		}
		sum=sum+score[i];	//所有學生的總和 
	}
	average=(double)sum/i;	//平均 
	for(i=0;i<5;i++)	//迴圈 
	{
		if(average>score[i])	//如果有 同學的分數低於平均 
			low++;	//就加一 
	}
	printf("總分為：%d 分，平均分數為：%lf 分，最高分：%d 分，最低分：%d 分，低於平均的人數：%d 人。\n",sum,average,max,min,low);
	//輸出 總分為：%d 分，平均分數為：%lf 分，最高分：%d 分，最低分：%d 分，低於平均的人數：%d 人。 

	system("pause");
	return 0;
}

