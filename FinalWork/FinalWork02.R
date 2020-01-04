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
  tb = data.frame(iris)
  tb = subset(tb,select = c(Species,Petal.Width,Petal.Length))
  ans = tb[sample(nrow(tb), 100), ]
  ## 先創建 c:/r 資料夾
  setwd("C:/R") # 將以下圖片存在此資料夾路徑，
  png("01.plotiris.png", width = 640, height = 360) # 設定輸出圖檔
  plot(iris)
  dev.off() # 關閉輸出圖檔
  print("已經印出 Plot 圖")
  #
  png("02.Pairs.png",width = 640,height = 360)
  sl = iris['Sepal.Length']
  sw = iris['Sepal.Width']
  pl = iris['Petal.Length']
  pw = iris['Petal.Width']
  pairs(cbind(sl,sw,pl,pw))
  dev.off() # 關閉輸出圖檔
  print("已經印出 Pairs 圖")
  #
  png("03.Coplot.png",width = 640,height = 360)
  sl = unlist(iris['Sepal.Length'])
  sw = unlist(iris['Sepal.Width'])
  s = unlist(iris['Species'])
  coplot(sl ~ sw | s)
  dev.off() # 關閉輸出圖檔
  print("已經印出 Coplot 圖")
  #
  png("04.hist.png",width = 640,height = 360)
  sl = unlist(iris['Sepal.Length'])
  sw = unlist(iris['Sepal.Width'])
  b = c(0,2,4,6)
  hist(sw,breaks = b)
  dev.off() # 關閉輸出圖檔
  print("已經印出 hist 圖")
  #
  png("05.dotplot.png",width = 640,height = 360)
  #install.packages("epiDisplay")
  library(epiDisplay)
  pw = ans$Petal.Width
  dotplot(pw,pch = 16,axes = FALSE)
  dev.off() # 關閉輸出圖檔
  print("已經印出 dotplot 圖")
  #
  png("06.Barplot.png",width = 640,height = 360)
  ans = tb[sample(nrow(tb), 6), ]
  barplot(unlist(ans$Petal.Width),names.arg = ans$Species,col = c(1,2,3,4,5,6))
  dev.off() # 關閉輸出圖檔
  print("已經印出 Barplot 圖")
  #
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
  #
  png("08.pie.png",width = 640,height = 360)
  sales = ans$Petal.Width
  snames = ans$Species
  pie(sales,label = snames)
  dev.off() # 關閉輸出圖檔
  print("已經印出 pie 圖")
}


menu()
