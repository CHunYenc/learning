/*
01: 請設計一個程式，只能利用兩個for 或兩個while迴圈指令，
讓使用者輸入一個數字n後(需介於3~9之間)，便可印出下面的圖案(下圖為n=5)
：【提示:可使用abs()數學函數】
    543212345
     4321234
      32123
       212
        1
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n;	//宣告 n 
	printf("請輸入一個數字N (需介於3~9之間)：");	//讓使用者輸入 N 值 
	scanf("%d",&n);	//輸入後放入n值 
	fflush(stdin);	//清除暫存 
	
	if(n<3 || n>9)	//如果 n<3 n>9 
		{
			printf("輸入錯誤。\n");	//印出 輸入錯誤。 
		} 
	else	//否則 
	{
		for(int i=0;i<n;i++)	//宣告迴圈 i=層數 i會小於等於輸入值的層數 
		{	
			for(int j=n;j>=-n,j>=i-n;j--)	//宣告迴圈 j=n n-1 n-2 n-3 直到 -n 印第一層 
			{
				if(j>=48 || j<=57)	//如果 符合 ASCII碼  48~58 數字 
				{
					if(j==0 || j==-1)	//如果 j 印出 0 或 -1 都跳過 ， -1 因abs所以也等於1
					{
						continue;	//繼續 
					}
					if(i>=1 && j>=n-(i-1)) //左下角空白的三角形的規律 
					{
						printf(" ");	//印出空白 
						continue;	//繼續 
					}		
				printf("%c",abs(48+abs(j)));	//印出ASCII碼 不論正負 
				}
			}
			printf("\n");	//換行 
		}
	}
	system("pause");
	return 0;
 }

