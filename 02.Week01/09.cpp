/*
HW2-9:叫糶祘Α块计耞计琌ㄢ计ぇ俱计
弧俱计タ俱计㎝璽俱计
璝计ㄢ计ぇ俱计玥块眤块计xxxㄢ计俱计
璝计ぃㄢ计ぇ俱计玥块眤块计xxxぃㄢ计俱计

叫块饼耞计278
眤块计278ぃㄢ计俱计2

叫块饼耞计-72
眤块计-72ㄢ计俱计 
*/ 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("叫块计");
	scanf("%d",&a);
	fflush(stdin);
	
	if (-9>a && a>-100 || a>9 && a<100)
	{
		printf("眤块 %d ㄢ计俱计 \n",a);
	}
	else
	{
		printf("眤块 %d ぃㄢ计俱计 \n",a);
	}
	system("pause");
	return 0;
 }

