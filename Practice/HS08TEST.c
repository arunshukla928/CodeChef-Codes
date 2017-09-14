#include<stdio.h>
int main(){
   
  unsigned int withdraw;
   float balance;
  scanf("%d %f",&withdraw,&balance);   
   
   if(withdraw%5==0&& balance>=withdraw+0.50){
   
      balance=balance-withdraw-0.50;
      printf("%0.2f",balance);
      
  
   }
    
    else{
    
        printf("%0.2f",balance);
    }
  
return 0;
}
