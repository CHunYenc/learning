/*
08:叫ㄏノrand()睹计ㄧΑ级糶祘Α
琵祘Α玻ネざ1~1000 ぇ丁计n
眖1 n ぇ丁计い盢–计单7 计陪ボㄓ
ㄒ筿福睹计玻ネ计35玥礶い穦陪ボEx.7, 16, 25, 34
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n,a,b,c,d,sum,q;	// n a b c d sum 
	
	srand(time(0));	// 睹计把σ翴 time 
	n=rand()%1000+1;
	q=rand()%1000+1;	// n睹计絛瞅
	for(int i=0;i<=n;i++)	//玻ネ癹伴 
	{
		q=rand()%1000+1;
		//printf("%d\n",q);
	
		a=i/1000;	//―计计 
		b=i%1000/100;	//―κ计计 
		c=i%1000%100/10;	//―计计 
		d=i%1000%100%10/1;	//―计计 
		//printf("%d,%d,%d,%d\n",a,b,c,d);
		if (a+b+c+d==7)	//狦 计 κ计 计 计 癬ㄓ = 7 
		{
			printf("筿福睹计玻ネ计 %d玥礶い穦陪ボ ",n,i);	// – 筿福睹计玻ネ计 %d玥礶い穦陪ボ %d
			printf("%d\n",i);
		}
	}
	system("pause");
	return 0;
 }

