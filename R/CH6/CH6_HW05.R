#�G. �Ч�X���bNY���Ȥ᪺�s���B�m�W�M���ʶR���~�W�١C

#install.packages('dplyr') #�w�ˮM��
library(dplyr) #�ϥήM��
#setwd("path") path �]�w��Ƨ���csv�ɮת���m

setwd("C:/R")
Customer <- read.csv(file = 'Customer.csv')
Purchase <- read.csv(file = 'Purchase.csv') 
Product <- read.csv(file = 'Product.csv')

x <- merge(Customer,Purchase,all.x = T)
y <- merge(x,Product,all.x = T)
y
y %>% filter(City == 'NY') %>% select(C_id,C_name,P_name)