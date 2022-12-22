set.seed(87)
random_numbers <- sample(1:1000, size = 100, replace = FALSE)
odds <- random_numbers %% 2 == 1

random_numbers[odds]
