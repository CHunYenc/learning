
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i=0,j=0,y=0,c=0,n=0,s=0;
	int a[4],b[4];
	do
	{
		do
		{
			srand(time(0));
			for(i=0;i<=3;i++)
			{
				a[i]=rand()%10;
				for(j=0;j<i;j++)
				{
					if(a[i]==a[j])
					{
						a[j]=-1;
						break;
					}
					if(a[j]==-1)
					{
						break;
					}
				}
			}
			
		}while(a[j]==-1);
		{
			system("cls");
			printf("題目：");
			for(i=0;i<=3;i++)
			{
				printf("%d",a[i]);
			}
			printf("\n");
		}
		for(i=1;i<=10;i++)
		{
		printf("請輸入4位數:");
		scanf("%d",&n);
		fflush(stdin);
		if(n>99&&n<10000)
		{
			y=0,s=0;
			b[0]=n/1000;
			b[1]=n%1000/100;
			b[2]=n%100/10;
			b[3]=n%10/1;
			for(j=0;j<=3;j++)
			{
				for(s=0;s<=3;s++)
				{
					if(b[j]==a[s])
					{	
						if(b[j]==a[j])
						{
							y++;
						}
						else
						{
							c++;
						}
					}
				}
			}
			printf("%dA %dB 輸入第%d次\n",y,c,i);
			if(y==4)
			{
				printf("恭喜猜中了\n");
				break;
			}
		}	
	
		else
		{
			printf("輸入錯誤\n");
			i--;
		}
		if(i==10)
		{
		printf("失敗 按任意按鍵重玩\n");
	
		system("pause");
		system("cls");
		}	
		}
	}while(y!=4);
	{
		
	}
	system("pause");
	return 0;
}
