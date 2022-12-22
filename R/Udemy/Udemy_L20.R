player_name <- "Jeremy Lin"
player_height <- 1.91
player_weight <- 91
player_bmi <- player_weight / player_height**2

if (player_bmi < 18.5)
{
  msg = "過輕"
}else if(player_bmi < 25)
{
  msg = "正常"
}else if(player_bmi < 30){
  msg = "過重"
}else if(player_bmi >= 30){
  msg = "超重"
}

sprintf("%s bmi = %.2f , %s",player_name,player_bmi,msg)
