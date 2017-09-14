#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main(){
  long long int test=0,N=0,i=0,j=0,a[100000];
   scanf("%lld",&test);
   
  while(test--){
         scanf("%lld",&N);
     
     
         
         for(i=0;i<N;i++){
                scanf("%lld",&a[i]);       
        }
    // Sorting The NO 
    qsort(a,N, sizeof(long long int), cmpfunc);
          
        for(i=0;i<N;i++){
                
               if(a[i]+1 != a[i+1]){
                           if(a[i+1]+1 == a[i+2]){
                                    printf("%lld\n",a[i]);
                                    break;
                               }
                            else{
                                         printf("%lld\n",a[i+1]);
                                          break;
                             }
 
                 }        
       }
   }
}
