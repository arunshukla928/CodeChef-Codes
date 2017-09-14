#include<stdio.h>
#include<math.h>
int main(){
   long long int test,N,sum=0,i;
  scanf("%lld",&test);
  while(test){
       sum=0;
       scanf("%lld",&N);
   
       
       sum=N*(N+1);
       sum=sum/2;
 
       printf("%lld\n",sum);
     test--;
    }
}
