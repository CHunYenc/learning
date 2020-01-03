#include <stdio.h>
#include <stdlib.h>
void star();
void per();		//個人資料 
void list();	//主功能表 
void HW82();	//作業 
void HW84();	//作業 
void HW85();	//作業 
int main()
{
	per();
	list();
	
	system("pause");
	return 0;
}
void star()
{
	printf("**********\n");
}
void per()
{
	star();
	printf("個人資料\n");
	printf("學號：B10610020\n姓名：陳雋諺\n");
	star();
}
void list()
{
	int a;
	do{
		printf("歡迎進入主\功\能\表！！\n");
		printf("1.HW8-2\n2.HW8-4\n3.HW8-5\n4.離開。\n請輸入以下數字：");
		scanf("%d",&a);
		fflush(stdin);
		system("cls");
		
		switch(a)
		{
			case 1: HW82(); break;
			case 2: HW84();	break;
			case 3: HW85();	break;
			default:	printf("輸入錯誤！請輸入上方的數字。\n"); break;
		}
	}while(a!=4);
	{

	}
}
void HW82()
{
	printf("82 \n");
	system("pause");
}
void HW84()
{
	printf("84 \n");
	system("pause");
}
void HW85()
{
	printf("85 \n");
	system("pause");
}
