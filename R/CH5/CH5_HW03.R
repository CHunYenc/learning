#3.1 利用scan( ) 三個list 變數，每個list變數的三個項目名稱為 ”ID”，”NAME”，”Salary”，再將這三個list變數合併成一個
#EMPLOYEE矩陣變數。(P84,P118)


listx = scan(what = list(id = "",name = "" , salary = 0))
listx
EMPLOYEE <- matrix(unlist(listx), ncol = 3, byrow = TRUE)
EMPLOYEE

#3.2 用write.table( ) 將EMPLOYEE變數存成檔案，用逗點當間隔符號。(P127)

write.table(EMPLOYEE,file <-  "C:/R/employee.txt",sep=",")

#3.3 用read.table( ) 將該檔案讀入變數EMP中。(P125)

EMP <- read.table(file = "C:/R/employee.txt",sep = ",")
EMP

#3.4 用write( ) 將EMP輸出至螢幕上。(P121)

write(t(EMP), "",3,sep = ",")
