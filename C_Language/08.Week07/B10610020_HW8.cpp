#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define name "***********\n學號：B10610020 \n姓名：陳雋諺 \n作業：HW8 \n***********\n"
void list();	//主功能表 
void HW82();		//HW8-1 作業 
int	HW82(int n);	//HW8-1 作業回傳 
void HW84();	//HW8-4 作業 
void HW85();	//HW8-5 作業 
int main()
{

	list();	//自訂函數主功能表 
	
	system("pause");
	return 0;
}
//////////////////////////////// 以下為自訂函數 
void list()	//主功能表 
{
	int a;	//宣告 
	do{
		printf(name);	//印出個人資料 
		printf("歡迎進入主功\能表！！\n");	//印出 歡迎進入主功能表！！
		printf("A(a).HW8-2\nB(b).HW8-4\nC(c).HW8-5\nQ(q).離開。\n請輸入以下數字(請勿輸入其他字母，否則會跑錯。)：");
		//印出 A.HW8-2		B.HW8-4		C.HW8-5		Q.離開。	輸入以下數字(請勿輸入其他字母，否則會跑錯。)
		scanf("%c",&a);	//讓使用者輸入進a 
		fflush(stdin);	//清空暫存 
		system("cls");	//清空畫面 
		
		switch(a)	//SWITCH 選單 
		{
			case 65 :	//大寫A 
			case 97 :	//小寫A
				HW82(); 	//跑出自訂函數 
			break;
			case 66 :	//大寫B
			case 98 :	//小寫b
				HW84();		//跑出自訂函數 
			break;
			case 67 :	//大寫C
			case 99 : 	//小寫c
				HW85();		//跑出自訂函數 
			break;
			case 81:	//大寫Q 
			case 113:	//大寫q 
					printf("要離開囉！\n");	//印出告知使用者要離開了 
			break;
			default:  //輸入其他數字 
				printf("輸入錯誤！請重新輸入。\n"); //印出輸入錯誤！請重新輸入 
				system("pause");
				system("cls");	//清除畫面 
			break;
		}
	}while(a!=81 && a!=113);
	{
		
	}	 

}
/////////////////////////////////////////////// 以上為主頁面 
void HW82()	//HW8-2 
{
	int n=0,i=0;	//宣告變數 n ,i 
	printf("請輸入10~20的數字：");	//輸出  請輸入10~20的數字：
	scanf("%d",&n);	//使用者輸入數值至n 
	fflush(stdin);	//清空暫存 
	
	if(n<10 || n>20)	//如果 10 ~ 20 以內 
		printf("輸入的值不在範圍內，請重新輸入。\n");	//輸出 輸入的值不在範圍內，請重新輸入。
	else	//否則 
		printf("1*2 + 2*3 + 3*4 + 4*5 + ....+(n-1)* n = %d\n",HW82(n));	//印出 1*2 + 2*3 + 3*4 + 4*5 + ....+(n-1)* n 的結果
	
	system("pause");
	system("cls");
}
int HW82(int n)	//自訂函數HW82
{
	if(n==2)	//如果 n=2 
	{	
		return 2;	//回傳 2 
	}	
	return HW82(n-1)+(n-1)*n;	//回傳 自訂函數 + (n-1) *n  遞迴
	
	system("pause");
	system("cls"); //清除畫面 
}
///////////////////////////////////////// 
void HW84()	//HW8-4 
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
	system("cls");	//清除畫面 
}
void HW85()	//HW8-5 
{
		int a,v,n[6];	//宣告 a,v,n[6]陣列 
	srand(time(0));	//亂數從時間取 
	for(int i=0; i<=4; i++) 	//組數迴圈 
	{
		for(int j=0; j<=5; j++) //號碼迴圈 
		{	
			do	//先做 do....while 
			{
				n[j]=rand()%49+1;	//取亂數至號碼	
				for(v=0;v<=j;v++)	//用迴圈判斷有無與之前的數字重複 
				{
					if(n[j]==n[v])	// 判斷 j==v 判斷有無重複 
					break;	//重複就返回 
				}
			}while(v!=j);	//while v 不重複的情況 
			{
				if(j<10)	//如果小於10 
				{
					printf("%02d\t",n[j]);	//輸出 有0開頭的個位數 
				}
				else	//否則 
				{
					printf("%2d\t",n[j]);	//輸出十位數的數字 
				}
			}
		}
		printf("\n");
	}
	printf("以上為大樂透號碼。\n\n");	//輸出 以上為大樂透號碼。
	system("pause");
	system("cls");	//清除畫面 
}
