h = rnorm(100, 170, 1)
w = rnorm(100,68.6,0.7)
cbind(h,w)

plot(h~w)

model = lm(h~w) 
abline(model)
