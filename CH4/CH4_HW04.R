#學號：b10610020 姓名：陳雋諺
#4.請自行製作一個2*3以及3*2的矩陣，將它們的相加以及相乘後的結果列出
array_A = runif(6,10,20)
array_B = runif(6,100,200)
Matrix_1 = matrix(round(array_A),nrow=3,ncol=2)
Matrix_1
Matrix_2 = matrix(round(array_B),nrow=2,ncol=3)
Matrix_2
#matrix.add = Matrix_1 + Matrix_2 不同 m*n 的矩陣無法相加
matrix.Multiply = Matrix_1 %*% Matrix_2
matrix.Multiply
