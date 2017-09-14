#include<stdio.h>
int main()
{ int i=0;
 int num[100];
 for(i=0;i<100;i++){
    scanf("%d",&num[i]);
 }
 for(i=0;num[i]!=42;i++){
    printf("%d\n",num[i]);
 }
 return 0;
}
