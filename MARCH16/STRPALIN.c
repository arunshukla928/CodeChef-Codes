#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
 long long int test,i,j,k,flag=0;
  char str1[10000],str2[10000];
  scanf("%lld",&test);
  for(i=0;i<test;i++){
     flag=0;
     scanf("%s",str1);
     scanf("%s",str2);
     for(j=0;j<strlen(str1);j++){
         for(k=0;k<strlen(str2);k++){
            if(str1[j]==str2[k]){
                printf("Yes\n");
                flag=999999999;
                break;
            }
         }
           if(flag== 999999999)
            break;
           flag++;
     }
     if(flag==strlen(str1))
        printf("No\n");
  }
}
