#二. 請找出住在NY的客戶的編號、姓名和其購買產品名稱。

#install.packages('dplyr') #安裝套件
library(dplyr) #使用套件
#setwd("path") path 設定資料夾放csv檔案的位置

setwd("C:/R")
Customer <- read.csv(file = 'Customer.csv')
Purchase <- read.csv(file = 'Purchase.csv') 
Product <- read.csv(file = 'Product.csv')

x <- merge(Customer,Purchase,all.x = T)
y <- merge(x,Product,all.x = T)
y
y %>% filter(City == 'NY') %>% select(C_id,C_name,P_name)
