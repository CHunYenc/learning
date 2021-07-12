using System;

/*HW2-1. 
請撰寫ㄧ個程式，將年齡以年為單位，
轉成以天為單位，並輸出輸入年齡對照的天數，
例如年齡輸入10，則顯示【你的年齡為10歲，在地球上共生活了3650天】。
(在此程式中不必考慮每年可能有不同的天數，假設 1 年=365 天)
*/

namespace HW02_01
{
    class Program
    {
        static void Main(string[] args)
        {

            // ===== type 1 =====
            // 1-1. 先宣告變數，型態為 string 字串
            // string year = "";
            // int day = 0;
            // 1-2. 印出要執行的字
            // Console.Write("你好，請輸入你的年齡：");
            // 1-3. 使用者如果輸入字元，會放入 year 變數中
            // year = Console.ReadLine();
            // 1-4. 把字串轉乘數字，因為這樣才可以運算
            // day = Convert.ToInt32(year);
            // 1-5. 把 day 乘 365
            // day = day * 365;
            // 1-6. 顯示上面題目的要求
            // Console.WriteLine("你的年齡為" + year + "歲，在地球上共生活了" + day + "天");
            // 1-7. 建議使用下面的方式去列印答案。
            // Console.WriteLine($"你的年齡為{year}歲，在地球上共生活了{day}天");
            // ===== type 2 =====
            // 2-1. 宣告變數
            int year = 0;
            // 2-2. 印出要執行的字
            Console.Write("你好，請輸入你的年齡：");
            year = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine($"你的年齡為{year}歲，在地球上共生活了{year * 365}天");

        }
    }
}
