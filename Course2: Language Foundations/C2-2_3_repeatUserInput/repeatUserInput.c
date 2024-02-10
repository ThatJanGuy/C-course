#include <stdio.h>

int main(void){
    char wordToRepeat[101];
    int noOfRepeats = 0;

    scanf("%d%s", &noOfRepeats, wordToRepeat);

    for (int i = 0; i < noOfRepeats; i++){
        printf("%s\n", wordToRepeat);
    }
    
    return (0); 
}