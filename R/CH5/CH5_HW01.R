#1.1 利用scan( ) 輸入5個同學的成績，並算出其總合。(P117)

x <- sum(scan())
x

#1.2 用c( ) 產生向量NAME(“John”,”Mary”)，用write( ) 將NAME存入檔案中。(P121)

n <-  c("John","Mary")
n
write(n,file="C:/R/123.txt",sep = ",")