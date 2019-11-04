#3.	叫︽ミ100掸戈ㄤキА计夹非畉跑钵计程程材25κだ计の材75κだ计(叫籔瓜)

#ㄏノ繦诀跑计承硑 100 计
num_100 <- runif(100,1,500)
print("== 承硑 100 计 ==")
num_100

avg = mean(num_100) #キА计
s = sd(num_100) #夹非畉
v = var(num_100) #跑钵计
b = max(num_100) #程
z = min(num_100) #程
Q1 <- quantile(num_100,1/4) #25%
Q3 <- quantile(num_100,3/4) #75%
sprintf("キА计 : %.2f , 夹非畉 : %.2f , 跑钵计 : %.2f , 程 : %.2f , 程 : %.2f , 材25κだ计 : %.2f , 材75κだ计 : %.2f",avg,s,v,b,z,Q1,Q3)
