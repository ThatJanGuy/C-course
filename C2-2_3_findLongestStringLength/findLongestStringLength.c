#include <stdio.h>

int main(void){
    char word[101];
    int numberOfWords = 0;
    int longestWordsLength = 0;

    scanf("%d", &numberOfWords);

    for (int i = 0; i < numberOfWords; i++){
        int lettersInWord = 0;
        
        scanf("%s", word);
        
        while (word[lettersInWord] != '\0'){
            lettersInWord++;
        }

        if (lettersInWord > longestWordsLength){
            longestWordsLength = lettersInWord;
        }
    }
    printf("%d", longestWordsLength);

    return (0);
}