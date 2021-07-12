/*
08:�Шϥ�rand()�üƨ禡���O���g�@�ӵ{���A
���{���i�H���ͤ@�Ӥ���1~1000 �������Ʀrn�A
�ñq1 ��n �������Ʀr���A�N�C�Ӧ�Ƭۥ[����7 ���Ʀr��ܥX�ӡC
�Ҧp�G�q���üƲ��ͪ��Ʀr��35�A�h�e�����|��ܥXEx.7, 16, 25, 34�C
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n,a,b,c,d,sum,q;	//�ŧi n a b c d sum 
	
	srand(time(0));	// �üưѦ��I�� time 
	n=rand()%1000+1;
	q=rand()%1000+1;	// n�üƪ��d��
	for(int i=0;i<=n;i++)	//���Ͱj�� 
	{
		q=rand()%1000+1;
		printf("%d\n",q);
	
	a=i/1000;	//�D�d��ƪ���� 
	b=i%1000/100;	//�D�ʦ�ƪ���� 
	c=i%1000%100/10;	//�D�Q��ƪ���� 
	d=i%1000%100%10/1;	//�D�Ӧ�ƪ���� 

		if (a+b+c+d==7)	//�p�G �d��� �ʦ�� �Q��� �Ӧ�� �[�_�� = 1 
		{
			printf("�q���üƲ��ͪ��Ʀr�� %d�A�h�e�����|��ܥX %d�C \n",n,i);	//�L�X �C�@�� �q���üƲ��ͪ��Ʀr�� %d�A�h�e�����|��ܥX %d�C
		}
	}
	system("pause");
	return 0;
 }

