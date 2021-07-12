using System;
/* 
HW2-6: 請寫一個程式能讓使用者輸入五位學生的成績，
然後再計算這五位學生成績相加後的總分，
以及五位學生的平均成績，
最後在畫面中顯示出這五位學生成績的相加總分及平均分數。
*/

namespace HW02_06
{
    class Program
    {
        static void Main(string[] args)
        {
            Double D1 = 0;
            Double D2 = 0;
            Double D3 = 0;
            Double D4 = 0;
            Double D5 = 0;

            Console.Write("請輸入第 1 位學生的成績：");
            D1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("請輸入第 2 位學生的成績：");
            D2 = Convert.ToDouble(Console.ReadLine());
            Console.Write("請輸入第 3 位學生的成績：");
            D3 = Convert.ToDouble(Console.ReadLine());
            Console.Write("請輸入第 4 位學生的成績：");
            D4 = Convert.ToDouble(Console.ReadLine());
            Console.Write("請輸入第 5 位學生的成績：");
            D5 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine($"五位學生成績的相加總分為：{D1 + D2 + D3 + D4 + D5}，平均分數為：{(D1+D2+D3+D4+D5)/5}");
            
        }
    }
}
