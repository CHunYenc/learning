movie_title <- "Avengers:Endgame"

movie_rating <- 4

if ( movie_rating > 8 )
{
  sprintf("%s 的評等是 %s , 推薦去電影院看" , movie_title , movie_rating)
}else if( movie_rating > 5 ){
  sprintf("%s 的評等是 %s , 不推薦去電影院看" , movie_title , movie_rating)
}else{
  sprintf("%s 的評等是 %s , 不要去電影院看" , movie_title , movie_rating)
}