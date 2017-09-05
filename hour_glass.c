#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void max_hour_glass_sum(int arr[][6], int size)
{
    int  i = 0, j = 0, k = -64;
    int sum = 0;
    
    for(i = 0; i <= (size/2); i++) {
        for(j = 0; j <= (size/2); j++) {
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
 //           printf("%d ", sum);
            if(sum > k) {
                k = sum;
//		printf("K = %d", k);
            }        
        }
    }
 
    printf("%d", k);
}

int main(){
    int arr[6][6];
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    
    max_hour_glass_sum(arr, 6);
    return 0;
}

