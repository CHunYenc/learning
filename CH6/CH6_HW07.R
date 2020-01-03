#四.  請找出住在NY且平均購買量大於400個產品的客戶的編號和其購買總金額(以客戶編號排序)。

#install.packages('dplyr') #安裝套件
library(dplyr)
#setwd("path") path 設定資料夾放csv檔案的位置
setwd("C:/R")
Customer <- read.csv(file = 'Customer.csv')
Purchase <- read.csv(file = 'Purchase.csv') 
Product <- read.csv(file = 'Product.csv')

table <- merge(Customer,Purchase , all.x = T)
table <- merge(table,Product,all.x = T)
table
table %>% filter(City == 'NY' , mean(Amount) > 400) %>% group_by(C_id) %>% summarise("BUY_AVG" = mean(Amount),"TOTAL_BUY" = sum(Price * Amount))
