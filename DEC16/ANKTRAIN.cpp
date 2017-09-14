#include<stdio.h>
int main(){
 long long int test=0,birth=0,partner=0;
 scanf("%lld",&test);
 while(test--){
    birth=0;
    scanf("%lld",&birth);
   
    if(birth%8==1){
   
    printf("%lldLB\n",birth+3); 
    } 
    if(birth%8==2){
   
    printf("%lldMB\n",birth+3); 
    }
    if(birth%8==3){
   
    printf("%lldUB\n",birth+3); 
    }
 if(birth%8==4){
   
    printf("%lldLB\n",birth-3); 
    }
 if(birth%8==5){
   
    printf("%lldMB\n",birth-3); 
    }
 if(birth%8==6){
   
    printf("%lldUB\n",birth-3); 
    }
 if(birth%8==7){
   
    printf("%lldSU\n",birth+1); 
    }
 if(birth%8==0){
   
    printf("%lldSL\n",birth-1); 
    }
  }
}
