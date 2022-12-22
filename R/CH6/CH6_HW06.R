#�T . �Ч�X���bNY���Ȥ᪺�s���M�䥭���ʶR�q(�H�Ȥ�s���Ƨ�)�C
#install.packages('dplyr') #�w�ˮM��
library(dplyr) #�ϥήM��
#setwd("path") path �]�w��Ƨ���csv�ɮת���m
setwd("C:/R")
Customer <- read.csv(file = 'Customer.csv')
Purchase <- read.csv(file = 'Purchase.csv') 

table <- merge(Customer,Purchase , all.x = T)
table %>% select(C_id,City,Amount) %>% filter(City == 'NY') %>% group_by(C_id) %>% summarise("BUY Avg" = mean(Amount)) %>% arrange(C_id)
# ���e�d�� , �L�o filter ��ڭn�� NY , �s�լO c_id , summarise �� , arrange �Ƨ� ADD desc(C_id) �h�O�j��p