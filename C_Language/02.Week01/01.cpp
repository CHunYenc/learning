/*HW2-1. 
請撰寫ㄧ個程式，將年齡以年為單位，
轉成以天為單位，並輸出輸入年齡對照的天數，
例如年齡輸入10，則顯示【你的年齡為10歲，在地球上共生活了3650天】。
(在此程式中不必考慮每年可能有不同的天數，假設 1 年=365 天)
*/  

#include <stdio.h>
#include <stdlib.h>
int main()
{

	int y;
	printf("請輸入你的年齡：");
	scanf("%d",&y);
	printf("【你的年齡為 %d 歲， 在地球上共生活了 %d 天】\n",y,y*365);
	
	system("pause");
	return 0;
 }

