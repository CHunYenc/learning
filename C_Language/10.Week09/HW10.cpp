#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int i=0 ;
void p();	//自訂函數 個人資料 
void A(char a[49][10],char b[49][10],double c[49][4]);	//自訂函數 A題 
void B(char a[49][10],char b[49][10],double c[49][4]);	//自訂函數 B題 
void C(char a[49][10],char b[49][10],double c[49][4]);	//自訂函數 C題 
void D(char a[49][10],char b[49][10],double c[49][4],int t1,char t,double sum[50][1]);	//自訂函數 D題 
int main()
{
		int n,t1,x,y,z;
		double c[49][4],sum[49][1];	//宣告 n 列表 c,d,e 為  分數陣列 
		char a[49][10],b[49][10],t;	//a學號 b姓名 
	do
	{
		system("cls");
		p();	//印出個人資料 
		printf("請你選擇欲處理的成績作業：\n");	//印出 請你選擇欲處理的成績作業：
		printf("A、成績輸入\n");	//印出 A、成績輸入
		printf("B、總成績計算\n");	//印出 B、總成績計算
		printf("C、成績顯示\n");	//印出 C、成績顯示
		printf("D、總成績排序\n");	//印出 D、總成績排序
		printf("E、結束！\n");	//印出  E、結束！
		printf("以輸入的學生成績：%d 位。\n",i);
		printf("請輸入以上您要進入 A ~ E 選項：");	//印出  輸入以上您要進入 A ~ E 選項：
		scanf("%c",&n);	//輸入值 
		fflush(stdin);	//清除暫存 
		
		system("cls");	//清空畫面 
		
		switch(n)
		{
			case 'A':	//輸入 A,a 進入A題 
			case 'a':
				A(a,b,c);	//叫出自訂函數 A題 
			break;
			case 'B':	//輸入 B,b 進入B題 
			case 'b':
				B(a,b,c);	//叫出自訂函數 B題 
			break;
			case 'C':	//輸入 C,c 進入C題 
			case 'c':
				C(a,b,c);	//叫出自訂函數 C題 
			break;
			case 'D':	//輸入 D,d 進入D題 
			case 'd':
				D(a,b,c,t1,t,sum);	//叫出自訂函數 D題 
			break;
			case 'E':	//輸入 E,e
			case 'e':
				printf("結束。\n");	//印出結束 
 			break;
			default:
				printf("請重新輸入！不再範圍內。\n");	
				system("pause");
				system("cls");
			break;
		}
	}while(n!='E' && n!='e');
	 {
		
  	 }

	system("pause");
	return 0;		
}

