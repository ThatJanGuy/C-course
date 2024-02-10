#include <stdio.h>

int main(void){
    char word[51];
    int wordLength = 0;
    int tFound = 0; // The course doesn't work with bool. At least not so far.
    int tInPosition = 0; 
    
    scanf("%s", word);

    while (word[wordLength] != '\0'){
        if ((word[wordLength] == 't' || word[wordLength] == 'T') && !tFound){
            tFound = 1;
            tInPosition = wordLength;
        }
        wordLength++;
    }

    if (!tFound){
        printf("-1\n");
    } else if (tInPosition <= wordLength / 2) {
        printf("1\n");
    } else {
        printf("2\n");
    }

    return (0);
}