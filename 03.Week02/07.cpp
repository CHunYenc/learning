/*
07:叫糶祘Α琵ㄏノ块ヴ计俱计パ祘Α块ㄤ计
κ计⑻计计计
璝计禬筁计┪计玥陪琌岿粇癟 
 ㄒ:   块4976玥陪ボ
        计: 4
        κ计: 9
        ⑻计: 7
        计: 6
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0;
	printf("块计俱计");
	scanf("%d", &a);
	fflush(stdin);

	if (a > 0)
	{
		printf("计%d\n", a / 1000);
		printf("κ计%d\n", a % 1000 / 100);
		printf("⑻计%d\n", a % 1000 % 100 / 10);
		printf("计%d\n", a % 1000 % 100 % 10 / 1);
	}
	else
	{
		printf("岿粇癟\n");
	}

	system("pause");
	return 0;
}
