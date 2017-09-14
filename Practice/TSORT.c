#include <stdio.h>
    #include <stdlib.h>
     
     
    int cmpfunc (const void * a, const void * b)
    {
    return ( *(long int*)a - *(long int*)b );
    }
     
     
    int main() {
    long int t;
    long int a[1000000]={0};
    scanf("%ld",&t);
    int i;
    for(i=0;i<t;i++)
    {
    scanf("%ld",&a[i]);
    }
    qsort(a, t, sizeof(long int), cmpfunc);
    for(i=0;i<t;i++)
    printf("%ld\n",a[i]);
    return 0;
    }
