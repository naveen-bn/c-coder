#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
  Category: Array
  Source  : HackerRank
  Problem :
	Perform left or right rotation on an Array
  Solution :
	[1, 2, 3, 4, 5] =(4 left rotations)=> [5, 1, 2, 3, 4]
  Caveats :
	Think of it like circular buffer
	Additional array
	LeftRotation:
 	copy d-1 elements to starting from res[n-d]
	copy (remaining)  n-d elements starting from res[0]	
	Right Rotation:
	copy d elements to starting from res[n-d-1]
	copy (remaining) n-d elements starting from res[0]
  Complexity: O(n)
 */

int* leftRotation(int a_size, int* a, int d) {
    int *res = malloc(sizeof(int) * a_size);

    for(int i=0; i < a_size; i++) {
        res[i]=a[((i+(a_size-d))%a_size)]; // right rotation
	//res[i]= a[(i+d)%a_size];
    }
    return res;
}

int main() {
    int n; 
    int d; 
    scanf("%i %i", &n, &d);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
    }
    int result_size = n;
    int* result = leftRotation(n, a, d);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}
