/* 
HW2-6: 請寫一個程式能讓使用者輸入五位學生的成績，
然後再計算這五位學生成績相加後的總分，
以及五位學生的平均成績，
最後在畫面中顯示出這五位學生成績的相加總分及平均分數。
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	double a,b,c,d,e;
	printf("請輸入第一位學生的成績：");
	scanf("%lf",&a);
	fflush(stdin);
	
	printf("請輸入第二位學生的成績：");
	scanf("%lf",&b);
	fflush(stdin);
	
	printf("請輸入第三位學生的成績：");
	scanf("%lf",&c);
	fflush(stdin);
	
	printf("請輸入第四位學生的成績：");
	scanf("%lf",&d);
	fflush(stdin);
	
	printf("請輸入第五位學生的成績：");
	scanf("%lf",&e);
	fflush(stdin);

	printf("五位學生的成績加總為 %.2lf ，平均成績為 %.2lf 。\n",a+b+c+d+e,(a+b+c+d+e)/5);
	
	system("pause");
	return 0;
 }

