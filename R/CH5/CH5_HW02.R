#2.1 ��excel �إߤ@��պ�����b�ᡨ�A�䤤���|�����W�٤��O��
#���b�ᡨ�A���������A���Ȥ�m�W���M���l�B���A�п�J�T����ơA�ñN���ন
#.csv�榡���ɮסC
#2.2 ��read.csv( ) Ū�J���ɮסC(P125)

read.csv(file = "C:/R/accounts.csv",header = T)

#2.3 ��read.table( ) Ū�J���ɮצA��write.csv( )�N���ɮת����e�s�J�éR�W����account.csv���C (P125-P127)

a = read.table(file = "C:/R/accounts.csv")
write.csv(a,file = "C:/R/account.csv")