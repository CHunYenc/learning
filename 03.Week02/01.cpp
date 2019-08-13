/*
01:請使用if或if-else指令撰寫一程式，
讓使用者可由鍵盤輸入三個數值，然後比較三個數字的大小，
最後請依照數字大小，由小到大排序並顯示於畫面中。
*/	

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c; 							//宣告變數 a,b,c 
	printf("輸入第一個數值 A：");		//印出  輸入第一個數值 A： 
	scanf("%d",&a);						//使用者輸入 A 值 
	fflush(stdin);						//清除 暫存 
	
	printf("輸入第二個數值 B：");		//印出  輸入第二個數值 A：
	scanf("%d",&b);						//使用者輸入 B 值 
	fflush(stdin);						//清除 暫存
	
	printf("輸入第三個數值 C：");		//印出  輸入第三個數值 A：
	scanf("%d",&c);						//使用者輸入 C 值
	fflush(stdin);						//清除 暫存
	
	
	if(a<b && b<c)						//如果 a<b 和 b<c 
		printf("您輸入的值 A<B<C \n");	//則會印出 您輸入的值 A<B<C 
	else if(a<c && c<b)						//否則如果 a<c 和 c<b 
		printf("您輸入的值 A<C<B \n");		//則會印出 您輸入的值 A<C<B 
		else if(b<a && a<c)						//如果b<a 和 a<c 
		printf("您輸入的值 B<A<C \n");			//則會印出 您輸入的值 B<A<C 
			else if(b<c && c<a)						//否則如果 b<c 和 c<a 
			printf("您輸入的值 B<C<A \n"); 			//則會印出 您輸入的值 B<C<A 
				else if(c<a && a<b)						//否則如果c<a 和 a<b 
				printf("您輸入的值 C<A<B \n");			//則會印出 您輸入的值 C<A<B 
					else if(c<b && b<a)						//否則如果 c<b 和 b<a 
					printf("您輸入的值 C<B<A \n");			//會印出 您輸入的值 C<B<A
		
		
	system("pause");
	return 0;
}
