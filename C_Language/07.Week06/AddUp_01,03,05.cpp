#include <stdio.h>
#include <stdlib.h>
void star();	//列表星星 
void menu();	//列表本體 
//// 上方兩個為列表需要 
void kitty();	//HW7-1  題目本體 
void kitty(int a);	//HW7-1 數字符合大小，正確後呼叫正確答案 
//// 以上為 HW7-1 
void num();		//HW7-3 題目本體 
void num(int a);	//HW7-3 數字符合大小，正確後呼叫正確答案 
//// 以上為 HW7-3
double square();	//HW7-5 題目本體 
double square(double a);	//HW7-5 題目要求的回傳值 
//// HW7-5
int main()
{
	menu();	// 主列表 
	
	system("pause");
	return 0;
}
////////////////////////	以上為主程式

/////////////	以下為自訂函數 
////////////	*主列表 
void star()
{
	printf("*************\n");	//主列表星星印出 
}

void menu()
{
	int i=0;	//宣告 i,a,b,c 變數 
	system("cls");	//清除畫面 
	do	// 
	{
		star();	//自訂函數 印星星 
		printf("B106xxxxx xxx Week06 作業列表 \n");	//印出 學號 姓名 第幾次作業 
		star();	//自訂函數 印星星 
		printf("(1).HW7-1\n");		//印出選單 (1).HW7-1 
		printf("(2).HW7-3\n");		//印出選單 (2).HW7-3  
		printf("(3).HW7-5\n");		//印出選單 (3).HW7-5
		printf("(4).離開程式。\n");	//印出選單 (4).離開程式。
		star();	//自訂函數 印星星
		printf("請輸入需要的號碼：");	//印出 請輸入需要的號碼：
		scanf("%d",&i);	//輸入 i值 
		fflush(stdin);	//清除暫存 
		system("cls");	//清空畫面 
		
		if(i>0 || i<5)	//如果 i 等於 1.2.3.4  
		{
			switch(i)	//使用switch判斷 
			{
				case 1: //進入題目 (1).HW7-1  
					kitty(); //印出 HW7-1 
				break;
				
				case 2:	//進入題目 (2).HW7-3
					num(); //印出 HW7-3
				break;
				
				case 3:	//進入題目 (3).HW7-5 
					square(); //印出 HW7-5 
				break;
				
				case 4:	//(4).離開程式。
					printf("要離開囉！\n");	//印出告知使用者要離開了 
				break;
				
				default:  //輸入其他數字 
					printf("輸入錯誤！請重新輸入。\n"); //印出輸入錯誤！請重新輸入 
					system("pause");
					system("cls");	//清除畫面 
				break;
			}
		}
	}while(i!=4);
	{
		
	}
}
///////////以下為HW7-1 自訂函數 
void kitty()
{
	int a;	//宣告變數a 
	printf("請輸入一個介於3~9的數字n：\n");	//印出  請輸入一個介於3~9的數字n：
	scanf("%d",&a);	//輸入 a值並輸入a 
	fflush(stdin);	//清除暫存 
	
	if(a>=10 || a<=2)	//如果 a大於等於10 或 a小於等於2 
	{
		printf("不在範圍內，請重新輸入。\n");	//印出  不在範圍內，請重新輸入。
	}
	else	//否則 
	{ 
		kitty(a); //印出 正確解答 
	}	
	system("pause");
	system("cls");	//清空畫面 
}
// HW7-1的正確解答函數 
void kitty(int a)
{
	for(int i=1;i<=a;i++)	//迴圈 I小於等於 輸入值 等於層數 
		{
			printf("Hello Kitty \n");	//印出 Hello Kitty
		}
} 
/////////////////////////// 
void num()		//HW7-3
{
	int a=0;	//宣告變數a 
	printf("請輸入一個介於10~100的數字n：");	//印出  請輸入一個介於10~100的數字n：
	scanf("%d",&a);	//輸入 a值並輸入a 
	fflush(stdin);	//清除暫存
	
	if(a<10 || a>101)	//如果 a大於101 或 a小於10 
	{
		printf("錯誤訊息。\n");		//印出  錯誤訊息。
	}
	else
	{	
		num(a);	//印出 HW7-3正確答案 
	}
	system("pause");
	system("cls");	//清空畫面 
}
void num(int a)
{
	printf("%d 的因數有 ",a); 	//印出 %d 的因數有
		for(int i=1;i<=a;i++)	//迴圈 印出每一個因數 
		if (a%i == 0)	//如果達成條件 
        {
            printf("%d ",i);	//印出 因數 
        }	
}
/////////////////////////// 
double square()		//HW7-5 題目主體 
{
	double a;	//宣告浮點數 a 
	printf("請輸入一個浮點數的數字x：");	//印出  請輸入一個浮點數的數字x：
	scanf("%lf",&a);	//輸入 a值並輸入a 
	fflush(stdin);	//清除暫存 
	if(a<1)	//如果 a小於1 
	{
		printf("%lf \n",square(a));	//印出答案 
	}
	else	//否則 
	{
		printf("輸入錯誤，請輸入浮點數。\n");	//印出 輸入錯誤，請輸入浮點數。
	}
	
	system("pause");
	system("cls");	//清空畫面 
}
double square(double a)	 
{
	return a*a; //回傳答案 
}

