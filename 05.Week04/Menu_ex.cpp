#include <stdio.h>
#include <stdlib.h>
void L();
void A();
void B();
void C();
void D();
void E();
void F();
void G();
void H();
void I();
int main()
{
	char s;
	system("cls");
	do
	{
		L();
		printf("歡迎來到第五次作業，以下是題目列表：\n");
		printf("A.01\n");
		printf("B.02\n");
		printf("C.03\n");
		printf("D.04\n");
		printf("E.05\n");
		printf("F.06\n");
		printf("G.07\n");
		printf("H.08\n");
		printf("I.09\n");
		printf("J.離開。\n");
		printf("請輸入你要查看的作業題目：");
		scanf("%c",&s);
		fflush(stdin);
		
		switch(s)
		{
			case 'A':
			case 'a':
				A();
			break;
			case 'B':
			case 'b':
				B();
			break;
			case 'C':
			case 'c':
				C();
			break;
			case 'D':
			case 'd':
				D();
			break;
			case 'E':
			case 'e':
				E();
			break;
			case 'F':
			case 'f':
				F();
			break;
			case 'G':
			case 'g':
				G();
			break;
			case 'H':
			case 'h':
				H();
			break;
			case 'I':
			case 'i':
				I();
			break;
			case 'J':
			case 'j':
				system("cls");
				printf("離開囉！\n");
			break;
			default:

			break;
		}
	}while(s !='J' && s!='j');
	{
		
	}	
	system("pause");
	return 0;
}

void L()
{
	printf("====================\n");
	printf("學號：b106XXXXX\n姓名：陳XX\n");
	printf("====================\n");
}
/*
01.請利用for指令寫一程式，讓使用者先輸入一個數字x，
用來表示雞兔同籠合計共有幾隻動物(一個籠子裡面雞加兔的動物總數量);
接著再讓使用者輸入第二個數字y，用來表示雞兔同籠中合計共有幾隻腳
(一個籠子裡面雞腳加兔腳的總數量)，然後再由程式計算出雞與兔分別有多少隻。
【學號末碼為3,6,7請做此題】
*/ 
void A()
{
	int f=0,t=0,c=0,l=0;
	printf("請輸入一個數字：");
	scanf("%d",&f);
	fflush(stdin);
	printf("再輸入一個數字：");
	scanf("%d",&l);
	fflush(stdin);
	system("cls");
	
	
	printf("共有: %d 隻動物\n",f);
	for(int i=0;i<=f/2;i++)	//雞 
	{
		for(int j=0;j<=f*4;j++)	//兔 
		{
			if(f==i+j)
			printf("%d.%d隻雞 . %d 隻兔。\n",i,j);
		}
	}
	
	
	
	system("pause");
	system("cls");	
}
/* 
02.利用for指令寫一程式，讓使用者輸入一個數字x，
用來表示雞兔同籠中合計共有幾隻腳(一個籠子裡面雞腳加兔腳的總數量)，
然後由程式算出所有可能的雞、兔數量組合。
(需顯示出每一種情況的雞、兔數量)【學號末碼為2,5,0請做此題】 
*/ 
void B()
{
	printf("B\n");
	system("pause");
	system("cls");	
}
/*03.請利用for指令指令，設計一程式印出九九乘法表如下，
個位數與十位數請務必對齊：【學號末碼為1,4,8,9請做此題】
*/ 
void C()
{
	printf("C\n");
	system("pause");
	system("cls");
}
void D()
{
	printf("D\n");
	system("pause");
	system("cls");
}
void E()
{
	printf("E\n");
	system("pause");
	system("cls");	
}
void F()
{
	printf("F\n");
	system("pause");
	system("cls");	
}
void G()
{
	printf("G\n");
	system("pause");
	system("cls");	
}
void H()
{
	printf("H\n");
	system("pause");
	system("cls");	
}
void I()
{
	printf("I\n");
	system("pause");
	system("cls");
}

