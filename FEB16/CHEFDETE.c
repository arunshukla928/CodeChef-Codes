#include<stdio.h>
        #define max 1000000
        int main(){
         long long  int n;
           scanf("%lld",&n);
          long long int num ,approached[max];
          long long  int i,value=0;
            for(i=0;i<n;i++){
                scanf("%lld",&num);
                   approached[num]=1;
            }
           for(i=1;i<=n;i++){
                if(approached[i]!=1){
                    printf("%lld ",i);
                }
           }
        }
