/*
05.腳腳XX稱笵﹊吹Ё计(Armstrong计)Τㄇ
┮孔Armstrong计琌计俱计
ㄤ计ぇミよ㎝(Ωよ羆㎝)单硂计计セō
ㄒ153琌Armstrong计153=13+53+33  
(1Ωよ+5Ωよ+3Ωよ)
叫ㄏノfor癹伴级糶祘Αт┮ΤArmstrong计
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0, x = 0, y = 0, z = 0;
	for (i = 100; i < 1000; i++)
	{
		x = i / 100;
		y = i % 100 / 10;
		z = i % 100 % 10 / 1;

		if (i == x * x * x + y * y * y + z * z * z)

			printf("%d = %d + %d + %d \n", i, x, y, z);
	}

	system("pause");
	return 0;
}
