#include<stdio.h>
    int main()
    {
    long int n,k,t,i,count;
    scanf("%ld%ld",&n,&k);
    count = 0;
    for(i=0;i<n;i++)
    {
    scanf("%ld",&t);
    if(t%k==0)
    {
    count++;
    }
    }
    printf("%ld",count);
    return 0;
    }
