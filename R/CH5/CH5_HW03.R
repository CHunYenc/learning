#3.1 �Q��scan( ) �T��list �ܼơA�C��list�ܼƪ��T�Ӷ��ئW�٬� ��ID���A��NAME���A��Salary���A�A�N�o�T��list�ܼƦX�֦��@��
#EMPLOYEE�x�}�ܼơC(P84,P118)


listx = scan(what = list(id = "",name = "" , salary = 0))
listx
EMPLOYEE <- matrix(unlist(listx), ncol = 3, byrow = TRUE)
EMPLOYEE

#3.2 ��write.table( ) �NEMPLOYEE�ܼƦs���ɮסA�γr�I�����j�Ÿ��C(P127)

write.table(EMPLOYEE,file <-  "C:/R/employee.txt",sep=",")

#3.3 ��read.table( ) �N���ɮ�Ū�J�ܼ�EMP���C(P125)

EMP <- read.table(file = "C:/R/employee.txt",sep = ",")
EMP

#3.4 ��write( ) �NEMP��X�ܿù��W�C(P121)

write(t(EMP), "",3,sep = ",")