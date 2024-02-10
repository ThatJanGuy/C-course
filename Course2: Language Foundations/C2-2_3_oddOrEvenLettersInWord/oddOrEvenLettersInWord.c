#include <stdio.h>

int main(void){
    char name[51];
    int noOfLetters = 0;

    scanf ("%s", name);

    while (name[noOfLetters] != '\0'){
        noOfLetters++;
    }

    printf("%d", (noOfLetters % 2 == 0) ? 1 : 2);

    return (0);
}