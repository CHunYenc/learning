# (1-1) 盢だ计(硈尿)だΘABCDF(だ摸跑计)き单砏玥 
# X=c(49,94,83,67,72,89,60,55,92)
# 计 ???  90           块   A
# 90 >  计 >= 80     块   B
# 80 >  计 >= 70     块   C
# 70 >  计 >= 60     块   D
# 60 >  计           块   F
x = c(49,94,83,67,72,89,60,55,92)
ans <- cut(x,breaks = c(100,89,79,69,59,0) , labels = c("F","D","C","B","A"))
ans
# (1-2)盢ㄤき单だΘ3单   A B C   の
# D           σ
# F           ぃの            块   F
cut(x,breaks=c(0,49,59,max(x)),labels = c("ぃの","σ","の"))