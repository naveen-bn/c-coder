#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {
    long int a,b,k,sum,i,j,max=0,x=0;
    int n;
    int m;
    scanf("%i %i", &n, &m);
    int *arr =  (int*) malloc(n*sizeof(int));

    for(i=0;i<m;i++)
    {
        scanf("%ld %ld %ld", &a, &b, &k);
        arr[a]+=k;
        if((b+1)<=n) arr[b+1]-=k;
    }

    for(i=1;i<=n;i++)
    {
       x=x+arr[i];
       if(max<x) max=x;

    }

    printf("%ld", max);
    return 0;
}
