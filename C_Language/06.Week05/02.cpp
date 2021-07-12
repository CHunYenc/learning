/*
02: 請設計一個程式，只能利用兩個for 或兩個while迴圈指令，
讓使用者輸入一個數字n後(需介於3~9之間)，
便可印出下面的圖案(下圖為n=5)：【提示:可使用abs()數學函數】
        1
       2 2
      3   3
     4     4
    5       5
     4     4
      3   3
       2 2
        1
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,a=1;	//宣告 n 
	printf("請輸入一個數字N (需介於3~9之間)：");	//讓使用者輸入 N 值 
	scanf("%d",&n);	//輸入後放入n值 
	fflush(stdin);	//清除暫存
	
	if(n>9 || n<3)
	{
		printf("輸入錯誤。\n");
	}
	else
	{
		for(int i=n;i>=-n;i--)	//宣告 i=2  
		{
			if(i==-1 || i==0)
				{
					continue;
				}
			for(int j=n;j>=-n;j--) 	//宣告i=2 	利用兩個 for 來產生 一個正方形 
			{	a++;
				if(j==-1 || j==0)
				{
					continue;
				}
				else if(abs(i)==n && j==n-n+1)
				{
					printf("1");
				}
					else if(abs(i)==n-1 && abs(j)==n-n+2)
					{
						printf("2");
					}
						else if(abs(i)==n-2 && abs(j)==n-n+3)
						{
							printf("3");
						}
							else if(abs(i)==n-3 && abs(j)==n-n+4)
							{
								printf("4");
							}
								else if(abs(i)==n-4 && abs(j)==n-n+5)
								{
									printf("5");
								}
									else if(abs(i)==n-5 && abs(j)==n-n+6)
									{
										printf("6");
									}
										else if(abs(i)==n-6 && abs(j)==n-n+7)
										{
											printf("7");
										}
											else if(abs(i)==n-7 && abs(j)==n-n+8)
											{
												printf("8");
											}
												else if(abs(i)==n-8 && abs(j)==n-n+9)
												{
													printf("9");
												}
				else
					printf(" ");
			}
			printf("\n");	//換行 
		}
	}
	system("pause");
	return 0;
}
