/*
04:�Шϥ�for���O�A�]�p�{����X�U�����Ϯ�: 
1 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	for(int i=2;i>=-2;i--)	//�ŧi i=2  
	{
		for(int j=2;j>=-2;j--) 	//�ŧii=2 	�Q�Ψ�� for �Ӳ��� �@�ӥ���� 
		{
			if(abs(i)==2 && abs(j)==2 || abs(i)==1 && abs(j)==1 || i==j)
			// i & j ==2 �O�Ĥ@�h�䨤 	i & j == 1 �h�O�ĤG�h�䨤 i==j �O �����I 
			{
				printf("1 ");	//�L�X 1 
			}
			else	
				printf("0 ");	//�L�X 0 
		}
	printf("\n");	//���� 
	}

	system("pause");
	return 0;
 }

