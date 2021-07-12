using System;

/*
HW2-10:請使用if或if-else指令撰寫一程式，
讓使用者可由鍵盤輸入x、y座標值(可包含正負數及小數)，
然後判斷使用者輸入的座標點位於那一個象限或是在座標軸上。
舉例來說，若輸入的座標值為(3.0,-2.5)，
輸出即為第四象限；若輸入的座標值為(4.5,0.0)，
則輸出即為x軸。
(註:需考慮4個象限、X軸、Y軸及原點;
二座標數字在各象限的正負號為，第一象限++，第二象限-+，第三象限--，第四象限+-) 
*/

namespace HW02_10
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 0;
            int y = 0;

            Console.WriteLine("請輸入你的 x 值：");
            x = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("請輸入你的 y 值：");
            y = Convert.ToInt32(Console.ReadLine());

            if (x == 0 && y == 0)
            {
                Console.WriteLine($"您輸入的 x = {x}, y = {y} 在原點上.");
            } else if ( x == 0 && y != 0)
            {
                Console.WriteLine($"您輸入的 x = {x}, y = {y} 在 y 軸線上.");
            } else if ( x != 0 && y == 0)
            {
                Console.WriteLine($"您輸入的 x = {x}, y = {y} 在 x 軸線上.");
            } else if ( x != 0 || y != 0)
            {
                if (x > 0)
                {
                    if (y > 0)
                    {
                        Console.WriteLine($"您輸入的 x = {x}, y = {y} 在 第一象限.");
                    }
                    else
                    {
                        Console.WriteLine($"您輸入的 x = {x}, y = {y} 在 第四象限.");
                    }
                }
                else
                {
                    if (y > 0)
                    {
                        Console.WriteLine($"您輸入的 x = {x}, y = {y} 在 第二象限.");
                    }
                    else
                    {
                        Console.WriteLine($"您輸入的 x = {x}, y = {y} 在 第三象限.");
                    }

                }
            }
            else
            {
                Console.WriteLine($"您輸入的 x = {x}, y = {y} 在好像有不是數值的.");
            }
        }
    }
}
