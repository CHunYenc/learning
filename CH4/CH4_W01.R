#厩腹b10610020﹎朝筸课
#1-1
x = matrix(1:6,nrow = 2,ncol=3)
rownames(x) = c("计","案计")
colnames(x) = c("","い","")
x

#1-2
r1 = c(1,3,5)
r2 = c(2,4,6)
A1 = rbind(r1,r2)
rownames(A1) = c("计","案计")
colnames(A1) = c("","い","")
A1

#1-3
c1 = c(1,2)
c2 = c(3,4)
c3 = c(5,6)
B1 = cbind(c1,c2,c3)
rownames(B1) = c("计","案计")
colnames(B1) = c("","い","")
B1

#1-4 碞琌р跑Θ〃计〃〃案计",︽跑Θ〃〃〃い〃〃〃
#1-5 叫糶衡赣痻皚いΤぶじㄤいê碭じキА
sprintf("材 1 肈 , じ %s ",length(A1))
sprintf("材 2 肈 , じ %s ",length(x))
sprintf("材 3 肈 , じ %s ",length(B1))

x > mean(x)
A1 > mean(A1)
B1 > mean(B1)

#1-6 蝴
dim(A1)
dim(x)
dim(B1)

#1-7 
rownames(A1) = c("odd","even")
rownames(x) = c("odd","even")
rownames(B1) = c("odd","even")

#程挡狦
A1
x
B1
