#資料表建立
gender <-  c("男","男","女","男")
q <-  c("同意","同意","反對","反對")
vote <- data.frame("性別"=gender,"意見"=q)
vote

#(1) 
vote[1]


#(2) p.111
vote$性別 <-gender
vote$意見 <- q
vote.xtabs <- xtabs(~q + gender,data = vote)
vote.xtabs
N