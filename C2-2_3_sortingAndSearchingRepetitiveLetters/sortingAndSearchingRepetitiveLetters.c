#include <stdio.h>

int main(void){
    char word[51];
    int wordLength = 0;
    int multiplesCounter = 0;

    scanf ("%s", word);

    while (word[wordLength] != '\0'){
        wordLength++;
    }

    // Bubble sort that sorts one less position every iteration.
    for (int maxPositionInWord = wordLength -1 ; maxPositionInWord > 0; maxPositionInWord--){   
        for (int positionInWord = 0; positionInWord < maxPositionInWord; positionInWord++){    
            if (word[positionInWord] > word[positionInWord + 1]){
                char swap = word[positionInWord + 1];
                word[positionInWord + 1] = word[positionInWord];
                word[positionInWord] = swap;
            }
        }
    }

    // Goes through wod backwards to save one variable.
    while (wordLength > 0){
        if (word[wordLength] == word[wordLength - 1]){
            multiplesCounter++;

            while (wordLength > 0 && word[wordLength] == word[wordLength - 1]){
                wordLength--;
            }

        } else {
            wordLength--;
        }
    }

    printf("%d\n", multiplesCounter);

    return 0;
}