x <- 13
i <- 1

divisors <- 0
while(i <= x){
  if(x %% i == 0){
    msg <- sprintf("第 %s 次質數",divisors+1)
    divisors <-  divisors +1
    print(msg)
  }
  i <- i +1
}


if ( divisors == 2){
  ans <- sprintf("%s 是質數。",x)
  
}else{
  ans <- sprintf("%s 不是質數。",x)
}
ans
