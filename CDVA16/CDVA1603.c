#include<stdio.h>
// function eclaration check
int check(float a[100],float num,int n){
   int m=0,count=0;
   for(m=0;m<n;m++){
     if(a[m]>num)
        count++;
   }
  return count;
}
int main(){
  int test,n,query,i,j,k;
  float a[100],num;
  scanf("%d\n",&test);
   for(i=0;i<test;i++){
     scanf("%d\n",&n);
     scanf("%d\n",&query);
       for(j=0;j<n;j++){
        scanf("%f ",&a[j]);
       }
      for(k=0;k<query;k++){
        scanf("%f",&num);
      printf("%d\n",check(a,num,n));
      }
   }
}
