#include <stdio.h>
#include <stdlib.h>
int main()
{
	for(int i=1;i<=7;i+=3)
	{
		for(int j=1;j<=9;j++)
		{	
			for(int k=0;k<=2;k++)
				{
					printf("%d*%d=%2d\t",i+k,j,(i+k)*j);
				}
				printf("\n");
		}
		
		printf("\n");
	}

	system("pause");
	return 0;
 }

