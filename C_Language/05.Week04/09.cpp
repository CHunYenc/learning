/*
HW5-9.請使用for指令設計一程式讓使用者輸入n，
並印出下面的圖案(下圖為n=5時顯示的n層倒正三角形 
【學號末碼為4,8,7,0請做此題】

EDCBABCDE
 DCBABCD
  CBABC
   BAB
    A
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0,j=0,n=0; // 宣告i,j,n
	printf("請輸入n:");	//印出 請輸入:n 
	scanf("%d",&n);	//讓使用者輸入n值 
	fflush(stdin); //清除暫存檔 
	
	for(i=0;i<=n;i++)  //倒三角形 
	{  
        for(j=1;j<=i;j++) //左方空白數，依照 i++ 空白遞增 
		{ 
			printf(" ");    
		} 
		for(j=n-i-1;j>=0;j--) //印出左方英文數字  
       	{ 
		    printf("%c",65+j);	//從A開始印 EDCBA 依序排下去 
        } 
		for(j=1;j<=n-i-1;j++)  //印出右方英文數字 
        { 
		    printf("%c",65+j); 	//從B開始，所以初始值設1 
		} 
			printf("\n");
    }

	system("pause");
	return 0;
 }

