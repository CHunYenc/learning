"
2.	在螢幕上顯示出下列選項，並請使用者怎輸入選項，
利用 while 迴圈來限定輸入值必須是1或2。(參考Ch. 7.3.2 while指令)。
若選項是1，則呼叫副程式 Graph( )，以印出圖形。
若選項是2，則結束整個程式(參考Ch. 8 副程式)。
(1). 請畫出圖形
(2). 結束
請輸入選項:
"
menu <-  function(){
  cat("(1). 請畫出圖形\n")
  cat("(2). 結束\n")
  cat("請輸入選項：\n")
  x <- scan()
  while( x == "1" || x == "2" ){
    if (x == "1"){
      Graph()
      break
    }else{
      cat("已離開")
      on.exit()
      break
    }
  }
  if (x != "1" && x != "2"){
    cat("你是不是沒有輸入列表上的數字！\n")
    menu()
  } 
}

Graph <- function(){
  setwd("C:/R") # 將以下圖片存在此資料夾路徑
  png("01.plotiris.png", width = 640, height = 360) # 設定輸出圖檔
  plot(iris)
  dev.off() # 關閉輸出圖檔
  
  png("02.curveimg.png", width = 640, height = 360) # 設定輸出圖檔
  chippy <- function(x) sin(cos(x)*exp(-x/2))
  curve(chippy,-8,7,n = 2001)
  curve(abs(x^3-2*x^2 +1),-4,4)
  curve(dnorm(x)*150,lty=2,add=T)
  dev.off() # 關閉輸出圖檔
  
  png("03.Pairs.png",width = 640,height = 360)
  h = rnorm(100, 170, 1)
  w = rnorm(100,68.6,0.7)
  pairs(cbind(h,w))
  dev.off() # 關閉輸出圖檔
  
  png("04.Coplot.png",width = 640,height = 360)
  h = rnorm(100, 170, 1)
  w = rnorm(100,68.6,0.7)
  s = rnorm(100,4,1)
  coplot(h ~ w | s)
  dev.off() # 關閉輸出圖檔
  
  png("05.hist.png",width = 640,height = 360)
  x = rnorm(100)
  b = c(-3,-2,-1,0,1,2,3)
  hist(x,breaks = b)
  dev.off() # 關閉輸出圖檔
  
  png("06.dotplot.png",width = 640,height = 360)
  #install.packages("epiDisplay")
  library(epiDisplay)
  dotplot(rnorm(100),pch=16,axes = FALSE)
  dev.off() # 關閉輸出圖檔
  
  png("07.Barplot.png",width = 640,height = 360)
  math <- c(78, 92, 89, 61, 95)
  names<-c("小剛", "小明", "小花", "小芳", "小麗")
  barplot(math,names.arg=names)
  dev.off() # 關閉輸出圖檔
  
  png("08.Boxplot.png",width = 640,height = 360)
  boxplot(iris[,1],xlab = "Sepal.Length", main = "(1)")
  boxplot(iris[,1:4], main = "(2)")
  boxplot(iris[,1:4], names = c("Slenght", "Swidth", "Plength", "Pwidth"), main = "(3)")
  
  boxplot(iris[,1:4], horizontal = T, main = "(4)")
  boxplot(Sepal.Length ~ Species, data = iris, main = "(5)", xlab = " 花的分類 ", 
          ylab = " 花萼長度 ")
  
  boxplot(Sepal.Length ~ Species, data = iris, main = "(5)", xlab = " 花的分類 ", 
          ylab = " 花萼長度 ", col = c(2, 3, 4))
  dev.off() # 關閉輸出圖檔
  
  png("09.pie.png",width = 640,height = 360)
  sales = c(0.12,0.3,0.26,0.16,0.04,0.12)
  snames = c("電腦","廚房家電","女性服飾","客廳家具","其他","男性服飾")
  pie(sales,label = snames)
  dev.off() # 關閉輸出圖檔
  
}

menu()
