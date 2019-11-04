#學號：b10610020 姓名：陳雋諺

#6.請自行建立身高以及體重各100筆的資料，利用矩陣將體重作為解釋變數做線性回歸分析。

#使用R語言中的爬蟲工具
library(rvest)

#解析HTML 並提取 <tr></tr> 中的 text 文字資料
html = read_html("http://socr.ucla.edu/docs/resources/SOCR_Data/SOCR_Data_Dinov_020108_HeightsWeights.html")
data <- html %>% html_nodes('tr') %>% html_text()

# ===== 以上為爬蟲的步驟 =====

#資料處理
data <- data[1:101] #取101筆資料(含抬頭)
data <- data[-1] #將抬頭去掉
data <- gsub("[\n]"," ",data) #去掉每筆資料後方有\n 
data <- gsub(" +",",",data) #將所有空白改變成只有一個逗號
data
data_1 <- strsplit(data,',') #將每個欄位中分隔逗號的數字取出
output <- matrix(unlist(data_1), ncol = 3, byrow = TRUE) #將 list 匯入 matrix
output <- output[, -c(1)] # 因為原本爬下來的資料有順序 / 號碼
output
# ===== 以上為資料處理的部分 =====

# 將有用的資料進行使用
colnames(output) <- c('Height','Weight') #將 Matrix 添加 行名字
h = as.numeric(output[,"Height"]) #單位是英寸
#h_tocm <- as.numeric(output[,"Height"])*2.54 #這個是轉換cm
w = as.numeric(output[,"Weight"]) #單位是磅
#w_tokg = as.numeric(output[,"Weight"])*0.454 #這個是轉換kg

model = lm(h~w) 
plot(h~w)
abline(model)

# ===== 以上是線性回歸 + 取資料 =====
