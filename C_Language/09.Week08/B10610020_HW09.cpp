#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define name "系別：資管一丁\n學號：B10610020\n姓名：陳雋諺\n"
void menu();	//自訂函數 選單 
void HW91();	//自訂函數 HW91 
void HW92();	//自定函數 HW92 
void HW94();	//自訂函數 HW94 
int main()
{
	menu();
	system("pause");
	return 0;
}

void menu()
{
	int a;		//宣告 a 
	do
	{
		printf(name);		//印出個人資料 
		printf("歡迎來到 HW9 作業列表，需輸入以下數字進入作業。\n");	//印出	歡迎來到 HW9 作業列表，需輸入以下數字進入作業。 
		printf("A.HW9-1\n");	//印出 A.HW9-1
		printf("B.HW9-2\n");	//印出 B.HW9-2
		printf("C.HW9-3\n");	//印出 C.HW9-3
		printf("Q.結束\n");		//印出 Q.結束
		printf("請輸入以上作業編號：");	//印出 請輸入作業編號 
		scanf("%c",&a);	//輸入值儲存到a 
		fflush(stdin);	//清除暫存檔 
		system("cls");	//清空畫面 
		
		switch(a)	// 使用 Switch 
		{
			case 65 :	// 輸入是 ascii 65 
			case 97 :	// 輸入是 ascii 97 
				HW91();	//跑出hw91 
			break;	
			case 66 :	//	輸入是 ascii 66  
			case 98 :	// 	輸入是 ascii 98 
				HW92();	//印出 hw92 
			break;	 
			case 67 :	// 輸入是 ascii 67 
			case 99 :	// 輸入是 ascii 99 
				HW94();	//印出 hw94 
			break;
	
			case 81 :
			case 113:
				printf("離開囉！\n");
			break;
			default:
				printf("請重新輸入！範圍錯誤。\n");
				system("pause");
				system("cls");
			break;
		}
	}while(a!=81 && a!=113);
	{
	}
}
void HW91()
{
		int i=0,j=0,y=0,c=0,n=0,s=0;	//宣告 
	int a[4],b[4];	//宣告 電腦陣列 與 玩家陣列 
	do	
	{
		do
		{
			srand(time(0));	//亂數 
			for(i=0;i<=3;i++)	
			{
				a[i]=rand()%10;	//0~10亂數 
				for(j=0;j<i;j++)	 //比對重複 
				{
					if(a[i]==a[j])	//電腦如果有一樣 
					{
						a[j]=-1;	 
						break;
					}
					if(a[j]==-1)	//break; 
					{
						break;
					}
				}
			}
			
		}while(a[j]==-1);	
		{
			system("cls");	//清除畫面 
			printf("題目：");	//印出題目 
			for(i=0;i<=3;i++)	 
			{
				printf("%d",a[i]);	//印出電腦出的題目數字 
			}
			printf("\n");	//換行 
		}
		for(i=1;i<=10;i++)
		{
		printf("請輸入4位數:");	//印出請輸入4位數:
		scanf("%d",&n);	// 使用者輸入 
		fflush(stdin);	//清除暫存 
		if(n>99&&n<10000)	//如果 在範圍內 
		{
			y=0,s=0;	//每次猜題初始 A,B 
			b[0]=n/1000;	//千位 
			b[1]=n%1000/100;	//百位 
			b[2]=n%100/10;	//十位 
			b[3]=n%10/1;	//個位 
			for(j=0;j<=3;j++)
			{
				for(s=0;s<=3;s++)	//檢查是否跟題目有相對 
				{
					if(b[j]==a[s])	
					{	
						if(b[j]==a[j])
						{
							y++;	//若對 y++ 這是指位數相對 所以 A++ 
						}
						else
						{
							c++;	//若不對 c++ 就是 B++
						}
					}
				}
			}
			printf("%dA %dB 輸入第%d次\n",y,c,i);	//印出 幾A幾B 
			if(y==4)	//如果全對 
			{
				printf("恭喜猜中了\n");	//印出恭喜猜中了 
				break;
			}
		}	
	
		else
		{
			printf("輸入錯誤\n");	//否則輸入錯誤  
			i--;	//i--; 
		}
		if(i==10)	//如果輸入超過十次 
		{
		printf("超出輸入次數，遊戲失敗。\n請按任意按鍵重玩。\n");	//印出 超出輸入次數，遊戲失敗。\n請按任意按鍵重玩。
	
		system("pause");
		system("cls");
		}	
		}
	}while(y!=4);
	{
		
	}
	system("pause");
	system("cls");
}
void HW92()
{
	int W=0,i=0,j=0,t1=0,t2=0,t3=0,t4=0,z=-1,x=99;	//宣告變數 w,i,j,t1,t2,t3,t4,z,x 
	double sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,e=0,f=0,g=0,h=0;	//宣告變數 sum , sum1 ~ sum7
	double a[3][4]=
				{
					{18.2,17.3,15.0,13.4},
					{23.8,25.1,20.6,17.8},
					{20.6,21.5,18.4,15.7}
				};	
	//////////////////////////	宣告陣列 
	printf("(1).\n\n");	//輸出第一題 
	for(W=0;W<=3;W++)	//迴圈 單獨印出星期 
	{
		printf("\t星期 %d ",W+1);	//印出星期 幾 
	}
	printf("\n");	//空格 
	
	for(i=0;i<=2;i++)	//迴圈時段分層 
	{
		printf("時段 %d\t",i+1);	//印出 時段 
		for(j=0;j<=3;j++)	//迴圈 溫度 
		{	
			printf(" %.1lf\t",a[i][j]);	//印出陣列中的溫度值 
			if(a[i][j]>z)	//如果	a[i][j]>z z=-1 大於 -1 後， 
			{
				z=a[i][j];	//儲存在z 
				t1=i;	// t1 這時 等於 i 
				t2=j;	// t2 這時 等於 j 
			}
			if(a[i][j]<x)	//如果 a[i][j]<x x=99 小於 99 後 
			{
				x=a[i][j];	//儲存在 x 
				t3=i;	//這時 t3 儲存 i 
				t4=j;	//t4 儲存 j 
			}
		}
		sum1+=a[i][0];	//將 星期一的溫度加起來 
		sum2+=a[i][1];	//將 星期二的溫度加起來 
		sum3+=a[i][2];	//將 星期三的溫度加起來 
		sum4+=a[i][3];	//將 星期四的溫度加起來 
		sum5=a[0][0]+a[0][1]+a[0][2]+a[0][3];	//將 時段一的溫度加起來 
		sum6=a[1][0]+a[1][1]+a[1][2]+a[1][3];	//將 時段二的溫度加起來 
		sum7=a[2][0]+a[2][1]+a[2][2]+a[2][3];	//將 時段三的溫度加起來 
		
		
		printf("\n");
	}
	printf("(2).\n每日均溫：\n\t星期 1\t 星期 2\t 星期 3\t 星期 4\n \t%.3lf\t %.3lf\t %.3lf\t %.3lf \n",sum1/3,sum2/3,sum3/3,sum4/3);
	////第二題 印出 星期 1 ~ 4 的溫度均溫 
	printf("(3).\n");		//印出第三題 
	printf("時段 1 的平均溫度：%.3lf 度 \n",sum5/4);	//印出 時段 1 的平均溫度
	printf("時段 2 的平均溫度：%.3lf 度 \n",sum6/4);	//印出 時段 2 的平均溫度
	printf("時段 3 的平均溫度：%.3lf 度 \n",sum7/4);	//印出 時段 3 的平均溫度
	
	printf("(4).\n");	//印出第四題 
		printf("溫度最高的日子：星期 %d，時段 %d\n",t2+1,t1+1);	//印出  溫度最高的日子：星期 %d，時段 %d
	printf("(5).\n");	//印出第五題 
		printf("溫度最低的日子：星期 %d，時段 %d\n",t4+1,t3+1);	//印出  溫度最低的日子：星期 %d，時段 %d
	
	system("pause");
	system("cls");
} 
void HW94()
{
		int b=0,c=0,n=0,z=0,o1=0,o2=0;	//宣告
	int a[13][13] = {0}; 	//最大13
	printf("請輸入3~13的奇數：");	//輸出 	請輸入3~13的奇數：
	scanf("%d",&n);	//讓使用者輸入 儲存至n 
	fflush(stdin);
    
	if(n%2==0 || n<3 || n>13)	//如果  n%2==0 或 n<3 或 n>13
	{
		printf("請重新輸入，不再範圍內。\n");	//印出 請重新輸入，不再範圍內。 
	}
	else	//否則 
	{
		c=(n-1)/2;	// 印出數字 1 的位置 
		for(z = 1; z <= n*n; z++) //迴圈 格數 
		{ 
	   		a[b][c]=z;	 //每個陣列中存在者 z 
	   		o1=b;	//舊的b 儲存在o1 
	   		o2=c;	//舊的c 儲存在o2 
	   		b--;	//b的位置 
	   		c++;	//b的位置 
	   		if(b<0)	//如果超出行 
	   			b=n-1;	//會跑出在最下面 
	   		if(c>=n)	//如果超出列 
	   			c=0;	//會跑出在最左邊 
	   		if(a[b][c]!=0)	//檢測是否有數字 
	   		{	
	   			c=o2;	 
				b=o1+1;
				if(b>=n)
					b=0;	
			}
	   		
		} 	
		for(b = 0; b <= n-1; b++) 	//用迴圈印出數字 
		{ 
	        for(c = 0; c <= n-1; c++)  
	            {
					printf("%3d\t", a[b][c]);	//因為最大是三位數 使用%3d 
				 }	
				 printf("\n");	//換行 
		}
    }
	system("pause");
	system("cls");
} 
