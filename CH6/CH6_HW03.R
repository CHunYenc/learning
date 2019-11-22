#(3)給兩個表格如下:
#(3-1)找出員工和其進修學校名稱，沒有進修的員工不列出
#(3-2)找出員工和其進修學校名稱，沒有進修的員工也要列出其基本資料
table_employee <- read.csv(file="C:\\r\\employees.csv",header = T)
table_employee
table_school <- read.csv(file="C:\\r\\school.csv",header = T)
table_school

merge(table_employee,table_school)
merge(table_employee,table_school,all.x=T)