void p()
{
	printf("=================\n個人資料：\n");
	printf("系級：資管一丁\t學號：b10610020\t姓名：陳雋諺 \n=================\n");
}
void A(char a[49][10],char b[49][10],double c[49][4])
{
	
	for(i;i<=49;i++)
	{
			printf("請輸入 %d 位同學的學號：",i+1);	//印出  請輸入 %d 位同學的學號：
			scanf("%s",&a[i]);	//輸入值 
			fflush(stdin);	//清除暫存 
			if (a[i][0] == '#')	//如果輸入 # 就停止輸入 
			{
				printf("%d\n",i);
				printf("要結束囉。\n");	//印出 要結束囉。
				break;	 
			}
			printf("請輸入 %d 位同學的姓名：",i+1);		//印出 請輸入 %d 位同學的姓名：
			scanf("%s",&b[i]);	//輸入 
			fflush(stdin);	//清空 
			printf("請輸入 %d 位同學的程設成績：",i+1);	//印出 請輸入 %d 位同學的程設成績：
			scanf("%lf",&c[i][0]);	//輸入 
			fflush(stdin);	//清空
			printf("請輸入 %d 位同學的會計分數：",i+1);	//印出 請輸入 %d 位同學的會計分數：
			scanf("%lf",&c[i][1]);	//輸入 
			fflush(stdin);	//清空
			printf("請輸入 %d 位同學的計概分數：",i+1);	//印出 請輸入 %d 位同學的計概分數：
			scanf("%lf",&c[i][2]);	//輸入 
			fflush(stdin);	//清空
			printf("\n"); 	//換行 
	}
	system("pause");
	system("cls");
}
void B(char a[49][10],char b[49][10],double c[49][4])
{
	printf("學號\t\t\t姓名\t程設\t會計\t計概\t總成績\n");	//印出 學號 姓名 程設 會計 計概 總成績 
	for(i=0;i<=50;i++)
	{
		if(a[i][0]!='#')
		{
			printf("%9s\t        %s\t%.1lf\t%.1lf\t%.1lf\t %.1lf\n",a[i],b[i],c[i][0],c[i][1],c[i][2],(c[i][0]+c[i][1]+c[i][2])/3.0);
			// 印出 學號 姓名 程設 會計  計概  總成績
		}
		else
		{
			break;
		}
	}
	
	system("pause");
	system("cls");
}
void C(char a[49][10],char b[49][10],double c[49][4])
{
	printf("學號\t\t\t姓名\t程設\t會計\t計概\n");	 	//印出 學號 姓名 程設 會計  計概 
	for(i=0;i<=50;i++)
	{
		if(a[i][0]!='#')	//如果 
		{
			printf("%9s\t        %s\t%.1lf\t%.1lf\t%.1lf\n",a[i],b[i],c[i][0],c[i][1],c[i][2]);
			// 印出 學號 姓名 程設 會計  計概 
		}
		else
		{
			break;
		}
	}
	system("pause");
	system("cls");
}
/*
●      
如果使用者選擇功能D，程式需將socre二維陣列中的成績資料，
依照總成績高低進行排序(由大到小)，然後將排序後的資料逐筆顯示在螢幕上，
並把排序後的資料回存至score二維陣列變數中。
*/

void D(char a[49][10],char b[49][10],double c[49][4],int t1,char t,double sum[50][1])
{
	int t2,t3;
	printf("學號\t\t\t姓名\t程設\t會計\t計概\t總成績\n");	//印出 學號 姓名 程設 會計 計概 總成績 
	
	for(int s=0;s<=49;s++)
	{
		sum[i][1] = (c[i][0]+c[i][1]+c[i][2])/3.0;
			for (int k=0;k<=49-k;k++)	//如果 下一個成績大於 這個成績  對調 
			{
				for(int y=0;y<=k-y;y++)
				{
					if(sum[y+1][1]>sum[y][1])
					{
						t1 = sum [y][1];	//總成績 
						sum [y+1][1] = sum [y][1];
						sum [y][1] = t1;
						
						t2 = a[y][10];	//學號 
						a[y+1][10] = a[y][10];
						a[y+1][10] = t2;
						
						t3 = b[y][10];	//姓名 
						b[y+1][10] = b[y][10];
						b[y+1][10]= t3;
					}
					if(c[y+1][0]>c[y][0])	//程設 分數比大小 
					{
						t1 = c[y][0];
						c[y][0] = c[y+1][0];
						c[y+1][0] = t1;
					}
					if(c[y+1][1]>c[y][1])	//程設 分數比大小 
					{
						t1 = c[y][1];
						c[y][1] = c[y+1][1];
						c[y+1][1] = t1;
					}
					if(c[y+1][2]>c[y][2])	//程設 分數比大小 
					{
						t1 = c[y][2];
						c[y][2] = c[y+1][2];
						c[y+1][2] = t1;
					}
				}	
			}
	}
	for(i=0;i<=49;i++)
	{
		if(a[i][0]!='#')
		{
			sum[i][1] = (c[i][0]+c[i][1]+c[i][2])/3.0;
			printf("%9s\t        %s\t%.1lf\t%.1lf\t%.1lf\t %.1lf\n",a[i],b[i],c[i][0],c[i][1],c[i][2],sum[i][1]);
			// 印出 學號 姓名 程設 會計  計概  總成績
		}
		else
		{
			break;
		}
	}
	system("pause");
	system("cls");
	printf("是否繼續？(Y/N)：");	//是否繼續 
	scanf("%c",&t);	//輸入 
	fflush(stdin);	//清空 
	
	if(t == 'Y' || t == 'y')	//如果是 Y y 
	{
		main();	//進入 主程式 
	}
	else	//否則 
	{
		exit(0);	//離開。 
	}
	
}
