x <- 55
y <- 5566
even_counter <- 0

i <- 0

while(i <= y){
  if (i%%2 == 0){
    even_counter <- even_counter + 1
  }
  i <- i + 1
}

even_counter
