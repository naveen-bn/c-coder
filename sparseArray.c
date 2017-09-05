#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define LEN 20

void sparseStrings(char **input, int inputNum, char **query, int queryNum)
{
    int match = 0;
    for(int i = 0; i < queryNum; i++){
        for(int j =0; j < inputNum; j++) {
            if(strncmp(input[j], query[i], 20) == 0) {
                match++;
            }
        }
        printf("%d\n", match);
        match = 0;
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int inputNum = 0, queryNum = 0;
  
    //printf("Enter Number of Input strings\n");
    scanf("%d", &inputNum);  
    char *input[inputNum];
    for(int i = 0; i < inputNum; i++){
        input[i] = (char*)malloc(LEN*sizeof(char));
    }    
    //printf("Enter input strings");
    for(int i=0; i < inputNum; i++) {
        scanf("%s", input[i]);
    }
    
    //printf("Enter Number of query strings\n");
    scanf("%d", &queryNum);
    char *query[queryNum];
    for(int i = 0; i < queryNum; i++){
        query[i] = (char*)malloc(LEN*sizeof(char));
    }  
    //printf("Enter query strings");
    for(int i=0; i < queryNum; i++) {
        scanf("%s", query[i]);
    }
    

    sparseStrings(input, inputNum, query, queryNum);  
    return 0;
}


