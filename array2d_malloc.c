#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int rows = 0, cols = 0, i = 0;
    int **x = NULL;
    scanf("%d %d", &rows, &cols);
    
printf("%d, %d", rows, cols);
    x = (int**) malloc(rows*sizeof(*x));
    for(i = 0; i < rows; i++)
    {
	x[i] = (int*) malloc(cols*sizeof(*x[i]));
    }

    return 0;
}
