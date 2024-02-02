#include <stdio.h>

void reverseArray(int *);

int main(void){
    int numbersArray[6];
    
    for (int i = 0; i < 6; i++){
        scanf("%d", &numbersArray[i]);
    }

    reverseArray(numbersArray);

    for (int i = 0; i < 6; i++){
        printf("%d ", numbersArray[i]);
    }
    printf("\n");

    return (0);
}

void reverseArray(int * arr){
    for (int i = 0; i < 3; i++){
        * (arr + i) += * (arr + 5 - i);
        * (arr + 5 - i) = * (arr + i) - * (arr + 5 - i);
        * (arr + i) -= * (arr + 5 - i);
    }
}