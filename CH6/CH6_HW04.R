#一.	 請找出住在NY的客戶的編號、姓名和其購買產品數量。

#setwd("path") # path 設定資料夾放csv檔案的位置
setwd("C:/R")
Customer <- read.csv(file = 'Customer.csv')
Purchase <- read.csv(file = 'Purchase.csv') 
Product <- read.csv(file = 'Product.csv')

x = merge(Customer,Purchase,all.x = T)
subset(x,City='NY',select = c("C_id","C_name","Amount"))