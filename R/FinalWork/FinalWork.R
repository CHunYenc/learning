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
  ## 先創建 c:/r 資料夾
  setwd("C:/R") # 將以下圖片存在此資料夾路徑，
  png("01.plotiris.png", width = 640, height = 360) # 設定輸出圖檔
  plot(iris)
  dev.off() # 關閉輸出圖檔
  print("已經印出 Plot 圖")
  
  png("02.Pairs.png",width = 640,height = 360)
  h = rnorm(100, 170, 1)
  w = rnorm(100,68.6,0.7)
  pairs(cbind(h,w))
  dev.off() # 關閉輸出圖檔
  print("已經印出 Pairs 圖")
  
  png("03.Coplot.png",width = 640,height = 360)
  h = rnorm(100, 170, 1)
  w = rnorm(100,68.6,0.7)
  s = rnorm(100,4,1)
  coplot(h ~ w | s)
  dev.off() # 關閉輸出圖檔
  print("已經印出 Coplot 圖")
  
  png("04.hist.png",width = 640,height = 360)
  a = rnorm(100)
  b = c(-3,-2,-1,0,1,2,3)
  hist(a,breaks = b)
  dev.off() # 關閉輸出圖檔
  print("已經印出 hist 圖")
  
  png("05.dotplot.png",width = 640,height = 360)
  #install.packages("epiDisplay")
  library(epiDisplay)
  dotplot(rnorm(100),pch=16,axes = FALSE)
  dev.off() # 關閉輸出圖檔
  print("已經印出 dotplot 圖")
  
  png("06.Barplot.png",width = 640,height = 360)
  math <- c(78, 92, 89, 61, 95)
  names<-c("小剛", "小明", "小花", "小芳", "小麗")
  barplot(math,names.arg=names)
  dev.off() # 關閉輸出圖檔
  print("已經印出 Barplot 圖")
  
  png("07.Boxplot.png",width = 640,height = 360)
  boxplot(iris[,1],xlab = "Sepal.Length", main = "(1)")
  boxplot(iris[,1:4], main = "(2)")
  boxplot(iris[,1:4], names = c("Slenght", "Swidth", "Plength", "Pwidth"), main = "(3)")
  boxplot(iris[,1:4], horizontal = T, main = "(4)")
  boxplot(Sepal.Length ~ Species, data = iris, main = "(5)", xlab = " 花的分類 ", 
          ylab = " 花萼長度 ")
  
  boxplot(Sepal.Length ~ Species, data = iris, main = "(5)", xlab = " 花的分類 ", 
          ylab = " 花萼長度 ", col = c(2, 3, 4))
  dev.off() # 關閉輸出圖檔
  print("已經印出 Boxplot 圖")
  
  png("08.pie.png",width = 640,height = 360)
  sales = c(0.12,0.3,0.26,0.16,0.04,0.12)
  snames = c("電腦","廚房家電","女性服飾","客廳家具","其他","男性服飾")
  pie(sales,label = snames)
  dev.off() # 關閉輸出圖檔
  print("已經印出 pie 圖")
}

menu()
