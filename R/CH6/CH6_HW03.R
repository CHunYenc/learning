#(3)����Ӫ���p�U:
#(3-1)��X���u�M��i�׾ǮզW�١A�S���i�ת����u���C�X
#(3-2)��X���u�M��i�׾ǮզW�١A�S���i�ת����u�]�n�C�X��򥻸��
table_employee <- read.csv(file="C:\\r\\employees.csv",header = T)
table_employee
table_school <- read.csv(file="C:\\r\\school.csv",header = T)
table_school

merge(table_employee,table_school)
merge(table_employee,table_school,all.x=T)