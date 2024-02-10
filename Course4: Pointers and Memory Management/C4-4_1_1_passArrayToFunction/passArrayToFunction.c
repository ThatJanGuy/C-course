#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

/* Write your function behind() here: */

void behind(int * scores, int arraySize){
    int highScore = 0;

    for(int i = 0; i < arraySize; i++){
        if(highScore < scores[i]){
            highScore = scores[i];
        }
    }

    for(int i = 0; i < arraySize; i++){
        scores[i] = highScore - scores[i];
    }
}