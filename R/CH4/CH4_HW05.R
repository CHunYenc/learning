#學號：b10610020 姓名：陳雋諺
#5.自行生成三筆資料，每筆資料包含身高、體重以及年齡，
#將這三筆資料存入矩陣中並且將資料筆數命名(第一筆、第二筆、第三筆)，以及將各個欄位(身高、體重、年齡)依序命名。

h = c(round(runif(3,150,180)))
a = c(round(runif(3,20,35)))
w = c(round(runif(3,50,80)))
h_table = cbind(h,w,a)
rownames(h_table) = c("第一位","第二位","第三位")
colnames(h_table) = c("身高","體重","年齡")
h_table
