/*
09: �Шϥ�switch���O�A���g�@�ӥi�H���ϥΪ̱q��L��J�@�Ӧ~�שұo�b�B��A�{������p��X��X�ұo�|�������|���B�A
��X�ұo�|�Ҽx�覡�Ĳֶi�|�v��A�|�v���p�U: 

�ұo�b�B	�|�v
0 ~   520,000	5%
520,001 ~ 1,170,000	12%
1,170,001 ~ 2,350,000	20%
2,350,001 ~ 4,400,000	30%
4,400,001�H�W	40%
 
�Ҧp�G�@��ˬ�u�{�vxx���ұo�b�B��1,500,000���ɡA���|���B��:
=520000*0.05 + (1170000-520000)*0.12 + (1500000-1170001)*0.2 = 170000
�]�N�O�A�ұo�b�B�b���P�����B�d��A�|�v���P�A�W�����Ҥl�ұo�b�B���@�ʤ��Q�U�A�ҥH���T�Ӥ��P�d��|�B�n�[�_�ӡA�мg�@�ӵ{���p�⦩�|���B�C
 ��J�ȡG�ұo�b�B (0 - 6,000,000����)�C
 ��X�ȡG���|���B�C


*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("�п�J�@�Ӧ~�שұo�b�B�G");
	scanf("%d",&a);
	fflush(stdin);
	
		switch (a)
		{
			case 0 ... 520000 :
				printf("���|���B �G %.0lf \n",a*0.05);
			break;
		
			case 520001 ... 1170000 :
				printf("���|���B �G %.0lf \n",(520000*0.05)+(a-520001)*0.12);
			break;
		
			case 1170001 ... 2350000 :
				printf("���|���B �G %.0lf \n",(520000*0.05)+(1170000-520001)*0.12+(a-1170001)*0.2);
			break;
		
			case 2350001 ... 4400000 :
				printf("���|���B �G %.0lf \n",(520000*0.05)+(1170000-520001)*0.12+(2350000-1170001)*0.2,(a-2350001)*0.3);
			break;
		
			case 4400001 ... 6000000 :
				printf("���|���B �G %.0lf \n",(520000*0.05)+(1170000-520001)*0.12+(2350000-1170001)*0.2,(4400000-2350001)*0.3+(a-4400001)*0.4);
			break;
			
			default :
				printf("���s��J");
			break;
		}
	
	system("pause");
	return 0;
 }
