players <- c("Jeremy Lin", "Michael Jordan", "Shaquille O'Neal")

player_heights <- c(191, 198, 216)
player_heights <- player_heights * 0.01
player_heights

player_weights <- c(91, 98, 148)

player_bmis <- c(player_weights/player_heights**2)
player_bmis
sprintf("%s ªº bmi ¬° %.2f",players,player_bmi)

overwight_player <-  player_bmis > 30
players[overwight_player]
