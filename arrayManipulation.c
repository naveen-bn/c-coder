#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void manipulate(int *arr, int a, int b, int k)
{
    for(int i = a-1; i < b; i++) {
        arr[i] += k;
        printf("%d\t", arr[i]);
    }
printf("\n");
}

int main() {
    int n; 
    int m; 
    int max = 0, res = 0;
    scanf("%i %i", &n, &m);
    int *arr =  (int*) malloc(n*sizeof(int));
    memset(arr, 0, n);

    for(int a0 = 0; a0 < m; a0++){
        int a; 
        int b; 
        int k; 
        scanf("%i %i %i", &a, &b, &k);
        manipulate(arr, a, b, k);

    }
    for(int i =0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d", max);
    free(arr);
    return 0;
}
