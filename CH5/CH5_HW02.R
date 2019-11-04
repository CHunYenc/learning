#2.1 用excel 建立一格試算表”帳戶”，其中有四個欄位名稱分別為
#”帳戶”，”分局”，”客戶姓名”和”餘額”，請輸入三筆資料，並將其轉成
#.csv格式之檔案。
#2.2 用read.csv( ) 讀入該檔案。(P125)

read.csv(file = "C:/R/accounts.csv",header = T)

#2.3 用read.table( ) 讀入該檔案再用write.csv( )將該檔案的內容存入並命名為”account.csv”。 (P125-P127)

a = read.table(file = "C:/R/accounts.csv")
write.csv(a,file = "C:/R/account.csv")