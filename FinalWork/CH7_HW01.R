"
1.	利用 iris 此data frame，請擷取出其中的三個欄位  
(必須包括Species欄位)，再隨機擷取100列資料，當成資料來源。
(參考 6.5.4, subset(), sample())
"
tb = data.frame(iris)
tb = subset(tb,select = c(Species,Petal.Width,Petal.Length))
ans = tb[sample(nrow(tb), 100), ]
ans