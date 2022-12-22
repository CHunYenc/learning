/*
01.帥哥xx想要一個能統計學生成績等級的程式，
請你使用for迴圈指令撰寫一程式，讓使用者能由鍵盤輸入10個學生的成績(成績不能為負)，
當成績在0~59分為C，60~75分為B，76~100分為A，最後將得到A、B、C的人數印出。

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int grade = 0, A = 0, B = 0, C = 0, Error = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("請輸入 %d 位學生的成績：", i + 1);
        scanf("%d", &grade);
        switch (grade)
        {
        case 0 ... 59:
            C++;
            break;
        case 60 ... 75:
            B++;
            break;
        case 76 ... 100:
            A++;
            break;
        default:
            Error++;
        }
    }
    printf("A:%d\tB:%d\tC:%d\tError:%d\n", A, B, C, Error);

    return 0;
}