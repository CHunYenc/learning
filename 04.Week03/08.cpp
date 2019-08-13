/*
08.羙XX﹋﹋尺舧贝计而
叫ㄏノfor癹伴腊糶祘Α程俱计
ㄤ计キよぇ㎝タ单赣计搭100
 XYZ - 100 = X2 + Y2 + Z2  (2琌キよ) 

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sum = 0;					  // sum 单 0
	double x = 0, y = 0, z = 0;		  //疊翴计 x,y,z 常单0
	for (int i = 100; i <= 1000; i++) //癹伴 程计 靡 100~999
	{
		x = i / 100;		  // 琵 X = κ计
		y = i % 100 / 10;	 // 琵 Y = ⑻计
		z = i % 100 % 10 / 1; // 琵 Z = 计
		sum = i - 100;		  // XYZ - 100 秈 sum

		if (sum == x * x + y * y + z * z) //狦 sum 单 x*x + y*y +z*z
		{
			printf("程俱计 = %d \n", i); // 程俱计
			break;								 //既氨
		}
	}

	system("pause");
	return 0;
}
