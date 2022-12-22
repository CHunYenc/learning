/*
03: 請使用for指令，設計程式輸出下面的圖案：
   1 1 1 1 1
   1 0 0 0 1
   1 0 1 0 1
   1 0 0 0 1
   1 1 1 1 1
*/ 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	for (int i=2;i>=-2;i--)
	{	
		for(int j=2;j>=-2;j--)
		{
			if(abs(i)==2 || abs(j)==2|| i==0 && j==0)  
			{
				printf("1 ");
			}
			else
				printf("0 ");
		}
		printf("\n");
	}
	
	for(int i=2;i>=-2;i--)	
	{	
		for(int j=2;j>=-2;j--)
		{
			printf("(%2d,%2d)\t",i,j);	
		}
		printf("\n");
	}

	system("pause");
	return 0;
 }

