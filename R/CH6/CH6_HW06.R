#三 . 請找出住在NY的客戶的編號和其平均購買量(以客戶編號排序)。
#install.packages('dplyr') #安裝套件
library(dplyr) #使用套件
#setwd("path") path 設定資料夾放csv檔案的位置
setwd("C:/R")
Customer <- read.csv(file = 'Customer.csv')
Purchase <- read.csv(file = 'Purchase.csv') 

table <- merge(Customer,Purchase , all.x = T)
table %>% select(C_id,City,Amount) %>% filter(City == 'NY') %>% group_by(C_id) %>% summarise("BUY Avg" = mean(Amount)) %>% arrange(C_id)
# 先畫範圍 , 過濾 filter 找我要的 NY , 群組是 c_id , summarise 算 , arrange 排序 ADD desc(C_id) 則是大到小