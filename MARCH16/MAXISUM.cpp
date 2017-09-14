// MAXIMIZE THE SUM
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
 long long int test=0,n=0,k=0,a[10000],b[10000],temp[10000],i=0,j=0,l=0,m=0,MAX=0,sum=0,obs=0;
 scanf("%lld",&test);
   while(test--){
         MAX=0;
        scanf("%lld %lld",&n,&k);
        for(l=0;l<n;l++)
            scanf("%lld",&a[l]);
        for(l=0;l<n;l++)
            scanf("%lld",&b[l]);
              // CALCULATION OF MAX
           for(m=0;m<n;m++){
              MAX=MAX+a[m]*b[m];
           }
           for(l=0;l<n;l++){
                     sum=0;
                  // COPYING THE TEMP
                    for(m=0;m<n;m++){
                         temp[m]=a[m];
                    }
               if(a[l] >=0 && b[l] >=0 ){
                   temp[l]=temp[l]+k;
               }
               else if( a[l] < 0 && b[l] < 0){
                   temp[l]=temp[l]-k;
               }
               else if( a[l] >=0 && b[l] <0){
                   temp[l]=temp[l]-k;
               }
              else if( a[l] < 0 && b[l] >= 0){
                   temp[l]=temp[l]+k;
              }
                 for(m=0;m<n;m++){
                    sum=sum+temp[m]*b[m];
                 }
                if(sum > MAX)
                    MAX=sum;
           }
        printf("%lld\n",MAX);
 } // end of test
}
