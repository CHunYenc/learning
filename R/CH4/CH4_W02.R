#學號：b10610020姓名：陳雋諺

#請將data-frame “iris” 的Sepal.Length和Petal.Length兩個欄位建立一個矩陣Length ，
#請將data-frame “iris” 的Sepal.Width和Petal.Width兩個欄位建立一個矩陣Width，
#將Length和Width相乘，並且放入矩陣Area中

iris = data.frame(iris)

a = iris['Petal.Length']
b = iris['Sepal.Width']
Length = cbind(a,b)
Length # Length

x = iris['Sepal.Width']
y = iris['Petal.Length']
Width = cbind(x,y)
Width # Width

area = x * y
colnames(area) <- c("相乘")
area # 相乘
