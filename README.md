# 108-2_androidstudio
```E``` : 上課專案
```W``` : 回家專案
## 索引
- [108-2_androidstudio](#108-2androidstudio)
  - [索引](#%e7%b4%a2%e5%bc%95)
  - [上課專案](#%e4%b8%8a%e8%aa%b2%e5%b0%88%e6%a1%88)
      - [第一週 ```E00``` ```branch 0.3```](#%e7%ac%ac%e4%b8%80%e9%80%b1-e00-branch-03)
      - [第二週 ```E01``` 更改字體大小 ```branch 0.4```](#%e7%ac%ac%e4%ba%8c%e9%80%b1-e01-%e6%9b%b4%e6%94%b9%e5%ad%97%e9%ab%94%e5%a4%a7%e5%b0%8f-branch-04)
      - [第三週 ```E01``` 更改字體顏色 ```branch 0.5```](#%e7%ac%ac%e4%b8%89%e9%80%b1-e01-%e6%9b%b4%e6%94%b9%e5%ad%97%e9%ab%94%e9%a1%8f%e8%89%b2-branch-05)
      - [第四週 ```E02``` 將文字顏色使用RGB來顯示 ```branch 0.8```](#%e7%ac%ac%e5%9b%9b%e9%80%b1-e02-%e5%b0%87%e6%96%87%e5%ad%97%e9%a1%8f%e8%89%b2%e4%bd%bf%e7%94%a8rgb%e4%be%86%e9%a1%af%e7%a4%ba-branch-08)
      - [第五週 ```E04``` 使用 ``` Listener ``` 監聽器 ```branch 0.9```](#%e7%ac%ac%e4%ba%94%e9%80%b1-e04-%e4%bd%bf%e7%94%a8-listener-%e7%9b%a3%e8%81%bd%e5%99%a8-branch-09)
      - [第六週 ```E05``` 使用 ```RadioGroup , RadioButton , CheckBox``` ```branch 1.0```](#%e7%ac%ac%e5%85%ad%e9%80%b1-e05-%e4%bd%bf%e7%94%a8-radiogroup--radiobutton--checkbox-branch-10)
  - [回家專案](#%e5%9b%9e%e5%ae%b6%e5%b0%88%e6%a1%88)
      - [第三週 ```W01```  按鈕更改成學號 ```branch 0.7```](#%e7%ac%ac%e4%b8%89%e9%80%b1-w01-%e6%8c%89%e9%88%95%e6%9b%b4%e6%94%b9%e6%88%90%e5%ad%b8%e8%99%9f-branch-07)


## 上課專案
#### 第一週 ```E00``` ```branch 0.3```
- 學習使用 Andorid Studio 創建一個空專案 並看見 Hello World
#### 第二週 ```E01``` 更改字體大小 ```branch 0.4```
- 創建一個新專案 ```E01``` 並且新增 五個物件
- 五個物件分別為 ```TextView*2``` 與 ```Button*3```
- TextView 分別為 
    ```text_msg and text_num```
- Button 分別為 
    ```bt1``` = Recover TextSize 20 
    ```bt2``` = TextSize -1 
    ```bt3``` = TextSize +1
- 打 Code 讓 Button 可以更改 TextView 的字體大小
#### 第三週 ```E01``` 更改字體顏色 ```branch 0.5```
- 蒼蠅報告 → ```第一節課，簡報預計不放上Github```
- 新增兩個物件 ```Button```
- 兩個 Button 分別為更改 ```text_msg``` 的顏色為 Blue or Red

#### 第四週 ```E02``` 將文字顏色使用RGB來顯示 ```branch 0.8```
- 新創專案 內有 ```三個輸入框(Number)```、```六個調整輸入框的值```、```一個 RadomRGB Button```、```跟一個指定輸入的RGB Button```
- 主要是 ```RGB 輸入```、```亂數(Random)```、使用 ```+5``` or ```-5``` 可以去變更文字顏色。

#### 第五週 ```E04``` 使用 ``` Listener ``` 監聽器 ```branch 0.9```
- 上課時發現老師跳過 ```E03``` 直接從 ```E04``` 開始！ 
- 上課時新增 ```Button*3``` or ```TextView*1```，使用 Button 去 +=1 TextView 上的字
- 不使用介面上的 onClick 僅使用 Listener
- 本週學習到的監聽器
  - ```OnClickListener``` : ```點擊監聽``` 
  - ```LongOnClickListener``` : ```長按監聽```
  - ```OntouchListener``` : ``` 觸碰監聽 ```   
- 最後下課前使用 ```點擊監聽``` 與 ```長按監聽``` 更改 ```TextView```  
  - 點擊更改 ```Red``` 
  - 長按更改 ```黑色```

#### 第六週 ```E05``` 使用 ```RadioGroup , RadioButton , CheckBox``` ```branch 1.0```
- 創建 ```E05``` 並且新增 
  - 上課創建
    - ```RadioGroup``` 飲料種類 
      - ```RadioButton``` 咖啡(40元)、紅茶(50元)、奶茶(60元) 
    - ```RadioGroup``` 糖分選擇 
      - ```RadioButton``` 正常糖、半糖、少糖、無糖 
    - ```CheckBox``` 需要袋子 +1 元 
    - ```Button``` 提交
    - ```TextView``` 顯示金額
  - 下課作業新增
    - ```RadioButton``` 新增飲料種類 綠茶(70元)
    - ```RadioGroup``` 新增冰塊份量
      - ```RadioButton``` 正常冰、微冰、去冰、熱
    - ```CheckBox``` 需要珍珠 +5 元
  - 條件
  - 如果加珍珠、加袋子、選奶茶 則 +1 元
  - 如果加珍珠、選奶茶 則 +0 元
  - 如果加袋子 +1 元
  - 如果加珍珠 +5 元
  - 如果兩者都加 +6 元

圖例 如下
<img src="img/E05_DrinkStore01.jpg" width="300px">

## 回家專案

#### 第三週 ```W01```  按鈕更改成學號 ```branch 0.7```
- 新創專案，內有三個物件
- ```Button``` 兩個 ```TextView``` 一個
- 讓按下 ```GO button``` 印出 ```學號``` 另還有一個```復原```
