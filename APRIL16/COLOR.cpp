#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
long long int test,i=0,n=0,MAX=0,count[3]={0};    // REMENBER TO MAKE THE ARRAY WHOLE ZERO   array[size]={0}
char colour[1000000];
cin>>test;
while(test--){
    cin>>n;
    cin>>colour;
   count[0]=0;
   count[1]=0;
   count[2]=0;
    for(i=0;i<n;i++){
        if(colour[i]=='R'){
            count[0]=count[0]+1;
        }
        else if( colour[i]=='G'){
            count[1]=count[1]+1;
        }
        else if(colour[i]=='B'){
            count[2]=count[2]+1;
        }
    }
    // FINDING THE MAX
    MAX=count[0];
    for(i=0;i<3;i++){
        if(count[i]  > MAX)
            MAX=count[i];
    }
printf("%lld\n",(n-MAX));
}
}
