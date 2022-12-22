#(1)
t1 <- c(1,2,3,4,5)
t2 <- c(6,7,8,9,10)

t1
t2

#(2)
a = rbind(t1,t2)
a

#(3)
colnames(a) <- c("id","name","address","phone","salary")
a
#(4)
b <- a[,5]
max(b)
mean(a)

#(5)
#ºâ¤£¥X¨Ó
t5 <- matrix(1:25,nrow = 5,ncol = 5)
t5
t5[3:5,2:4]
