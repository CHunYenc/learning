# 說明

題目是：
```
「請自行建立身高以及體重各 100筆的資料，利用矩陣將體重作為解釋變數做線性回歸分析。」
```
首先，因為我不知道該如何去取 100 筆的 身高 + 體重的資料，所以我決定使用 R 語言進行爬蟲。

因為其實才剛開學一個多月，實際上也沒摸很多，所以這步驟其實 Google 都找得到！



# 處理過程

1. 匯入開發工具
2. 找到有你需要資料的網頁
3. 進行爬蟲
4. 資料處理(含資料轉換)
5. 印出簡易回歸分析圖片

# 程式碼
### 開發工具
```
library(rvest)
```

### 進行爬蟲
```
#解析HTML 並提取 <tr></tr> 中的 text 文字資料
html = read_html("http://socr.ucla.edu/docs/resources/SOCR_Data/SOCR_Data_Dinov_020108_HeightsWeights.html")
data <- html %>% html_nodes('tr') %>% html_text()
```
這邊 ```html_nodes('tr')``` 抓取的資料會含有 html 的一些標籤等等

所以我們要在使用 ```html_text()``` 進行擷取 文字的部分。

### 資料處理
```
data <- data[1:101] #取101筆資料(含抬頭)
data <- data[-1] #將抬頭去掉
data <- gsub("[\n]"," ",data) #去掉每筆資料後方有\n 
data <- gsub(" +",",",data) #將所有空白改變成只有一個逗號
data
data_1 <- strsplit(data,',') #將每個欄位中分隔逗號的數字取出
output <- matrix(unlist(data_1), ncol = 3, byrow = TRUE) #將 list 匯入 matrix
output <- output[, -c(1)] # 因為原本爬下來的資料有順序 / 號碼
output
```

這邊是花最多時間的，因為題目告訴我們要取 100 項含 身高 + 體重的資料

那麼我們會發現爬下來的資料 加欄位抬頭會成為 101 項資料

所以我們要先使用 ```data[-1]``` 而每欄位後方都有 \n , 所以我們要使用 ```gsub``` 函式進行處理

而爬下來的資料也擁有非常多的空格, 所以我們在這使用了 ```gsub(" +",",",data)``` 

其中 " +"。 意思是將很多空格變成逗號，但不管空格有多少，都會只留下一個逗號。

現在我們的資料就可以輕易判讀了 XD

使用 ``` strsplit() ``` 進行 碰到 ```,``` 就會將資料進行分割！

分割後，會發現是 ```list``` ， 

```matrix(unlist(data_1), ncol = 3, byrow = TRUE) ```，

這一行是我用找的 ... 因為到這完全不知道要怎麼把它變成 Matrix ，

接下來因為不需要第一行 id 的部分 所以我們 ```output[, -c(1)]``` 就結束我們資料處理的部分。

### 將有用的資料進行使用
```
colnames(output) <- c('Height','Weight') #將 Matrix 添加 行名字
h = as.numeric(output[,"Height"]) #單位是英寸
#h_tocm <- as.numeric(output[,"Height"])*2.54 #這個是轉換cm
w = as.numeric(output[,"Weight"]) #單位是磅
#w_tokg = as.numeric(output[,"Weight"])*0.454 #這個是轉換kg
```

### 簡易線性回歸
```
model = lm(h~w) 
plot(h~w)
abline(model)
```

![image](https://github.com/CHunYenc/108-1_R/blob/master/CH4/CH4_HW06.png)

# 這樣就完成了！

其實最花時間是在資料處理的部分，因為完全沒碰過 XD
學到很多，謝謝各位。
如果幫助到你，那我也非常開心！
