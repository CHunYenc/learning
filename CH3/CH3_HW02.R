#2.	利用matrix函數建立出下圖的結果。(課本P45) (請附上指令與圖)


#先製作出陣列 4x4
M = matrix(c(1:2), nrow = 4,ncol = 4)
#印出 M
M
#如果 != 1 就印出 FALSE 否則印出 TRUE
ifelse(M != 1,TRUE,FALSE)
