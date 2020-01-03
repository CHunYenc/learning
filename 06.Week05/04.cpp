/*
04:請使用for指令，設計程式輸出下面的圖案: 
   	1 0 0 0 1
   	0 1 0 1 0
   	0 0 1 0 0 
   	0 1 0 1 0
	1 0 0 0 1
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	for(int i=2;i>=-2;i--)	//宣告 i=2  
	{
		for(int j=2;j>=-2;j--) 	//宣告i=2 	利用兩個 for 來產生 一個正方形 
		{
			if(abs(i)==2 && abs(j)==2 || abs(i)==1 && abs(j)==1 || i==j)
			// i & j ==2 是第一層邊角 	i & j == 1 則是第二層邊角 i==j 是 中心點 
			{
				printf("1 ");	//印出 1 
			}
			else	
				printf("0 ");	//印出 0 
		}
	printf("\n");	//換行 
	}

	system("pause");
	return 0;
 }

