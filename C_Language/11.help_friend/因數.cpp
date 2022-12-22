#include<stdio.h>
#include<stdlib.h>

void num(int);
int main()
{
 int n;
 printf("請輸入一個整數(介於10~100):");                           
 scanf("%d",&n);                                                
 num(n);

}


void num(int n)
 {
 
     if(n>=10 && n<=100)                                           
     {
         for(int i=1;i<=n;i++)                              
         {
          if(n % i == 0)
          printf("%d",n);                        
         }
     }
     
     else              
  {                                              
             printf("錯誤訊息\n");   
   }  
  return ;                          
 }