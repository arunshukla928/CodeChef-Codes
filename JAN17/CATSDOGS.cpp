#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
 long long int i=0,test=0,C=0,D=0,L=0,Exp=0,N=0;
 scanf("%lld",&test);
 while(test){
  Exp=0;
  N=0;
 
  scanf("%lld %lld %lld",&C,&D,&L);
  Exp=(L/4);
  if(L%4==0){
    N=Exp-D;
    
    if(N>=0 && N<=C){
       printf("yes\n");
   }
 
   else {
      
        printf("no\n");
    }
  }
 else{
 
     printf("no\n");
    
  }
   test--;
 }
}
